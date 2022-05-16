// gtkmm imports
#include <gtkmm.h>
#include <gtkmm/application.h>
#include <gtkmm/window.h>
#include <gtkmm/fixed.h>
#include <gtkmm/box.h>
#include <gtkmm/alignment.h>
#include <gtkmm/entry.h>
#include <gtkmm/label.h>
#include <gtkmm/button.h>
#include <gtkmm/frame.h>
#include <gtkmm/linkbutton.h>
#include <gtkmm/messagedialog.h>


#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;
using namespace Gtk;
using namespace sigc;

class DisplayTarefas : public Window {

public:
    vector< string > pal;
    DisplayTarefas();

    void abrir_texto(string caminho_tarefas);
    void set_hierarchy();
    void draw_widgets();
    

    void init_buttons();

protected:

  //Child widgets:
  // Box m_HBox;
  // Box m_VBox, m_VBox2;


    Box m_box1, m_box2, m_box3, m_box4, m_box5;

    Entry m_entry1, m_entry2, m_entry3; 
    Fixed m_fixed;

    Alignment m_alignment1, m_alignment2, m_alignment3, m_alignment4, m_alignment5;
    Frame m_frame1, m_frame2, m_frame3, m_frame4, m_frame5;

    Label m_label1, m_label2, m_label3, m_label4, m_label5, m_label6;

    Button button_help, button_settings, button_adicionar, button_remover;
    LinkButton m_linkbutton;

    Grid m_grid, m_grid_lista, m_grid_opcoes;

    void on_button_exporter();
    void on_button_importer();

};

