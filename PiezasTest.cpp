/**
 * Unit Tests for Piezas
**/

#include <gtest/gtest.h>
#include "Piezas.h"
 
class PiezasTest : public ::testing::Test
{
	protected:
		PiezasTest(){} //constructor runs before each test
		virtual ~PiezasTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};
TEST(PiezasTest, resetTest1)
{
	Piezas obj;
	Piece a = obj.dropPiece(0);
	obj.reset();
	ASSERT_EQ(Blank, obj.pieceAt(0, 0));
}
TEST(PiezasTest, resetTest2)
{
	Piezas obj;
	obj.reset();
	ASSERT_EQ(Blank, obj.pieceAt(0, 0));
}
TEST(PiezasTest, dropPieceTest1)
{
	Piezas obj;
	ASSERT_EQ(X, obj.dropPiece(0));
}
TEST(PiezasTest, dropPieceTest2)
{
	Piezas obj;
	Piece a = obj.dropPiece(0);
	ASSERT_EQ(O, obj.dropPiece(0));
}
TEST(PiezasTest, dropPieceTest3)
{
	Piezas obj;
	ASSERT_EQ(Invalid, obj.dropPiece(-1));
}
TEST(PiezasTest, dropPieceTest4)
{
	Piezas obj;
	ASSERT_EQ(Invalid, obj.dropPiece(4));
}
TEST(PiezasTest, dropPieceTest5)
{
	Piezas obj;
	Piece a = obj.dropPiece(0);
	a = obj.dropPiece(0);
	ASSERT_EQ(X, obj.dropPiece(0));
}
TEST(PiezasTest, dropPieceTest6)
{
	Piezas obj;
	Piece a = obj.dropPiece(0);
	a = obj.dropPiece(0);
	a = obj.dropPiece(0);
	a = obj.dropPiece(0);
	ASSERT_EQ(Blank, obj.dropPiece(0));
}
TEST(PiezasTest, pieceAtTest1)
{
	Piezas obj;
	ASSERT_EQ(Blank, obj.pieceAt(0, 0));
}
TEST(PiezasTest, pieceAtTest2)
{
	Piezas obj;
	Piece a = obj.dropPiece(0);
	ASSERT_EQ(X, obj.pieceAt(0, 0));
}
TEST(PiezasTest, pieceAtTest3)
{
	Piezas obj;
	Piece a = obj.dropPiece(0);
	a = obj.dropPiece(0);
	ASSERT_EQ(X, obj.pieceAt(0, 0));
}
TEST(PiezasTest, pieceAtTest4)
{
	Piezas obj;
	obj.reset();
	ASSERT_EQ(Blank, obj.pieceAt(0, 0));
}
TEST(PiezasTest, pieceAtTest5)
{
	Piezas obj;
	ASSERT_EQ(Invalid, obj.pieceAt(3, 0));
}
TEST(PiezasTest, pieceAtTest6)
{
	Piezas obj;
	ASSERT_EQ(Invalid, obj.pieceAt(-1, 0));
}
TEST(PiezasTest, pieceAtTest7)
{
	Piezas obj;
	ASSERT_EQ(Invalid, obj.pieceAt(0, -1));
}
TEST(PiezasTest, pieceAtTest8)
{
	Piezas obj;
	ASSERT_EQ(Invalid, obj.pieceAt(0, 4));
}
TEST(PiezasTest, gameStateTest1)
{
	Piezas obj;
	ASSERT_EQ(Invalid, obj.gameState());
}
TEST(PiezasTest, gameStateTest3)
{
	Piezas obj;
	Piece a = obj.dropPiece(0);
	a = obj.dropPiece(0);
    a = obj.dropPiece(1);
	a = obj.dropPiece(0);
    a = obj.dropPiece(2);
	a = obj.dropPiece(1);
    a = obj.dropPiece(3);
	a = obj.dropPiece(1);
    a = obj.dropPiece(2);
	a = obj.dropPiece(3);
    a = obj.dropPiece(2);
	a = obj.dropPiece(3);

	ASSERT_EQ(X, obj.gameState());
}
