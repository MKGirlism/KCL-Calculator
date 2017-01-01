#include "val2ent.h"

void val2ent7 (GtkWidget *widget, gpointer window) {
	gchar *text = gtk_combo_box_get_active_text(GTK_COMBO_BOX(widget));
	gchar *id = gtk_entry_get_text(GTK_ENTRY(window));
	gchar *newid = id;
	
	if (strcmp(text, "0x00 - Road") == 0) {
		newid[2] = '0';
		newid[3] = '0';
	}
	else if (strcmp(text, "0x01 - Road 2") == 0) {
		newid[2] = '0';
		newid[3] = '1';
	}
	else if (strcmp(text, "0x02 - Road 3") == 0) {
		newid[2] = '0';
		newid[3] = '2';
	}
	else if (strcmp(text, "0x03 - Road 4") == 0) {
		newid[2] = '0';
		newid[3] = '3';
	}
	else if (strcmp(text, "0x04 - Slippery Road") == 0) {
		newid[2] = '0';
		newid[3] = '4';
	}
	else if (strcmp(text, "0x05 - Off-road") == 0) {
		newid[2] = '0';
		newid[3] = '5';
	}
	else if (strcmp(text, "0x06 - Heavy Off-road") == 0) {
		newid[2] = '0';
		newid[3] = '6';
	}
	else if (strcmp(text, "0x07 - Slippery Road 2") == 0) {
		newid[2] = '0';
		newid[3] = '7';
	}
	else if (strcmp(text, "0x08 - Boost Pad") == 0) {
		newid[2] = '0';
		newid[3] = '8';
	}
	else if (strcmp(text, "0x09 - Glider Pad") == 0) {
		newid[2] = '0';
		newid[3] = '9';
	}
	else if (strcmp(text, "0x0A - Does nothing") == 0) {
		newid[2] = '0';
		newid[3] = 'A';
	}
	else if (strcmp(text, "0x0B - Solid Fall") == 0) {
		newid[2] = '0';
		newid[3] = 'B';
	}
	else if (strcmp(text, "0x0C - Moving Terrain") == 0) {
		newid[2] = '0';
		newid[3] = 'C';
	}
	else if (strcmp(text, "0x0D - Road 4") == 0) {
		newid[2] = '0';
		newid[3] = 'D';
	}
	else if (strcmp(text, "0x0E - Unknown [!]Crashes the game[!]") == 0) {
		newid[2] = '0';
		newid[3] = 'E';
	}
	else if (strcmp(text, "0x0F - Does nothing") == 0) {
		newid[2] = '0';
		newid[3] = 'F';
	}
	
	
	
	else if (strcmp(text, "0x10 - Wall") == 0) {
		newid[2] = '1';
		newid[3] = '0';
	}
	else if (strcmp(text, "0x11 - Wall 2") == 0) {
		newid[2] = '1';
		newid[3] = '1';
	}
	else if (strcmp(text, "0x12 - Invisible Wall") == 0) {
		newid[2] = '1';
		newid[3] = '2';
	}
	else if (strcmp(text, "0x13 - Does nothing") == 0) {
		newid[2] = '1';
		newid[3] = '3';
	}
	else if (strcmp(text, "0x14 - Wall 3") == 0) {
		newid[2] = '1';
		newid[3] = '4';
	}
	else if (strcmp(text, "0x15 - Wall 4") == 0) {
		newid[2] = '1';
		newid[3] = '5';
	}
	else if (strcmp(text, "0x16 - Does nothing") == 0) {
		newid[2] = '1';
		newid[3] = '6';
	}
	else if (strcmp(text, "0x17 - Does nothing") == 0) {
		newid[2] = '1';
		newid[3] = '7';
	}
	else if (strcmp(text, "0x18 - Does nothing") == 0) {
		newid[2] = '1';
		newid[3] = '8';
	}
	else if (strcmp(text, "0x19 - Fall Boundary") == 0) {
		newid[2] = '1';
		newid[3] = '9';
	}
	else if (strcmp(text, "0x1A - Effect Trigger") == 0) {
		newid[2] = '1';
		newid[3] = 'A';
	}
	else if (strcmp(text, "0x1B - Does nothing") == 0) {
		newid[2] = '1';
		newid[3] = 'B';
	}
	else if (strcmp(text, "0x1C - Glider Activator") == 0) {
		newid[2] = '1';
		newid[3] = 'C';
	}
	else if (strcmp(text, "0x1D - Fall Boundary 2") == 0) {
		newid[2] = '1';
		newid[3] = 'D';
	}
	else if (strcmp(text, "0x1E - Does nothing") == 0) {
		newid[2] = '1';
		newid[3] = 'E';
	}
	else if (strcmp(text, "0x1F - Effect Trigger 2") == 0) {
		newid[2] = '1';
		newid[3] = 'F';
	}
	else {
		newid[2] = '0';
		newid[3] = '0';
	}
	
	gint tmp_pos = GTK_ENTRY (window)->text_length;
	gtk_editable_insert_text (GTK_EDITABLE (window), newid, -1, &tmp_pos);
	gtk_editable_delete_text (GTK_EDITABLE (window), 4, GTK_ENTRY (window)->text_length);
    gtk_editable_select_region (GTK_EDITABLE (window), 0, GTK_ENTRY (window)->text_length);
}

