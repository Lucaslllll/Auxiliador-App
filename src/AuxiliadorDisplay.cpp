#include "AuxiliadorDisplay.hpp"


ExampleWindow::ExampleWindow()
:
	m_HBox(Gtk::ORIENTATION_HORIZONTAL, 5),
	m_VBox(Gtk::ORIENTATION_VERTICAL, 5),
	m_VBox2(Gtk::ORIENTATION_VERTICAL, 5),
	m_Frame_Normal("Normal Label"),
	m_Frame_Multi("Multi-line Label"),
	m_Frame_Left("Left Justified Label"),
	m_Frame_Right("Right Justified Label"),
	m_Frame_LineWrapped("Line wrapped label"),
	m_Frame_FilledWrapped("Filled, wrapped label"),
	m_Frame_Underlined("Underlined label"),
	m_Label_Normal("_This is a Normal label", true),
	m_Label_Multi("This is a Multi-line label.\nSecond line\nThird line"),
	m_Label_Left("This is a Left-Justified\nMulti-line label.\nThird line"),
	m_Label_Right("This is a Right-Justified\nMulti-line label.\nThird line"),
	m_Label_Underlined("This label is underlined!\n"
					"This one is underlined in quite a funky fashion")
{
	set_title("Text");
	set_border_width(5);

	add(m_HBox);

	m_HBox.pack_start(m_VBox, Gtk::PACK_SHRINK);

	m_Frame_Normal.add(m_Label_Normal);
	m_VBox.pack_start(m_Frame_Normal, Gtk::PACK_SHRINK);

	m_Frame_Multi.add(m_Label_Multi);
	m_VBox.pack_start(m_Frame_Multi, Gtk::PACK_SHRINK);

	m_Label_Left.set_justify(Gtk::JUSTIFY_LEFT);
	m_Frame_Left.add(m_Label_Left);
	m_VBox.pack_start(m_Frame_Left, Gtk::PACK_SHRINK);

	m_Label_Right.set_justify(Gtk::JUSTIFY_RIGHT);
	m_Frame_Right.add(m_Label_Right);
	m_VBox.pack_start(m_Frame_Right, Gtk::PACK_SHRINK);

	m_HBox.pack_start(m_VBox2, Gtk::PACK_SHRINK);

	m_Label_LineWrapped.set_text(
					"This is an example of a line-wrapped label.  It "
					/* add a big space to the next line to test spacing */
					"should not be taking up the entire             "
					"width allocated to it, but automatically "
					"wraps the words to fit.  "
					"The time has come, for all good men, to come to "
					"the aid of their party.  "
					"The sixth sheik's six sheep's sick.\n"
					"     It supports multiple paragraphs correctly, "
					"and  correctly   adds "
					"many          extra  spaces. ");
	m_Label_LineWrapped.set_line_wrap();
	m_Frame_LineWrapped.add(m_Label_LineWrapped);
	m_VBox2.pack_start(m_Frame_LineWrapped, Gtk::PACK_SHRINK);

	abrir_texto("../data/tarefas.txt");
	string texto = "";

	for (unsigned int i = 0; i < pal.size(); ++i){
        texto = texto + pal[i] + "\n";
    }
	
	m_Label_FilledWrapped.set_text(
						texto
       					
					);
	

	m_Label_FilledWrapped.set_justify(Gtk::JUSTIFY_FILL);
	m_Label_FilledWrapped.set_line_wrap();
	m_Frame_FilledWrapped.add(m_Label_FilledWrapped);
	m_VBox2.pack_start(m_Frame_FilledWrapped, Gtk::PACK_SHRINK);

	m_Label_Underlined.set_justify(Gtk::JUSTIFY_LEFT);
	m_Label_Underlined.set_pattern (
					"_________________________ _ _________ _ ______"
					"     __ _______ ___");
	m_Frame_Underlined.add(m_Label_Underlined);
	m_VBox2.pack_start(m_Frame_Underlined, Gtk::PACK_SHRINK);

	show_all_children();
}

ExampleWindow::~ExampleWindow(){

}

void ExampleWindow::abrir_texto(string caminho_tarefas){
	string linha;
    ifstream arquivo(caminho_tarefas);


    if (arquivo.is_open()){
        while (getline(arquivo, linha)){   
            pal.push_back(linha); 
                     
        }
    
    }


    arquivo.close();

}