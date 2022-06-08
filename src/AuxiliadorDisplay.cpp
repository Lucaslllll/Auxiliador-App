#include "AuxiliadorDisplay.hpp"


DisplayTarefas::DisplayTarefas()
:
	m_box1{Orientation::ORIENTATION_HORIZONTAL},
	m_box2{Orientation::ORIENTATION_HORIZONTAL},
	m_box3{Orientation::ORIENTATION_VERTICAL},
	m_box4{Orientation::ORIENTATION_HORIZONTAL}, // PARA FICAR O BOTAO DE ADICIONAR
	m_box5{Orientation::ORIENTATION_HORIZONTAL} // PARA O BOTAO DE REMOVER

{
	



	// Button button_settings("Configurações");
	// Button button_help("Ajuda");
	

	// janela ao abrir
	// set_size_request(300, 200);
	set_position(Gtk::WIN_POS_CENTER);
	set_border_width(50);
	// set_decorated(false);


	set_hierarchy();
	draw_widgets();
	init_buttons();
	show_all_children();

}

void DisplayTarefas::set_hierarchy(){
	// window
	add(m_fixed);

	// Fixed 
	m_fixed.add(m_frame1);
	m_fixed.add(m_frame2);
	m_fixed.add(m_frame3);
	m_fixed.add(m_frame4);
	m_fixed.add(m_frame5);
	m_fixed.add(m_frame6);

	// m_fixed.add(m_box4);
	// 						W	H
	m_fixed.move(m_frame2, 100, 0);
	m_fixed.move(m_frame3, 220, 140);
	m_fixed.move(m_frame4, 220, 360);
	m_fixed.move(m_frame5, 320, 360);
	m_fixed.move(m_frame6, 220, 420);
	// m_fixed.move(m_box4, 6, 300);




	// Frame 1
	m_frame1.add(m_box1);
	// m_frame1.set_label("Opções");

	// Box 1
	m_box1.add(m_alignment1);
	m_box1.add(m_label1);
	m_box1.add(button_help);


	// // Alignment 1
	// m_alignment1.add(m_box2);

	// // Frame 2
	m_frame2.add(m_box2);
	// m_frame2.set_label("Configurações");

	// Box 2
	m_box2.add(m_alignment2);
	m_box2.add(m_label2);
	m_box2.add(button_settings);



	m_grid.add(m_frame1);
	m_grid.add(m_frame2);
	m_grid.set_name("Configurações");
	

	// // Alignment 2
	// m_alignment2.add(m_box3);

	m_frame3.add(m_box3);

	// Box 3
	m_box3.add(m_alignment3);
	m_box3.add(m_label3);
	// m_box3.pack_start(m_entry3, true, true, 0);
	// m_box3.pack_start(button_settings, true, true, 0);


	

	// grid para tela que irá aparecer as tarefas
	m_grid_lista.add(m_frame3);
	//	m_grid_lista.add(m_frame2);
	// m_grid_lista.set_name("Tarefas");

	// // Box 4
	// m_box4.pack_start(m_label5, true, true, 0);
	// m_box4.pack_start(m_label6, true, true, 0);
	// m_box4.pack_start(m_linkbutton, true, true, 0);

	// frame das opções, frame 4
	m_frame4.add(m_box4);


	// Box 4
	m_box4.add(m_alignment4);
	m_box4.add(m_label4);
	m_box4.add(button_adicionar);
	// m_box4.add(m_entry1);
	// m_box4.pack_start(button_settings, true, true, 0);


	// frame das opções, frame 5
	m_frame5.add(m_box5);


	// Box 5
	m_box5.add(m_alignment5);
	m_box5.add(m_label5);
	m_box5.add(button_remover);
	


	// grid para os botoes das opções de remover e adicionar
	m_grid_opcoes.add(m_frame4);
	m_grid_opcoes.add(m_frame5);


	// frame das adiçoes, frame 6
	m_frame6.add(m_box6);

	// Entry set resolution right
	m_entry1.set_size_request(200);

	// Box 6
	m_box6.add(m_alignment6);
	m_box6.add(m_entry1);

	// grid para os botões de adição e a entrada de dados para salvar
	m_grid_adicionar.add(m_frame6);


}


