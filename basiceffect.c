#include "basiceffect.h"

void basiceffect7 (GtkWidget *widget, gpointer window) {
	gchar *text = gtk_combo_box_get_active_text(GTK_COMBO_BOX(widget));
	
	if (strcmp(text, "0x00 - Road") == 0) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Normal");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Sand/Gavel");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Sand/Gavel");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Smooth");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Wood");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Slot Based");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Metal Grid");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Metal");
	}
	else if (strcmp(text, "0x01 - Road 2") == 0) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Normal (Different Sound to 0x00)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Carpet");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Slot Based");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Bouncy Road (Like a mushroom but non-trickable)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Grass/Gravel");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Glass");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Normal (Bump Effect)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Slot Based (Rainbow Road sounds on RR and rRR slots)");
	}
	else if (strcmp(text, "0x02 - Road 3") == 0) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Normal");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Slot Based (Piano sounds on MM)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Slot Based (Xylophone sounds on MM)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Slot Based (Glockenspiel sounds on MM)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Smooth (Bump effect)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Slot Based");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Metal Grid");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Slot Based");
	}
	else if (strcmp(text, "0x03 - Road 4") == 0) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Dirt (Graphic Effect)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Sand/Gravel");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Slot Based");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Slot Based");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Slot Based");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Snow");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Dirt");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Sand/Gravel");
	}
	else if (strcmp(text, "0x04 - Slippery Road") == 0) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Dirt (Graphic Effect)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Sand/Gravel");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Carpet");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Water");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Grass");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Wood");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Mud/Tar (Bump effect)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Dirt");
	}
	else if (strcmp(text, "0x05 - Off-road") == 0) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Dirt");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Sand");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Honey");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Water");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Grass");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Snow");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Mud/Tar (Bump effect)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Wood");
	}
	else if (strcmp(text, "0x06 - Heavy Off-road") == 0) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Dirt");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Mud/Tar");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Slot Based");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Slot Based");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Grass");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Snow");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Glass");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Mud");
	}
	else if (strcmp(text, "0x07 - Slippery Road 2") == 0) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Ice");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Mud");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Wet Road");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Water");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Slot Based");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Normal (Different sound to 0x00)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Normal (Different sound to 0x00)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Normal (Different sound to 0x00)");
	}
	else if (strcmp(text, "0x08 - Boost Pad") == 0) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Normal");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Sand/Gravel");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Sand/Gravel");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Smooth");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Wood");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Slot Based");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Metal Grid");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Metal");
	}
	else if (strcmp(text, "0x09 - Glider Pad") == 0) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Normal");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Instantly Activates Glider (rMC2 Ramp)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Sand/Gravel");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Slot Based");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Sand/Gravel");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Slot Based (Used in RR)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Metal Grid");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Metal");
	}
	else if (strcmp(text, "0x0A - Does nothing") == 0) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Unknown");
	}
	else if (strcmp(text, "0x0B - Solid Fall") == 0) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Unknown");
	}
	else if (strcmp(text, "0x0C - Moving Terrain") == 0) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Water");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Slot Based (RR Conveyor Belt)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Road (Different sound to 0x00)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Road (Different sound to 0x00)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Road (Different sound to 0x00)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Road (Different sound to 0x00)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Road (Different sound to 0x00)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Road (Different sound to 0x00)");
	}
	else if (strcmp(text, "0x0D - Road 4") == 0) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Slot Based");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Slot Based (Metal on rAF)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Slot Based");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Metal");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Slot Based");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Slot Based");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Smooth");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Smooth");
	}
	else if (strcmp(text, "0x0E - Unknown [!]Crashes the game[!]") == 0) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Unknown");
	}
	else if (strcmp(text, "0x0F - Does nothing") == 0) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Unknown");
	}
	
	
	
	else if (strcmp(text, "0x10 - Wall") == 0) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Normal");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Rock");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Metal");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Wood");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Slot Based");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Slot Based");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Rubber");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Music Wall");
	}
	else if (strcmp(text, "0x11 - Wall 2") == 0) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Rope");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Glass");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Glass");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Balloon");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Slot Based");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Slot Based");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Slot Based");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Slot Based");
	}
	else if (strcmp(text, "0x12 - Invisible Wall") == 0) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Unknown");
	}
	else if (strcmp(text, "0x13 - Does nothing") == 0) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Unknown");
	}
	else if (strcmp(text, "0x14 - Wall 3") == 0) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Normal");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Rock");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Metal");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Wood");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Slot Based");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Glass");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Rubber");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Music Wall (no effects)");
	}
	else if (strcmp(text, "0x15 - Wall 4") == 0) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Normal");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Rock");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Metal");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Wood");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Slot Based");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Glass");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Rubber");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Music Wall (no effects)");
	}
	else if (strcmp(text, "0x16 - Does nothing") == 0) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Unknown");
	}
	else if (strcmp(text, "0x17 - Does nothing") == 0) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Unknown");
	}
	else if (strcmp(text, "0x18 - Does nothing") == 0) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Unknown");
	}
	else if (strcmp(text, "0x19 - Fall Boundary") == 0) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Air Fall");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Water");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Lava");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Lava (no splash)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Air Fall");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Air Fall");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Air Fall");
	}
	else if (strcmp(text, "0x1A - Effect Trigger") == 0) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Smoke/Fog");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Tree leaves");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Unknown");
	}
	else if (strcmp(text, "0x1B - Does nothing") == 0) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Unknown");
	}
	else if (strcmp(text, "0x1C - Glider Activator") == 0) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Unknown");
	}
	else if (strcmp(text, "0x1D - Fall Boundary 2") == 0) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Air Fall");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Water");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Lava");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Lava (no splash)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Air Fall");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Air Fall");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Air Fall");
	}
	else if (strcmp(text, "0x1E - Does nothing") == 0) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Unknown");
	}
	else if (strcmp(text, "0x1F - Effect Trigger 2") == 0) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Rowerbed");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Unknown");
	}
	else {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
	}
	
	g_free(text);
}

