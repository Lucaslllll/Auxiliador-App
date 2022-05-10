#include <iostream>
#include <gtkmm.h>
#include <gtkmm/application.h>
#include <gtkmm/window.h>

using namespace Gtk; // para evitar de usar Gtk:: 

int main(int argc, char* argv[]){

	Main kit(argc, argv);

	Window window;
	window.set_default_size(640, 480);
	window.set_title("Auxiliador App Enterprise");
	window.set_position(WIN_POS_CENTER);



	Main::run(window);




	return 0;
}