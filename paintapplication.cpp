#include<iostream>
#include "rectangle.h"
#include "square.h"
#include "shape.h"
#include "cmdmanager.h"
#include "movecmd.h"
#include "rotatecmd.h"
#include "scale.h"
#include "circle.h"

using namespace std;


int main()
{

	shape* sh[3];
	sh[0] = new square(5, 0, 0);
	std::cout << "Drawing a Square at " << std::endl;
		sh[0]->display();
	sh[1] = new rectangle(5, 10, 0, 0);
	std::cout << "Drawing a Rectangle at " << std::endl;
	sh[1]->display();

	sh[2] = new circle(9, 0, 0);
	std::cout << "Drawing a Circle at " << std::endl;
	sh[2]->display();

	cmdmanager* cmgr = new cmdmanager();
	movecmd* cmd1 = new movecmd(sh[0], 2, 3);
	cmgr->invoke(cmd1);

	movecmd* cmd2 = new movecmd(sh[1], 5, 8);
	cmgr->invoke(cmd2);
	cout << "" << endl;
	cout << "After Moving the sqaure Object" << endl;
	cout << "" << endl;
	for (int i = 0; i < 3; i++)
	{
		sh[i]->display();
	}
	rotatecmd* cmd3 = new rotatecmd(sh[1]);
	cmgr->invoke(cmd3);
	cout << "" << endl;
	cout << "After Moving the Rectangle Object" << endl;
	cout << "" << endl;
	for (int i = 0; i < 3; i++)
	{
		sh[i]->display();
	}
	rotatecmd* cmd4 = new rotatecmd(sh[0]);
	cmgr->invoke(cmd4);
	cout << "" << endl;
	cout << "After Rotating Square" << endl;
	cout << "" << endl;
	for (int i = 0; i < 3; i++)
	{
		sh[i]->display();
	}
	scale* cmd5 = new scale(sh[0], 5);
	cmgr->invoke(cmd5);
	cout << "" << endl;
	cout << "After Scaling the sqaure Object" << endl;
	cout << "" << endl;
	for (int i = 0; i < 3; i++)
	{
		sh[i]->display();
	}
	scale* cmd6 = new scale(sh[1], 5);
	cmgr->invoke(cmd6);
	cout << "" << endl;
	cout << "After Scaling the rectangle Object" << endl;
	cout << "" << endl;
	for (int i = 0; i < 3; i++)
	{
		sh[i]->display();
	}
	cmgr->undo();
	cout << "" << endl;
	cout << "Undoing..."<<endl;
	cout << "" << endl;
	for (int i = 0; i < 3; i++)
	{
		sh[i]->display();
	}
	cmgr->undo();
	cout << "" << endl;
	cout << "Undoing"<<std::endl;
	cout << "" << endl;
	for (int i = 0; i < 3; i++)
	{
		sh[i]->display();
	}
	cmgr->redo();
	cout << "" << endl;
	cout << "Redoing"<<std::endl;
	cout << "" << endl;
	for (int i = 0; i < 3; i++)
	{
		sh[i]->display();
	}
	return 0;
}
