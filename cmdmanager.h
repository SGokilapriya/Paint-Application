#pragma once
#include "command.h"
#include<stack>
#include "shape.h"
#include<iostream>
	using namespace std;
	class cmdmanager
	{
	public:
		shape* shapes;
		void invoke(command* obj);
		stack<command*> undostack;
		stack<command*> redostack;
		void undo();
		void redo();
	
	};