void basiceffectds (GtkWidget *widget, gpointer window) {
	//gchar *text = gtk_combo_box_get_active_text(GTK_COMBO_BOX(widget));
	gint index = gtk_combo_box_get_active(GTK_COMBO_BOX(widget));
	
	if (index == 0) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Regular Road");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Sand Road");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Stone Road");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Wood Road");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Snow Road");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Metal Road or Grid");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Slot Dependent (Rainbow Road)");
	}
	else if (index == 1) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Water");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Unused");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Unused");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Unused");
	}
	else if (index == 2) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Sand");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Water");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Snow");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Sand");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Unused");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Unused");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Unused");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Unused");
	}
	else if (index == 3) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Sand");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Mud");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Grass");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Sand");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - GBA Sky Gardens Sand");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Snow");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Unused");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Unused");
	}
	else if (index == 4) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Unused");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Unused");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Unused");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Unused");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Unused");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Unused");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Unused");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Unused");
	}
	else if (index == 5) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Sand");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Mud");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Grass");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - ??? (You fall through the floor)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Flower Bed");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Unused");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Unused");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Unused");
	}
	else if (index == 6) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Ice");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Mud");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Unused");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Unused");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Unused");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Unused");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Unused");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Unused");
	}
	else if (index == 7) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Regular Road");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Rainbow Road");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - ???");
	}
	else if (index == 8) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Regular Wall");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Rock Wall");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Metal Wall");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Wooden Wall");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Bush");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Slot Dependent");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Jelly Wall");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Ice (or glass) Wall");
	}
	else if (index == 9) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Regular Wall");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Rock Wall");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Metal Wall");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Wooden Wall");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Bush");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Slot Dependent");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Jelly Wall");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Ice (or glass) Wall");
	}
	else if (index == 10) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Sand (Like in Split-Up Beach)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Sand (Like in Desert Hills)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Regular");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Snow");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Water (Like in Cheep Cheep Beach)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Unused");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Unused");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Unused");
	}
	else if (index == 11) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Regular Fall");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Water");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Lava");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - ???");
	}
	else if (index == 12) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Jump forward");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - ???");
	}
	else if (index == 13) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Regular Road");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - ???");
	}
	else if (index == 14) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Wall with no sound?");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - ???");
	}
	else if (index == 15) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Cannon Point");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Cannon Point");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Cannon Point");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Cannon Point");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Cannon Point");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Cannon Point");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Cannon Point");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Cannon Point");
	}
	
	
	
	else if (index == 16) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Regular Wall");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - ???");
	}
	else if (index == 17) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Regular Fall");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Water");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Lava");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - ???");
	}
	else if (index == 18) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Normal Boost");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Waluigi Pinball Boost Panel");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - ???");
	}
	else if (index == 19) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Regular Road");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Rainbow Road");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Regular Road with no sound");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Regular Road with no sound");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Regular Road with no sound");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Regular Road with no sound");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Regular Road with no sound");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Regular Road with no sound");
	}
	else if (index == 20) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Rainbow Road");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Unused");
	}
	else if (index == 21) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Regular Wall");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Rock Wall");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Metal Wall");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Wooden Wall");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Bush");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - ??? (No sound)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Jelly Wall");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Ice (or glass) Wall");
	}
	else if (index == 22) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Unknown");
	}
	else if (index == 23) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Unknown");
	}
	else if (index == 24) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Unknown");
	}
	else if (index == 25) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Unknown");
	}
	else if (index == 26) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Unknown");
	}
	else if (index == 27) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Unknown");
	}
	else if (index == 28) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Unknown");
	}
	else if (index == 29) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Unknown");
	}
	else if (index == 30) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Unknown");
	}
	else if (index == 31) {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
		
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "0 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "1 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "2 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "3 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "4 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "5 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "6 - Unknown");
		gtk_combo_box_append_text(GTK_COMBO_BOX(window), "7 - Unknown");
	}
	else {
		gtk_list_store_clear (GTK_LIST_STORE (gtk_combo_box_get_model (window)));
	}
}
