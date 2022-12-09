#include "Champion.hpp"

Champ Champion::Find_Champion_Proposition() {
	srand(time(NULL));
	int temp = 1 + rand() % 88;
	Champ choice1 = NotDefined;
	switch (temp) {
	case 1:
		choice1 = A_F_Kah;
		break;
	case 2:
		choice1 = Aile_de_mort;
		break;
	case 3:
		choice1 = Alexstrasa;
		break;
	case 4:
		choice1 = Al_Akir;
		break;
	case 5:
		choice1 = Ambassadeur_Faelin;
		break;
	case 6:
		choice1 = Aranna_Cherchetoile;
		break;
	case 7:
		choice1 = As_du_casse_Cire_Pilleur;
		break;
	case 8:
		choice1 = Baz_hial_la_liche;
		break;
	case 9:
		choice1 = Bac_au_vent;
		break;
	case 10:
		choice1 = Bru_kan;
		break;
	case 11:
		choice1 = Capitaine_Double_Crochet;
		break;
	case 12:
		choice1 = Capitaine_Eudora;
		break;
	case 13:
		choice1 = Captaine_celeste_Kragg;
		break;
	case 14:
		choice1 = Cariel_Roame;
		break;
	case 15:
		choice1 = Carniflore;
		break;
	case 16:
		choice1 = Chenvaa_la;
		break;
	case 17:
		choice1 = C_Thun;
		break;
	case 18:
		choice1 = Dame_Vashj;
		break;
	case 19:
		choice1 = Daryl_le_Danseur;
		break;
	case 20:
		choice1 = Dinodompteur_Brann;
		break;
	case 21:
		choice1 = Drek_Thar;
		break;
	case 22:
		choice1 = Edwin_Vancleef;
		break;
	case 23:
		choice1 = Fongimancien_Flurgl;
		break;
	case 24:
		choice1 = Galakrond;
		break;
	case 25:
		choice1 = Gardienne_de_la_foret_Omu;
		break;
	case 26:
		choice1 = Goerge_le_Dechu;
		break;
	case 27:
		choice1 = Grise_branche;
		break;
	case 28:
		choice1 = Gruff_Totem_Runique;
		break;
	case 29:
		choice1 = Illidan_Hurlorage;
		break;
	case 30:
		choice1 = Ini_Glissorage;
		break;
	case 31:
		choice1 = Jandice_Barov;
		break;
	case 32:
		choice1 = Kael_thas_Haut_Soleil;
		break;
	case 33:
		choice1 = Kurtrus_Chutecendre;
		break;
	case 34:
		choice1 = Le_Geolier;
		break;
	case 35:
		choice1 = Le_Recousu;
		break;
	case 36:
		choice1 = Le_conservateur;
		break;
	case 37:
		choice1 = Le_grand_Akazamzarak;
		break;
	case 38:
		choice1 = Le_roi_des_Rats;
		break;
	case 39:
		choice1 = Le_roi_liche;
		break;
	case 40:
		choice1 = M_Bigglesworth;
		break;
	case 41:
		choice1 = Macaron_le_cuisinier;
		break;
	case 42:
		choice1 = Maiev_Chantelombre;
		break;
	case 43:
		choice1 = Malygos;
		break;
	case 44:
		choice1 = Maitre_Nguyen;
		break;
	case 45:
		choice1 = Millhouse_Tempete_de_Mana;
		break;
	case 46:
		choice1 = Millificent_Tempete_de_Mana;
		break;
	case 47:
		choice1 = Murloc_Holmes;
		break;
	case 48:
		choice1 = Mutanus_le_Devoreur;
		break;
	case 49:
		choice1 = Mecano_amplificateur;
		break;
	case 50:
		choice1 = Neunoeil_le_pirate;
		break;
	case 51:
		choice1 = Nozdormu;
		break;
	case 52:
		choice1 = Necrorateur_Noirepine;
		break;
	case 53:
		choice1 = N_Zoth;
		break;
	case 54:
		choice1 = Onyxia;
		break;
	case 55:
		choice1 = Ozumat;
		break;
	case 56:
		choice1 = Prince_du_mal_Rafaam;
		break;
	case 57:
		choice1 = Prince_marchand_Gallywix;
		break;
	case 58:
		choice1 = Pyraride;
		break;
	case 59:
		choice1 = Ragnaros_seigneur_du_feu;
		break;
	case 60:
		choice1 = Rakanishu;
		break;
	case 61:
		choice1 = Reine_Azshara;
		break;
	case 62:
		choice1 = Reno_Jakson;
		break;
	case 63:
		choice1 = Roi_Mukla;
		break;
	case 64:
		choice1 = Rokara;
		break;
	case 65:
		choice1 = Seigneur_Barov;
		break;
	case 66:
		choice1 = Seigneur_Jaraxxus;
		break;
	case 67:
		choice1 = Seigneur_Saurcroc;
		break;
	case 68:
		choice1 = Silas_Sombrelune;
		break;
	case 69:
		choice1 = Sindragosa;
		break;
	case 70:
		choice1 = Sir_Finley_Mrrglton;
		break;
	case 71:
		choice1 = Sire_Denathrius;
		break;
	case 72:
		choice1 = Sneed;
		break;
	case 73:
		choice1 = Souveraine_Cire_Reine;
		break;
	case 74:
		choice1 = Sylvanas_Coursevent;
		break;
	case 75:
		choice1 = Tamsin_Roame;
		break;
	case 76:
		choice1 = Tavish_Foudrepique;
		break;
	case 77:
		choice1 = Tchak_Coupebeurre;
		break;
	case 78:
		choice1 = Tess_Grisetete;
		break;
	case 79:
		choice1 = Tickatus;
		break;
	case 80:
		choice1 = Tokil_l_Infinie;
		break;
	case 81:
		choice1 = Vanndar_Foudreepique;
		break;
	case 82:
		choice1 = Varden_Aubetreinte;
		break;
	case 83:
		choice1 = Vol_jin;
		break;
	case 84:
		choice1 = Xyrella;
		break;
	case 85:
		choice1 = Yogg_Saron_la_fin_de_l_espoir;
		break;
	case 86:
		choice1 = Ysera;
		break;
	case 87:
		choice1 = Y_Shaarj;
		break;
	case 88:
		choice1 = Zephrys_le_Grand;
		break;
	case 89:
		choice1 = Elise_Cheretoile;
		break;
	}
	return choice1;
}
Champ Champion::Champion_Proposition() {
	Champ choice1 = Find_Champion_Proposition();
	Champ choice2 = choice1;
	while (choice1 == choice2) {
		choice2 = Find_Champion_Proposition();
	}
	int answer = 0;
	while (1) {
		std::cout << "1 = " << Find_Champion_NAME(choice1) << std::endl;
		std::cout << "\n2 = " << Find_Champion_NAME(choice2) << std::endl;
		std::cin >> answer;
		if (answer == 1) {
			return choice1;
		}
		if (answer == 2) {
			return choice2;
		}
	}

}

