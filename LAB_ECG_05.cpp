// LAB_ECG_05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "clip.h"
#include "vec3.h"

int main()
{
	std::vector<egc::vec3> vecELM;
	vecELM.push_back(egc::vec3(0, 2, 1));
	vecELM.push_back(egc::vec3(6, 2, 1));
	vecELM.push_back(egc::vec3(6, 4, 1));
	vecELM.push_back(egc::vec3(0, 4, 1));

	egc::vec3 p1 = egc::vec3(7, 7, 1);
	egc::vec3 p2 = egc::vec3(7, 7, 1);

	//printf("%d\n",lineClip_CyrusBeck(vecELM, p1, p2));
	lineClip_CohenSutherland(vecELM, p1, p2);
	printf("%f-%f %f-%f",p1.x,p1.y,p2.x,p2.y);
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
