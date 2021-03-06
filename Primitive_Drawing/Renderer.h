#include <gl/glew.h>
#include <GL/glfw3.h>
#include <GLM/gtc/matrix_transform.hpp>
#include <GLM/gtx/transform.hpp>
#include "shader.hpp"
#include <iostream>
#include "FPCamera.h"
#include "texture.h"
#include <cmath>

#pragma once

class Renderer
{
	GLuint vertexArrayID;
	GLuint vertexBufferID;
	GLuint programID;
	GLuint myIndicesBufferID;

	GLuint mvpMatrixID;
	GLuint mRenderingModeID;

	glm::mat4 MVP_matrix;

	glm::mat4 ProjectionMatrix;
	glm::mat4 ViewMatrix;
	glm::mat4 ModelMatrix;

	FPCamera Cam;

	GLint mRenderingMode;

	glm::mat4 ModelPacMan;
	glm::mat4 MVPPacMan;

	glm::mat4 ModelLinky;
	glm::mat4 MVPLinky;

	glm::mat4 ModelClyde;
	glm::mat4 MVPClyde;

	glm::mat4 ModelBlinky;
	glm::mat4 MVPBlinky;

	glm::mat4 Dots_Model[42];
	glm::mat4 Dots_MVP[42];

	int PacMan_Scour = 0;

	//%%%%%%%%%%%%%%%%%%%% Define Model and MVP for Out Side Brorder %%%%%%%%%%%%%%%%%%%%
	glm::mat4 Model_Out_Left;
	glm::mat4 MVP_Out_Left;

	glm::mat4 Model_Out_Top;
	glm::mat4 MVP_Out_Top;

	glm::mat4 Model_Out_Right;
	glm::mat4 MVP_Out_Right;

	glm::mat4 Model_Out_Down;
	glm::mat4 MVP_Out_Down;

	//%%%%%%%%%%%%%%%%%%%% Define Model and MVP for Q1 Brorder %%%%%%%%%%%%%%%%%%%%%%%%%%
	glm::mat4 Model_Q1_Left;
	glm::mat4 MVP_Q1_Left;

	glm::mat4 Model_Q1_Right;
	glm::mat4 MVP_Q1_Right;

	glm::mat4 Model_Q1_Down;
	glm::mat4 MVP_Q1_Down;

	glm::mat4 Model_Q1_Top;
	glm::mat4 MVP_Q1_Top;

	//%%%%%%%%%%%%%%%%%%%% Define Model and MVP for Q2 Brorder %%%%%%%%%%%%%%%%%%%%%%%%%%
	glm::mat4 Model_Q2_Left;
	glm::mat4 MVP_Q2_Left;

	glm::mat4 Model_Q2_Right;
	glm::mat4 MVP_Q2_Right;

	glm::mat4 Model_Q2_Down;
	glm::mat4 MVP_Q2_Down;

	glm::mat4 Model_Q2_Top;
	glm::mat4 MVP_Q2_Top;

	//%%%%%%%%%%%%%%%%%%%% Define Model and MVP for Q3 Brorder %%%%%%%%%%%%%%%%%%%%%%%%%%
	glm::mat4 Model_Q3_Left;
	glm::mat4 MVP_Q3_Left;

	glm::mat4 Model_Q3_Right;
	glm::mat4 MVP_Q3_Right;

	glm::mat4 Model_Q3_Down;
	glm::mat4 MVP_Q3_Down;

	glm::mat4 Model_Q3_Top;
	glm::mat4 MVP_Q3_Top;

	//%%%%%%%%%%%%%%%%%%%% Define Model and MVP for Q4 Brorder %%%%%%%%%%%%%%%%%%%%%%%%%%
	glm::mat4 Model_Q4_Left;
	glm::mat4 MVP_Q4_Left;

	glm::mat4 Model_Q4_Right;
	glm::mat4 MVP_Q4_Right;

	glm::mat4 Model_Q4_Down;
	glm::mat4 MVP_Q4_Down;

	glm::mat4 Model_Q4_Top;
	glm::mat4 MVP_Q4_Top;



	Texture* BorderFront;
	Texture* PacManTexture;
	Texture* LinkyTexture;
	Texture* BlinkyTexture;
	Texture* ClydeTexture;

	Texture* BorderSide;
	Texture* FloorMat;

	
	int Blinky_Counter = 0;
	float Blinky_Z = -0.85;

	int Clyde_Counter = 0;
	float Clyde_X = -0.85;

	int Linky_Counter = 0;
	float Linky_X = +0.0;
	int First_Time = 1;

	int Personal_Camera = 0;
	float Zoom = 0.5;

	double Current_PacMan_X = -0.85;
	double Current_PacMan_Z = 0.85;

	double Current_Inky_X = 0.0;
	double Current_Inky_Z = -0.05;

	double Current_Clyde_X = -0.85;
	double Current_Clyde_Z = -0.85;

	double Current_Blinky_X = 0.85;
	double Current_Blinky_Z = -0.85;

public:
	Renderer();
	~Renderer();

	void Initialize();
	void Draw();
	void Cleanup();
	void Update();
	void HandleKeyboardInput(int);
	void HandleMouseClick(double, double);

	void Model_Border();
	void MVP_Border();
	void Draw_Border();

	void Blinky_Moveing();
	void Linky_Moveing();
	void Clyde_Moveing();

	void CheckDynamicCollision();
};