std::string Champion::Find_Champion_NAME(Champ choice) {
	switch (choice) {
	case 1:
		return "A_F_Kah";
		break;
	case 2:
		return "Aile_de_mort";
		break;
	case 3:
		return "Alexstrasa";
		break;
	case 4:
		return "Al_Akir";
		break;
	case 5:
		return "Ambassadeur_Faelin";
		break;
	case 6:
		return "Aranna_Cherchetoile";
		break;
	case 7:
		return "As_du_casse_Cire_Pilleur";
		break;
	case 8:
		return "Baz_hial_la_liche";
		break;
	case 9:
		return "Bac_au_vent";
		break;
	case 10:
		return "Bru_kan";
		break;
	case 11:
		return "Capitaine_Double_Crochet";
		break;
	case 12:
		return "Capitaine_Eudora";
		break;
	case 13:
		return "Captaine_celeste_Kragg";
		break;
	case 14:
		return "Cariel_Roame";
		break;
	case 15:
		return "Carniflore";
		break;
	case 16:
		return "Chenvaa_la";
		break;
	case 17:
		return "C_Thun";
		break;
	case 18:
		return "Dame_Vashj";
		break;
	case 19:
		return "Daryl_le_Danseur";
		break;
	case 20:
		return "Dinodompteur_Brann";
		break;
	case 21:
		return "Drek_Thar";
		break;
	case 22:
		return "Edwin_Vancleef";
		break;
	case 23:
		return "Fongimancien_Flurgl";
		break;
	case 24:
		return "Galakrond";
		break;
	case 25:
		return "Gardienne_de_la_foret_Omu";
		break;
	case 26:
		return "Goerge_le_Dechu";
		break;
	case 27:
		return "Grise_branche";
		break;
	case 28:
		return "Gruff_Totem_Runique";
		break;
	case 29:
		return "Illidan_Hurlorage";
		break;
	case 30:
		return "Ini_Glissorage";
		break;
	case 31:
		return "Jandice_Barov";
		break;
	case 32:
		return "Kael_thas_Haut_Soleil";
		break;
	case 33:
		return "Kurtrus_Chutecendre";
		break;
	case 34:
		return "Le_Geolier";
		break;
	case 35:
		return "Le_Recousu";
		break;
	case 36:
		return "Le_conservateur";
		break;
	case 37:
		return "Le_grand_Akazamzarak";
		break;
	case 38:
		return "Le_roi_des_Rats";
		break;
	case 39:
		return "Le_roi_liche";
		break;
	case 40:
		return "M_Bigglesworth";
		break;
	case 41:
		return "Macaron_le_cuisinier";
		break;
	case 42:
		return "Maiev_Chantelombre";
		break;
	case 43:
		return "Malygos";
		break;
	case 44:
		return "Maitre_Nguyen";
		break;
	case 45:
		return "Millhouse_Tempete_de_Mana";
		break;
	case 46:
		return "Millificent_Tempete_de_Mana";
		break;
	case 47:
		return "Murloc_Holmes";
		break;
	case 48:
		return "Mutanus_le_Devoreur";
		break;
	case 49:
		return "Mecano_amplificateur";
		break;
	case 50:
		return "Neunoeil_le_pirate";
		break;
	case 51:
		return "Nozdormu";
		break;
	case 52:
		return "Necrorateur_Noirepine";
		break;
	case 53:
		return "N_Zoth";
		break;
	case 54:
		return "Onyxia";
		break;
	case 55:
		return "Ozumat";
		break;
	case 56:
		return "Prince_du_mal_Rafaam";
		break;
	case 57:
		return "Prince_marchand_Gallywix";
		break;
	case 58:
		return "Pyraride";
		break;
	case 59:
		return "Ragnaros_seigneur_du_feu";
		break;
	case 60:
		return "Rakanishu";
		break;
	case 61:
		return "Reine_Azshara";
		break;
	case 62:
		return "Reno_Jakson";
		break;
	case 63:
		return "Roi_Mukla";
		break;
	case 64:
		return "Rokara";
		break;
	case 65:
		return "Seigneur_Barov";
		break;
	case 66:
		return "Seigneur_Jaraxxus";
		break;
	case 67:
		return "Seigneur_Saurcroc";
		break;
	case 68:
		return "Silas_Sombrelune";
		break;
	case 69:
		return "Sindragosa";
		break;
	case 70:
		return "Sir_Finley_Mrrglton";
		break;
	case 71:
		return "Sire_Denathrius";
		break;
	case 72:
		return "Sneed";
		break;
	case 73:
		return "Souveraine_Cire_Reine";
		break;
	case 74:
		return "Sylvanas_Coursevent";
		break;
	case 75:
		return "Tamsin_Roame";
		break;
	case 76:
		return "Tavish_Foudrepique";
		break;
	case 77:
		return "Tchak_Coupebeurre";
		break;
	case 78:
		return "Tess_Grisetete";
		break;
	case 79:
		return "Tickatus";
		break;
	case 80:
		return "Tokil_l_Infinie";
		break;
	case 81:
		return "Vanndar_Foudreepique";
		break;
	case 82:
		return "Varden_Aubetreinte";
		break;
	case 83:
		return "Vol_jin";
		break;
	case 84:
		return "Xyrella";
		break;
	case 85:
		return "Yogg_Saron_la_fin_de_l_espoir";
		break;
	case 86:
		return "Ysera";
		break;
	case 87:
		return "Y_Shaarj";
		break;
	case 88:
		return "Zephrys_le_Grand";
		break;
	case 89:
		return "Elise_Cheretoile";
		break;
	}
}

void Champion::Validation_Champion(Champ choice) {
	name = Find_Champion_NAME(choice);
	std::cout << "\nname = " << name << std::endl;
	code_name = choice;
	std::cout << "\ncode_name = " << code_name << std::endl;
	hp = 30;
	std::cout << "\nhp = " << hp << std::endl;
	armor = 0;
	std::cout << "\narmor = " << armor << std::endl;
	ability_id = choice;
	std::cout << "\nability_id = " << ability_id << std::endl;


}

void Champion::ability_effect() {

}