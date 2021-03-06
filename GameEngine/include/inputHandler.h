/**
 * This handles input by the user, placing this input information into a shared struct for use by the game logic.
 * Include keyboard and mouse input.
 */

#ifndef INPUT_HANDLER_H
#define INPUT_HANDLER_H

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "renderer.h"

namespace Engine {

	struct InputState {
		bool ePress;
		bool wPress;
		bool aPress;
		bool sPress;
		bool dPress;
		bool upPress;
		bool leftPress;
		bool rightPress;
		bool downPress;
		bool spacePress;
		bool leftCtrlPress;
		bool escPress;
		double mousex;
		double mousey;
	};
	
	class InputHandler {
        public:
			InputState* inState;

            /** Default constructor */
            InputHandler(Renderer* rend, Window* window);
            /** Default destructor */
            virtual ~InputHandler();

			void readInputs();
			
			InputState* getState();
			
			void setState(bool val);
			
			static void key_callback(GLFWwindow* Window, int key, int scancode, int action, int mods);

        protected:

        private:
			Window* wind;
    };
} //namespace Engine
#endif // INPUT_HANDLER_H
