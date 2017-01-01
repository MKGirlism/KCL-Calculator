#include "becalc.h"

void becalc7 (GtkWidget *widget, gpointer window) {
	gchar *text = gtk_combo_box_get_active_text(GTK_COMBO_BOX(widget));
	gchar *id = gtk_entry_get_text(GTK_ENTRY(window));
	gchar *newid = id;
	gint index = gtk_combo_box_get_active(GTK_COMBO_BOX(widget));
	
	if (id[2] == '0') {
		if (index == 0) {
			newid[2] = '0';
		}
		else if (index == 1) {
			newid[2] = '2';
		}
		else if (index == 2) {
			newid[2] = '4';
		}
		else if (index == 3) {
			newid[2] = '6';
		}
		else if (index == 4) {
			newid[2] = '8';
		}
		else if (index == 5) {
			newid[2] = 'A';
		}
		else if (index == 6) {
			newid[2] = 'C';
		}
		else if (index == 7) {
			newid[2] = 'E';
		}
	}
	else {
		if (index == 0) {
			newid[2] = '1';
		}
		else if (index == 1) {
			newid[2] = '3';
		}
		else if (index == 2) {
			newid[2] = '5';
		}
		else if (index == 3) {
			newid[2] = '7';
		}
		else if (index == 4) {
			newid[2] = '9';
		}
		else if (index == 5) {
			newid[2] = 'B';
		}
		else if (index == 6) {
			newid[2] = 'D';
		}
		else if (index == 7) {
			newid[2] = 'F';
		}
	}
	
	gint tmp_pos = GTK_ENTRY (window)->text_length;
	gtk_editable_insert_text (GTK_EDITABLE (window), newid, -1, &tmp_pos);
	gtk_editable_delete_text (GTK_EDITABLE (window), 4, GTK_ENTRY (window)->text_length);
    gtk_editable_select_region (GTK_EDITABLE (window), 0, GTK_ENTRY (window)->text_length);
}

void becalcds (GtkWidget *widget, gpointer window) {
	gchar *text = gtk_combo_box_get_active_text(GTK_COMBO_BOX(widget));
	gchar *id = gtk_entry_get_text(GTK_ENTRY(window));
	gchar *newid = id;
	gint index = gtk_combo_box_get_active(GTK_COMBO_BOX(widget));
	
	if (id[2] == '0') {
		if (index == 0) {
			newid[2] = '0';
		}
		else if (index == 1) {
			newid[2] = '2';
		}
		else if (index == 2) {
			newid[2] = '4';
		}
		else if (index == 3) {
			newid[2] = '6';
		}
		else if (index == 4) {
			newid[2] = '8';
		}
		else if (index == 5) {
			newid[2] = 'A';
		}
		else if (index == 6) {
			newid[2] = 'C';
		}
		else if (index == 7) {
			newid[2] = 'E';
		}
	}
	else {
		if (index == 0) {
			newid[2] = '1';
		}
		else if (index == 1) {
			newid[2] = '3';
		}
		else if (index == 2) {
			newid[2] = '5';
		}
		else if (index == 3) {
			newid[2] = '7';
		}
		else if (index == 4) {
			newid[2] = '9';
		}
		else if (index == 5) {
			newid[2] = 'B';
		}
		else if (index == 6) {
			newid[2] = 'D';
		}
		else if (index == 7) {
			newid[2] = 'F';
		}
	}
	
	gint tmp_pos = GTK_ENTRY (window)->text_length;
	gtk_editable_insert_text (GTK_EDITABLE (window), newid, -1, &tmp_pos);
	gtk_editable_delete_text (GTK_EDITABLE (window), 4, GTK_ENTRY (window)->text_length);
    gtk_editable_select_region (GTK_EDITABLE (window), 0, GTK_ENTRY (window)->text_length);
}

