#pragma once
#include <string>
#include <iostream>
#include "Direction.hpp"
namespace ariel{
	class Board{
		public:
		void post(int row,unsigned int col, Direction d,std::string s);
		std::string read(int row, int col, Direction d,int len);
		void show();
	};
};