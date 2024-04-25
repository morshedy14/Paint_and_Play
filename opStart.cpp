#include "opStart.h"
#include"GUI/GUI.h"
#include"Shapes/Shape.h"
#include"controller.h"
#include <iostream>


opStart::opStart(controller* pCont):operation(pCont)
{
}

opStart::~opStart()
{
}

void opStart::Execute()
{
	GUI* pGUI = pControl->GetUI();
	Graph* pGraph = pControl->getGraph();
	pGraph->duplicateShapes();
	pGraph->Scrample();
	pControl->UpdateInterface();
	pGUI->PrintMessage("You clicked on start button");

	
}

void opStart::Undo()
{
}

void opStart::Redo()
{
}