void val2entds (GtkWidget *widget, gpointer window) {
	gchar *text = gtk_combo_box_get_active_text(GTK_COMBO_BOX(widget));
	gchar *id = gtk_entry_get_text(GTK_ENTRY(window));
	gchar *newid = id;
	
	if (strcmp(text, "0x00 - Road") == 0) {
		newid[2] = '0';
		newid[3] = '0';
	}
	else if (strcmp(text, "0x01 - Unknown 1") == 0) {
		newid[2] = '0';
		newid[3] = '1';
	}
	else if (strcmp(text, "0x02 - Weak Off-road") == 0) {
		newid[2] = '0';
		newid[3] = '2';
	}
	else if (strcmp(text, "0x03 - Off-road") == 0) {
		newid[2] = '0';
		newid[3] = '3';
	}
	else if (strcmp(text, "0x04 - Fall? (Used in Rainbow Road)") == 0) {
		newid[2] = '0';
		newid[3] = '4';
	}
	else if (strcmp(text, "0x05 - Unknown 5") == 0) {
		newid[2] = '0';
		newid[3] = '5';
	}
	else if (strcmp(text, "0x06 - Slippery Road") == 0) {
		newid[2] = '0';
		newid[3] = '6';
	}
	else if (strcmp(text, "0x07 - Boost Pad") == 0) {
		newid[2] = '0';
		newid[3] = '7';
	}
	else if (strcmp(text, "0x08 - Wall") == 0) {
		newid[2] = '0';
		newid[3] = '8';
	}
	else if (strcmp(text, "0x09 - Wall 2") == 0) {
		newid[2] = '0';
		newid[3] = '9';
	}
	else if (strcmp(text, "0x0A - Out of Bounds") == 0) {
		newid[2] = '0';
		newid[3] = 'A';
	}
	else if (strcmp(text, "0x0B - Fall") == 0) {
		newid[2] = '0';
		newid[3] = 'B';
	}
	else if (strcmp(text, "0x0C - Jump Pad") == 0) {
		newid[2] = '0';
		newid[3] = 'C';
	}
	else if (strcmp(text, "0x0D - Sticky Road") == 0) {
		newid[2] = '0';
		newid[3] = 'D';
	}
	else if (strcmp(text, "0x0E - Small Jump (Ramps in SFC Chocolate Island 2)") == 0) {
		newid[2] = '0';
		newid[3] = 'E';
	}
	else if (strcmp(text, "0x0F - Cannon Activator") == 0) {
		newid[2] = '0';
		newid[3] = 'F';
	}
	
	
	
	else if (strcmp(text, "0x10 - ???") == 0) {
		newid[2] = '1';
		newid[3] = '0';
	}
	else if (strcmp(text, "0x11 - Falls Water") == 0) {
		newid[2] = '1';
		newid[3] = '1';
	}
	else if (strcmp(text, "0x12 - Boost Panel?") == 0) {
		newid[2] = '1';
		newid[3] = '2';
	}
	else if (strcmp(text, "0x13 - Looping") == 0) {
		newid[2] = '1';
		newid[3] = '3';
	}
	else if (strcmp(text, "0x14 - Road with Sound Effect") == 0) {
		newid[2] = '1';
		newid[3] = '4';
	}
	else if (strcmp(text, "0x15 - Wall with Sound Effect") == 0) {
		newid[2] = '1';
		newid[3] = '5';
	}
	else if (strcmp(text, "0x16 - Unused") == 0) {
		newid[2] = '1';
		newid[3] = '6';
	}
	else if (strcmp(text, "0x17 - Unused") == 0) {
		newid[2] = '1';
		newid[3] = '7';
	}
	else if (strcmp(text, "0x18 - Unused") == 0) {
		newid[2] = '1';
		newid[3] = '8';
	}
	else if (strcmp(text, "0x19 - Unused") == 0) {
		newid[2] = '1';
		newid[3] = '9';
	}
	else if (strcmp(text, "0x1A - Unused") == 0) {
		newid[2] = '1';
		newid[3] = 'A';
	}
	else if (strcmp(text, "0x1B - Unused") == 0) {
		newid[2] = '1';
		newid[3] = 'B';
	}
	else if (strcmp(text, "0x1C - Unused") == 0) {
		newid[2] = '1';
		newid[3] = 'C';
	}
	else if (strcmp(text, "0x1D - Unused") == 0) {
		newid[2] = '1';
		newid[3] = 'D';
	}
	else if (strcmp(text, "0x1E - Unused") == 0) {
		newid[2] = '1';
		newid[3] = 'E';
	}
	else if (strcmp(text, "0x1F - Unused") == 0) {
		newid[2] = '1';
		newid[3] = 'F';
	}
	else {
		newid[2] = '0';
		newid[3] = '0';
	}
	
	gint tmp_pos = GTK_ENTRY (window)->text_length;
	gtk_editable_insert_text (GTK_EDITABLE (window), newid, -1, &tmp_pos);
	gtk_editable_delete_text (GTK_EDITABLE (window), 4, GTK_ENTRY (window)->text_length);
    gtk_editable_select_region (GTK_EDITABLE (window), 0, GTK_ENTRY (window)->text_length);
}
