#include "val2ent.h"
#include "decro.h"
#include "basiceffect.h"
#include "becalc.h"
#include "shadow.h"
#include "special.h"
#include "calcds.h"

void calcds (GtkWidget *widget, gpointer window) {
	if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(widget))) {
		gtk_label_set_text(GTK_LABEL(labelDEC), "");
		gtk_label_set_text(GTK_LABEL(labelS), "");
		gtk_label_set_text(GTK_LABEL(labelSP), "");
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
	
		labelI = gtk_label_new("Intensity");
		gtk_label_set_justify(GTK_LABEL(labelI), GTK_JUSTIFY_RIGHT);
		gtk_fixed_put(GTK_FIXED(fixed), labelI, 40, 90);
		gtk_widget_set_size_request(labelI, 97, 30);
	
		labelSE = gtk_label_new("Shadow Effect");
		gtk_label_set_justify(GTK_LABEL(labelSE), GTK_JUSTIFY_RIGHT);
		gtk_fixed_put(GTK_FIXED(fixed), labelSE, 40, 120);
		gtk_widget_set_size_request(labelSE, 97, 30);
	
		// コンボーボクス物。
		combod = gtk_combo_box_new_text();
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x00 - Road");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x01 - Unknown 1");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x02 - Weak Off-road");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x03 - Off-road");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x04 - Fall? (Used in Rainbow Road)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x05 - Unknown 5");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x06 - Slippery Road");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x07 - Boost Pad");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x08 - Wall");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x09 - Wall 2");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x0A - Out of Bounds");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x0B - Fall");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x0C - Jump Pad");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x0D - Sticky Road");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x0E - Small Jump (Ramps in SFC Chocolate Island 2)");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x0F - Cannon Activator");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x10 - ???");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x11 - Falls Water");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x12 - Boost Panel?");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x13 - Looping");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x14 - Road with Sound Effect");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x15 - Wall with Sound Effect");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x16 - Unused");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x17 - Unused");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x18 - Unused");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x19 - Unused");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x1A - Unused");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x1B - Unused");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x1C - Unused");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x1D - Unused");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x1E - Unused");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combod), "0x1F - Unused");
		gtk_fixed_put(GTK_FIXED(fixed), combod, 150, 0);
		gtk_widget_set_size_request(combod, 500, 30);
	
		labelDEC = gtk_label_new("");
		gtk_label_set_justify(GTK_LABEL(labelDEC), GTK_JUSTIFY_LEFT);
		gtk_fixed_put(GTK_FIXED(fixed), labelDEC, 150, 30);
		gtk_widget_set_size_request(labelDEC, 500, 30);
	
		g_signal_connect(G_OBJECT(combod), "changed", 
			G_CALLBACK(decrods), (gpointer) labelDEC);
	
		combob = gtk_combo_box_new_text();
		g_signal_connect(G_OBJECT(combod), "changed", 
			G_CALLBACK(basiceffectds), (gpointer) combob);
	
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
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosp), "0");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosp), "1");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosp), "2");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosp), "3");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosp), "4");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosp), "5");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosp), "6");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosp), "7");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosp), "8");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosp), "9");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosp), "A");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosp), "B");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosp), "C");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosp), "D");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosp), "E");
		gtk_combo_box_append_text(GTK_COMBO_BOX(combosp), "F");
		gtk_fixed_put(GTK_FIXED(fixed), combosp, 150, 120);
		gtk_widget_set_size_request(combosp, 500, 30);
	
		g_signal_connect(G_OBJECT(combod), "changed", 
			G_CALLBACK(val2entds), (gpointer) entry);
		g_signal_connect(G_OBJECT(combob), "changed", 
			G_CALLBACK(becalcds), (gpointer) entry);
		g_signal_connect(G_OBJECT(combosh), "changed", 
			G_CALLBACK(shadowds), (gpointer) entry);
		g_signal_connect(G_OBJECT(combosp), "changed", 
			G_CALLBACK(specialds), (gpointer) entry);
		
		gtk_widget_show_all(window);
	}
}
