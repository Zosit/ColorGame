/**
 * The Renderer handles the generation of graphics in the engine.
 * It must not contain ANY game logic, but rather be able to handle graphical states created from said logic
 */

#ifndef RENDER_H
#define RENDER_H

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/mat4x4.hpp>
#include "glm/gtc/matrix_transform.hpp"
#include <glm/gtc/type_ptr.hpp>
#include "window.h"
#include "cube.h"

namespace Engine {

	struct RenderState {
		bool leftTri;
		float xPos;
		float yPos;		
		float zPos;		
		long double xRotate;
		long double yRotate;
	};
	
	class Renderer {
        public:
			RenderState* rendState;
			
            /** Default constructor */
            Renderer(); 
            /** Default destructor */
            virtual ~Renderer();

			void render();
			
			Window* getWindow();
			RenderState* getState();

			void setInputs(GLFWkeyfun func, void* inState);
        protected:

        private:
			int shaderProgram;
			Window *wind;
			Cube *cube;
    };

} //namespace Engine


#endif // RENDER_H
