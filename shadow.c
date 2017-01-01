#include "shadow.h"

void shadow7 (GtkWidget *widget, gpointer window) {
	gchar *text = gtk_combo_box_get_active_text(GTK_COMBO_BOX(widget));
	gchar *id = gtk_entry_get_text(GTK_ENTRY(window));
	gchar *newid = id;
	gint index = gtk_combo_box_get_active(GTK_COMBO_BOX(widget));
	
	if (index == 0) {
		newid[1] = '0';
	}
	else if (index == 1) {
		newid[1] = '1';
	}
	else if (index == 2) {
		newid[1] = '2';
	}
	else if (index == 3) {
		newid[1] = '3';
	}
	else if (index == 4) {
		newid[1] = '4';
	}
	else if (index == 5) {
		newid[1] = '5';
	}
	else if (index == 6) {
		newid[1] = '6';
	}
	else if (index == 7) {
		newid[1] = '7';
	}
	else if (index == 8) {
		newid[1] = '8';
	}
	else if (index == 9) {
		newid[1] = '9';
	}
	else if (index == 10) {
		newid[1] = 'A';
	}
	else if (index == 11) {
		newid[1] = 'B';
	}
	else if (index == 12) {
		newid[1] = 'C';
	}
	else if (index == 13) {
		newid[1] = 'D';
	}
	else if (index == 14) {
		newid[1] = 'E';
	}
	else if (index == 15) {
		newid[1] = 'F';
	}
	
	gint tmp_pos = GTK_ENTRY (window)->text_length;
	gtk_editable_insert_text (GTK_EDITABLE (window), newid, -1, &tmp_pos);
	gtk_editable_delete_text (GTK_EDITABLE (window), 4, GTK_ENTRY (window)->text_length);
    gtk_editable_select_region (GTK_EDITABLE (window), 0, GTK_ENTRY (window)->text_length);
}

void shadowds (GtkWidget *widget, gpointer window) {
	gchar *text = gtk_combo_box_get_active_text(GTK_COMBO_BOX(widget));
	gchar *id = gtk_entry_get_text(GTK_ENTRY(window));
	gchar *newid = id;
	gint index = gtk_combo_box_get_active(GTK_COMBO_BOX(widget));
	
	if (index == 0) {
		newid[1] = '0';
	}
	else if (index == 1) {
		newid[1] = '1';
	}
	else if (index == 2) {
		newid[1] = '2';
	}
	else if (index == 3) {
		newid[1] = '3';
	}
	else if (index == 4) {
		newid[1] = '4';
	}
	else if (index == 5) {
		newid[1] = '5';
	}
	else if (index == 6) {
		newid[1] = '6';
	}
	else if (index == 7) {
		newid[1] = '7';
	}
	else if (index == 8) {
		newid[1] = '8';
	}
	else if (index == 9) {
		newid[1] = '9';
	}
	else if (index == 10) {
		newid[1] = 'A';
	}
	else if (index == 11) {
		newid[1] = 'B';
	}
	else if (index == 12) {
		newid[1] = 'C';
	}
	else if (index == 13) {
		newid[1] = 'D';
	}
	else if (index == 14) {
		newid[1] = 'E';
	}
	else if (index == 15) {
		newid[1] = 'F';
	}
	
	gint tmp_pos = GTK_ENTRY (window)->text_length;
	gtk_editable_insert_text (GTK_EDITABLE (window), newid, -1, &tmp_pos);
	gtk_editable_delete_text (GTK_EDITABLE (window), 4, GTK_ENTRY (window)->text_length);
    gtk_editable_select_region (GTK_EDITABLE (window), 0, GTK_ENTRY (window)->text_length);
}
