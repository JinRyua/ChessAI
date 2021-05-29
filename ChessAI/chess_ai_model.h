#define CHESS_AI_MODEL
#ifndef CHESS_AI_MODEL

#include <vector>
#include <string>

class ChessAIModel {
private:
	int from_row;
	int from_col;
	int to_row;
	int to_col;

public:
	ChessAIModel();
	~ChessAIModel();

	void Calculate();	//calculate action now turn;
	
	int GetFromRow();	//get row of move from
	int GetFromCol();	//get col of move from
	int GetToRow();		//get row of move to
	int GetToCol();		//get col of move to

};

#endif