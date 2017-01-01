#include "special.h"

void special7 (GtkWidget *widget, gpointer window) {
	gchar *text = gtk_combo_box_get_active_text(GTK_COMBO_BOX(widget));
	gchar *id = gtk_entry_get_text(GTK_ENTRY(window));
	gchar *newid = id;
	gint index = gtk_combo_box_get_active(GTK_COMBO_BOX(widget));
	
	if (index == 0) {
		newid[0] = '0';
	}
	else if (index == 1) {
		newid[0] = '1';
	}
	else if (index == 2) {
		newid[0] = '2';
	}
	else if (index == 3) {
		newid[0] = '3';
	}
	else if (index == 4) {
		newid[0] = '4';
	}
	else if (index == 5) {
		newid[0] = '5';
	}
	else if (index == 6) {
		newid[0] = '6';
	}
	else if (index == 7) {
		newid[0] = '7';
	}
	else if (index == 8) {
		newid[0] = '8';
	}
	else if (index == 9) {
		newid[0] = '9';
	}
	else if (index == 10) {
		newid[0] = 'A';
	}
	else if (index == 11) {
		newid[0] = 'B';
	}
	else if (index == 12) {
		newid[0] = 'C';
	}
	else if (index == 13) {
		newid[0] = 'D';
	}
	else if (index == 14) {
		newid[0] = 'E';
	}
	else if (index == 15) {
		newid[0] = 'F';
	}
	
	gint tmp_pos = GTK_ENTRY (window)->text_length;
	gtk_editable_insert_text (GTK_EDITABLE (window), newid, -1, &tmp_pos);
	gtk_editable_delete_text (GTK_EDITABLE (window), 4, GTK_ENTRY (window)->text_length);
    gtk_editable_select_region (GTK_EDITABLE (window), 0, GTK_ENTRY (window)->text_length);
}

void specialds (GtkWidget *widget, gpointer window) {
	gchar *text = gtk_combo_box_get_active_text(GTK_COMBO_BOX(widget));
	gchar *id = gtk_entry_get_text(GTK_ENTRY(window));
	gchar *newid = id;
	gint index = gtk_combo_box_get_active(GTK_COMBO_BOX(widget));
	
	if (index == 0) {
		newid[0] = '0';
	}
	else if (index == 1) {
		newid[0] = '1';
	}
	else if (index == 2) {
		newid[0] = '2';
	}
	else if (index == 3) {
		newid[0] = '3';
	}
	else if (index == 4) {
		newid[0] = '4';
	}
	else if (index == 5) {
		newid[0] = '5';
	}
	else if (index == 6) {
		newid[0] = '6';
	}
	else if (index == 7) {
		newid[0] = '7';
	}
	else if (index == 8) {
		newid[0] = '8';
	}
	else if (index == 9) {
		newid[0] = '9';
	}
	else if (index == 10) {
		newid[0] = 'A';
	}
	else if (index == 11) {
		newid[0] = 'B';
	}
	else if (index == 12) {
		newid[0] = 'C';
	}
	else if (index == 13) {
		newid[0] = 'D';
	}
	else if (index == 14) {
		newid[0] = 'E';
	}
	else if (index == 15) {
		newid[0] = 'F';
	}
	
	gint tmp_pos = GTK_ENTRY (window)->text_length;
	gtk_editable_insert_text (GTK_EDITABLE (window), newid, -1, &tmp_pos);
	gtk_editable_delete_text (GTK_EDITABLE (window), 4, GTK_ENTRY (window)->text_length);
    gtk_editable_select_region (GTK_EDITABLE (window), 0, GTK_ENTRY (window)->text_length);
}