void DisplayTarefas::draw_widgets(){
	// window
	set_title("Tarefas");
	set_border_width(5);
	set_default_size(640, 480);
	set_visible(true);

	// Fixed 
	// m_fixed.set_size_request(300, 400);
	// m_fixed.set_visible(true);
	// m_fixed.set_can_focus(false);

	// // Frame 1
	// m_frame1.set_size_request(100, 88);
	// m_frame1.set_visible(true);
	// m_frame1.set_can_focus(false);
	// m_frame1.set_margin_end(8);
	// m_frame1.set_shadow_type(ShadowType::SHADOW_IN);
	// m_frame1.set_label_align(0.02);

	// // Box 1
	// m_box1.set_visible(true);
	// m_box1.set_can_focus(false);

	// // Alignment 1 
	// m_alignment1.set_size_request(400, 62);
	// m_alignment1.set_visible(true);
	// m_alignment1.set_can_focus(false);
	// m_alignment1.set_border_width(10);

	// // Box 2
	// m_box2.set_visible(true);
	// m_box2.set_can_focus(false);


	// // Entry1
	// m_entry1.set_visible(true);
	// m_entry1.set_visibility(false);
	// m_entry1.set_can_focus(true);
	// m_entry1.set_placeholder_text("Insira sua anotação");
	// m_entry1.set_input_purpose(INPUT_PURPOSE_PASSWORD);
	// m_entry1.set_max_length(100);

	// // Entry2
	// m_entry2.set_visible(true);
	// m_entry2.set_visibility(false);
	// m_entry2.set_can_focus(true);
	// m_entry2.set_placeholder_text("Insira seu OK");
	// m_entry2.set_input_purpose(INPUT_PURPOSE_PASSWORD);
	// m_entry2.set_max_length(100);


	// // Label 1
	// m_label1.set_text("Ajuda");
	// m_label1.set_visible(true);
	// m_label1.set_can_focus(false);

	// // Label 2
	// m_label1.set_text("Configurar");
	// m_label1.set_visible(true);
	// m_label1.set_can_focus(false);


	// Button help
	button_help.set_label("Ajuda");
	button_help.set_visible(true);
	button_help.set_can_focus(true);
	button_help.set_focus_on_click(true);
	button_help.set_border_width(2);

	// // Frame 2
	// m_frame2.set_size_request(100, 88);
	// m_frame2.set_visible(true);
	// m_frame2.set_can_focus(false);
	// m_frame2.set_margin_end(8);
	// m_frame2.set_shadow_type(ShadowType::SHADOW_IN);
	// m_frame2.set_label_align(0.02);

	// // Alignment 2
	// m_alignment2.set_size_request(400, 100);
	// m_alignment2.set_visible(true);
	// m_alignment2.set_can_focus(false);
	// m_alignment2.set_border_width(10);

	// // Box 3
	// m_box3.set_visible(true);
	// m_box3.set_can_focus(false);

	// // Label 3
	// m_label3.set_visible(true);
	// m_label3.set_can_focus(false);
	// m_label3.set_text("Importar arquivo GPG, insira sua senha para importar" );

	abrir_texto("../data/tarefas.txt");
	string texto = "";

	for (unsigned int i = 0; i < pal.size(); ++i){
        texto = texto + pal[i] + "\n";
        cout << texto << endl;
    }
	
	m_label3.set_text(
						texto
       					
					);
	

	// Frame 3
	m_frame3.set_size_request(200, 200);
	m_frame3.set_visible(true);
	m_frame3.set_can_focus(false);
	m_frame3.set_margin_end(8);
	m_frame3.set_shadow_type(ShadowType::SHADOW_IN);
	m_frame3.set_label_align(0.02);


	// // Entry 3
	// m_entry3.set_visible(true);
	// m_entry3.set_visibility(false);
	// m_entry3.set_can_focus(true);
	// m_entry3.set_placeholder_text("Informe a senha do arquivo");
	// m_entry3.set_input_purpose(INPUT_PURPOSE_PASSWORD);
	// m_entry3.set_max_length(100);


	// Button settings
	button_settings.set_label("Configurar");
	button_settings.set_visible(true);
	button_settings.set_can_focus(true);
	button_settings.set_focus_on_click(true);
	button_settings.set_border_width(2);

	// // Box 4
	// m_box4.set_visible(true);
	// m_box4.set_can_focus(false);
	// m_box4.set_size_request(397, 80);

	// Button adicionar
	button_adicionar.set_label("Adicionar");
	button_adicionar.set_visible(true);
	button_adicionar.set_can_focus(true);
	button_adicionar.set_focus_on_click(true);
	button_adicionar.set_border_width(2);


	// // Label 5
	// m_label5.set_visible(true);
	// m_label5.set_can_focus(false);
	// m_label5.set_text("O arquivo será salvo na raiz do diretório" );


	// Button remover
	button_remover.set_label("Remover");
	button_remover.set_visible(true);
	button_remover.set_can_focus(true);
	button_remover.set_focus_on_click(true);
	button_remover.set_border_width(2);

	// // Label 6
	// m_label6.set_visible(true);
	// m_label6.set_can_focus(false);
	// m_label6.set_text("GNU GPL v3" );

	// // LinkButton
	// m_linkbutton.set_visible(true);
	// m_linkbutton.set_can_focus(false);
	// m_linkbutton.set_label("criandoleoes.com.br");
	// m_linkbutton.set_uri("https://criandoleoes.com.br" );


}	

// nao podem ser metodos
void DisplayTarefas::on_help_button(){
	cout << "a";
};
void DisplayTarefas::on_setting_button(){
	cout << "a";	
};
void DisplayTarefas::on_adicionar_button(){
	string a = m_entry1.get_text();
	cout << a;
};
void DisplayTarefas::on_remover_button(){
	cout << "a";
};

void DisplayTarefas::init_buttons(){
	button_help.signal_clicked().connect(
		ptr_fun(&on_help_button)

	);
	button_settings.signal_clicked().connect(
		ptr_fun(&on_setting_button)

	); 
	button_adicionar.signal_clicked().connect(
		ptr_fun(&on_adicionar_button)

	); 

	button_remover.signal_clicked().connect(
		ptr_fun(&on_remover_button)

	);
}

void DisplayTarefas::abrir_texto(string caminho_tarefas){
	string linha;
    ifstream arquivo(caminho_tarefas);


    if (arquivo.is_open()){
        while (getline(arquivo, linha)){   
            pal.push_back(linha); 
                     
        }
    
    }


    arquivo.close();

}

