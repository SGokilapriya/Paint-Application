#include "cmdmanager.h"
#include "command.h"
#include<stack>
#include "shape.h"
#include<iostream>
using namespace std;
void cmdmanager::invoke(command* obj)
{
	obj->execute();
	undostack.push(obj);
}
void cmdmanager::undo()
{
	command* temp;
	if (!undostack.empty())
	{
		temp = undostack.top();
		redostack.push(temp);
		temp->unexecute();
		undostack.pop();
	}
	else
	{
		cout << "No Action to perform";
	}
}
void cmdmanager::redo()
{
	command* temp;
	if (!redostack.empty())
	{
		temp = redostack.top();
		undostack.push(temp);
		temp->execute();
		redostack.pop();
	}
	else
	{
		cout << "No action to perform\n";
	}
}