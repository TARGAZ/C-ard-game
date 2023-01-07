#include "Champion.hpp"

Champ Find_Champion_Proposition() {
	srand((unsigned int)time(NULL));
	int temp = 1 + rand() % 88;
	Champ choice1 = NotDefined;

	choice1 = (Champ)temp;

	return choice1;
}

Champ Champion_Proposition() {
	Champ choice1 = Find_Champion_Proposition();
	Champ choice2 = choice1;
	while (choice1 == choice2) {
		choice2 = Find_Champion_Proposition();
	}
	std::string answer = "0";
	while (1) {
		answer = "0";
		std::cout << "1 = " << Find_Champion_NAME(choice1) << std::endl;
		std::cout << "\n2 = " << Find_Champion_NAME(choice2) << std::endl;
		std::cin >> answer;
		if (answer == "1") {
			return choice1;
		}
		else if (answer == "2") {
			return choice2;
		}
	}
}

std::string Find_Champion_NAME(Champ choice) {
	switch (choice) {
	case 1:
		return "A.F. Kah";
		break;
	case 2:
		return "Aile de mort";
		break;
	case 3:
		return "Alexstrasa";
		break;
	case 4:
		return "Al'Akir";
		break;
	case 5:
		return "Ambassadeur Faelin";
		break;
	case 6:
		return "Aranna Cherchétoile";
		break;
	case 7:
		return "As du casse Cire-Pilleur";
		break;
	case 8:
		return "Baz'hial la liche";
		break;
	case 9:
		return "Bac-au-vent";
		break;
	case 10:
		return "Bru'kan";
		break;
	case 11:
		return "Capitaine Double-Crochet";
		break;
	case 12:
		return "Capitaine Eudora";
		break;
	case 13:
		return "Cap'taine celeste Kragg";
		break;
	case 14:
		return "Cariel Roame";
		break;
	case 15:
		return "Carniflore";
		break;
	case 16:
		return "Chenvaa'la";
		break;
	case 17:
		return "C'Thun";
		break;
	case 18:
		return "Dame Vashj";
		break;
	case 19:
		return "Daryl le Danseur";
		break;
	case 20:
		return "Dinodompteur Brann";
		break;
	case 21:
		return "Drek'Thar";
		break;
	case 22:
		return "Edwin Vancleef";
		break;
	case 23:
		return "Fongimancien Flurgl";
		break;
	case 24:
		return "Galakrond";
		break;
	case 25:
		return "Gardienne de la_forêt Omu";
		break;
	case 26:
		return "Goerge le Déchu";
		break;
	case 27:
		return "Grisebranche";
		break;
	case 28:
		return "Gruff Totem-Runique";
		break;
	case 29:
		return "Illidan Hurlorage";
		break;
	case 30:
		return "Ini Glissorage";
		break;
	case 31:
		return "Jandice Barov";
		break;
	case 32:
		return "Kael'thas Haut-Soleil";
		break;
	case 33:
		return "Kurtrus Chutecendre";
		break;
	case 34:
		return "Le Geôlier";
		break;
	case 35:
		return "Le Recousu";
		break;
	case 36:
		return "Le conservateur";
		break;
	case 37:
		return "Le grand Akazamzarak";
		break;
	case 38:
		return "Le roi des Rats";
		break;
	case 39:
		return "Le roi-liche";
		break;
	case 40:
		return "M. Bigglesworth";
		break;
	case 41:
		return "Macaron le cuisinier";
		break;
	case 42:
		return "Maiev Chantelombre";
		break;
	case 43:
		return "Malygos";
		break;
	case 44:
		return "Maitre Nguyen";
		break;
	case 45:
		return "Millhouse Tempête-de-Mana";
		break;
	case 46:
		return "Millificent Tempête-de-Mana";
		break;
	case 47:
		return "Murloc Holmes";
		break;
	case 48:
		return "Mutanus le Dévoreur";
		break;
	case 49:
		return "Mecano-amplificateur";
		break;
	case 50:
		return "Neunoeil le pirate";
		break;
	case 51:
		return "Nozdormu";
		break;
	case 52:
		return "Necrorateur Noirépine";
		break;
	case 53:
		return "N'Zoth";
		break;
	case 54:
		return "Onyxia";
		break;
	case 55:
		return "Ozumat";
		break;
	case 56:
		return "Prince du mal Rafaam";
		break;
	case 57:
		return "Prince marchand Gallywix";
		break;
	case 58:
		return "Pyraride";
		break;
	case 59:
		return "Ragnaros, seigneur du feu";
		break;
	case 60:
		return "Rakanishu";
		break;
	case 61:
		return "Reine Azshara";
		break;
	case 62:
		return "Reno Jakson";
		break;
	case 63:
		return "Roi Mukla";
		break;
	case 64:
		return "Rokara";
		break;
	case 65:
		return "Seigneur Barov";
		break;
	case 66:
		return "Seigneur Jaraxxus";
		break;
	case 67:
		return "Seigneur Saurcroc";
		break;
	case 68:
		return "Silas Sombrelune";
		break;
	case 69:
		return "Sindragosa";
		break;
	case 70:
		return "Sir Finley Mrrglton";
		break;
	case 71:
		return "Sire Denathrius";
		break;
	case 72:
		return "Sneed";
		break;
	case 73:
		return "Souveraine Cire-Reine";
		break;
	case 74:
		return "Sylvanas Coursevent";
		break;
	case 75:
		return "Tamsin Roame";
		break;
	case 76:
		return "Tavish Foudrepique";
		break;
	case 77:
		return "Tchak Coupebeurre";
		break;
	case 78:
		return "Tess Grisetête";
		break;
	case 79:
		return "Tickatus";
		break;
	case 80:
		return "Tokil l'Infinie";
		break;
	case 81:
		return "Vanndar Foudrepique";
		break;
	case 82:
		return "Varden Aubétreinte";
		break;
	case 83:
		return "Vol'jin";
		break;
	case 84:
		return "Xyrella";
		break;
	case 85:
		return "Yogg'Saron, la fin de l'espoir";
		break;
	case 86:
		return "Ysera";
		break;
	case 87:
		return "Y'Shaarj";
		break;
	case 88:
		return "Zéphrys le Grand";
		break;
	case 89:
		return "Elise Cherchétoile";
		break;
	default:
		return "Undefined";
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
/*std::string get_name_champion(Champion& champion_player) {
	return champion_player.name;
};*/
void Champion::ability_effect() {

}