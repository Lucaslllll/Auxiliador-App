#include <iostream>
#include <gtkmm.h>
#include <gtkmm/application.h>
#include <gtkmm/window.h>
#include "AuxiliadorDisplay.hpp"


using namespace Gtk; // para evitar de usar Gtk:: 
using namespace std;
using namespace sigc; // para evitar de usar sigc::

void on_button_help_click();



int main(int argc, char* argv[]){
	auto app = Gtk::Application::create(argc, argv, "org.gtkmm.criandoleoes");

	// Main kit(argc, argv);

	Window window;
	ExampleWindow tela;

	Button button_settings("Configurações");
	Button button_help("Ajuda");

	window.set_default_size(640, 480);
	window.set_title("Auxiliador App Enterprise");
	window.set_position(WIN_POS_CENTER);
	window.set_border_width(10);


	button_help.signal_clicked().connect(
		ptr_fun(&on_button_help_click)
	);


	// button_settings.show();
	// window.add(button_settings);


	button_help.set_border_width(7);
	button_help.show();
	window.add(button_help);


	// Main::run(window);




	return app->run(tela);
}




void on_button_help_click(){

	cout << "Entrou Aqui";

}