#include "val2ent.h"
#include "decro.h"
#include "basiceffect.h"
#include "becalc.h"
#include "shadow.h"
#include "special.h"
#include "calc7.h"

void calc7 (GtkWidget *widget, gpointer window) {
	if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(widget))) {
		gtk_label_set_text(GTK_LABEL(labelDEC), "");
		gtk_label_set_text(GTK_LABEL(labelI), "");
		gtk_label_set_text(GTK_LABEL(labelSE), "");
		gtk_entry_set_text(GTK_ENTRY(entry), "0000");
		
		// ラベル物。
		labelCT = gtk_label_new("Collision Type");
		gtk_label_set_justify(GTK_LABEL(labelCT), GTK_JUSTIFY_RIGHT);
		gtk_fixed_put(GTK_FIXED(fixed), labelCT, 40, 0);
		gtk_widget_set_size_request(labelCT, 97, 30);
	
		labelD = gtk_label_new("Description:");
		gtk_label_set_justify(GTK_LABEL(labelD), GTK_JUSTIFY_RIGHT);
		gtk_fixed_put(GTK_FIXED(fixed), labelD, 40, 30);
		gtk_widget_set_size_request(labelD, 97, 30);
	
		labelBE = gtk_label_new("Basic Effect");
		gtk_label_set_justify(GTK_LABEL(labelBE), GTK_JUSTIFY_RIGHT);
		gtk_fixed_put(GTK_FIXED(fixed), labelBE, 40, 60);
		gtk_widget_set_size_request(labelBE, 97, 30);
	
		labelS = gtk_label_new("Shadow");
		gtk_label_set_justify(GTK_LABEL(labelS), GTK_JUSTIFY_RIGHT);
		gtk_fixed_put(GTK_FIXED(fixed), labelS, 40, 90);
		gtk_widget_set_size_request(labelS, 97, 30);
	
		labelSP = gtk_label_new("Special Property");
		gtk_label_set_justify(GTK_LABEL(labelSP), GTK_JUSTIFY_RIGHT);
		gtk_fixed_put(GTK_FIXED(fixed), labelSP, 40, 120);
		gtk_widget_set_size_request(labelSP, 97, 30);
	
		// コンボーボクス物。
		combod = gtk_combo_box_new_text();
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x00 - Road");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x01 - Road 2");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x02 - Road 3");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x03 - Road 4");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x04 - Slippery Road");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x05 - Off-road");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x06 - Heavy Off-road");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x07 - Slippery Road 2");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x08 - Boost Pad");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x09 - Glider Pad");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x0A - Does nothing");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x0B - Solid Fall");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x0C - Moving Terrain");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x0D - Road 4");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x0E - Unknown [!]Crashes the game[!]");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x0F - Does nothing");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x10 - Wall");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x11 - Wall 2");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x12 - Invisible Wall");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x13 - Does nothing");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x14 - Wall 3");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x15 - Wall 4");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x16 - Does nothing");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x17 - Does nothing");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x18 - Does nothing");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x19 - Fall Boundary");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x1A - Effect Trigger");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x1B - Does nothing");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x1C - Glider Activator");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x1D - Fall Boundary 2");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x1E - Does nothing");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x1F - Effect Trigger 2");
		gtk_fixed_put(GTK_FIXED(fixed), combod, 150, 0);
		gtk_widget_set_size_request(combod, 500, 30);
	
		labelDEC = gtk_label_new("");
		gtk_label_set_justify(GTK_LABEL(labelDEC), GTK_JUSTIFY_LEFT);
		gtk_fixed_put(GTK_FIXED(fixed), labelDEC, 150, 30);
		gtk_widget_set_size_request(labelDEC, 500, 30);
	
		g_signal_connect(G_OBJECT(combod), "changed", 
			G_CALLBACK(decro7), (gpointer) labelDEC);
	
		combob = gtk_combo_box_new_text();
		g_signal_connect(G_OBJECT(combod), "changed", 
			G_CALLBACK(basiceffect7), (gpointer) combob);
	
		gtk_fixed_put(GTK_FIXED(fixed), combob, 150, 60);
		gtk_widget_set_size_request(combob, 500, 30);
	
		combosh = gtk_combo_box_new_text();
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosh), "0 (None)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosh), "1");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosh), "2");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosh), "3");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosh), "4");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosh), "5");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosh), "6");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosh), "7");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosh), "8");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosh), "9");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosh), "A");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosh), "B");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosh), "C");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosh), "D");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosh), "E");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosh), "F");
		gtk_fixed_put(GTK_FIXED(fixed), combosh, 150, 90);
		gtk_widget_set_size_request(combosh, 500, 30);
	
		combosp = gtk_combo_box_new_text();
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosp), "0 - Nothing");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosp), "1 - Trickable");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosp), "2 - Pushes you back");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosp), "3 - Pushes you back & Trickable");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosp), "4 - Sticky");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosp), "5 - Sticky & Trickable");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosp), "6 - Nothing (Cannon Activator if used with 0x09 or 0x1C?)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosp), "7 - Trickable (Cannon Activator if used with 0x09 or 0x1C?)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosp), "8 - Nothing (Cannon Activator if used with 0x09 or 0x1C?)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosp), "9 - Trickable (Cannon Activator if used with 0x09 or 0x1C?)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosp), "A - Nothing (Cannon Activator if used with 0x09 or 0x1C?)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosp), "B - Trickable (Cannon Activator if used with 0x09 or 0x1C?)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosp), "C - Nothing (Cannon Activator if used with 0x09 or 0x1C?)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosp), "D - Trickable (Cannon Activator if used with 0x09 or 0x1C?)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosp), "E - Nothing (Cannon Activator if used with 0x09 or 0x1C?)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosp), "F - Trickable (Cannon Activator if used with 0x09 or 0x1C?)");
		gtk_fixed_put(GTK_FIXED(fixed), combosp, 150, 120);
		gtk_widget_set_size_request(combosp, 500, 30);
	
		g_signal_connect(G_OBJECT(combod), "changed", 
			G_CALLBACK(val2ent7), (gpointer) entry);
		g_signal_connect(G_OBJECT(combob), "changed", 
			G_CALLBACK(becalc7), (gpointer) entry);
		g_signal_connect(G_OBJECT(combosh), "changed", 
			G_CALLBACK(shadow7), (gpointer) entry);
		g_signal_connect(G_OBJECT(combosp), "changed", 
			G_CALLBACK(special7), (gpointer) entry);
	
		gtk_widget_show_all(window);
	}
}
