#include "decro.h"

void decro7 (GtkWidget *widget, gpointer window) {
	gchar *text = gtk_combo_box_get_active_text(GTK_COMBO_BOX(widget));
	gchar *dec;
	
	if (strcmp(text, "0x00 - Road") == 0) {
		gtk_label_set_text(GTK_LABEL(window), "A type of road that's solid for both players and items.");
	}
	else if (strcmp(text, "0x01 - Road 2") == 0) {
		gtk_label_set_text(GTK_LABEL(window), "A type of road that's solid for both players and items.");
	}
	else if (strcmp(text, "0x02 - Road 3") == 0) {
		gtk_label_set_text(GTK_LABEL(window), "A type of road that's solid for both players and items.");
	}
	else if (strcmp(text, "0x03 - Road 4") == 0) {
		gtk_label_set_text(GTK_LABEL(window), "A type of road that's solid for both players and items.");
	}
	else if (strcmp(text, "0x04 - Slippery Road") == 0) {
		gtk_label_set_text(GTK_LABEL(window), "A type of road that is slippery, but does not slow you down.");
	}
	else if (strcmp(text, "0x05 - Off-road") == 0) {
		gtk_label_set_text(GTK_LABEL(window), "Terrain that slows you down.");
	}
	else if (strcmp(text, "0x06 - Heavy Off-road") == 0) {
		gtk_label_set_text(GTK_LABEL(window), "Terrain that slows you down a lot.");
	}
	else if (strcmp(text, "0x07 - Slippery Road 2") == 0) {
		gtk_label_set_text(GTK_LABEL(window), "A type of read that is slippery, but does not slow you down.");
	}
	else if (strcmp(text, "0x08 - Boost Pad") == 0) {
		gtk_label_set_text(GTK_LABEL(window), "Provides a quick speed boost. Variations make different road sounds when drifting.");
	}
	else if (strcmp(text, "0x09 - Glider Pad") == 0) {
		gtk_label_set_text(GTK_LABEL(window), "Activates glider after passing over it. Variations make different road sounds when drifting.");
	}
	else if (strcmp(text, "0x0A - Does nothing") == 0) {
		gtk_label_set_text(GTK_LABEL(window), "Does nothing, you just fall through it. [?]");
	}
	else if (strcmp(text, "0x0B - Solid Fall") == 0) {
		gtk_label_set_text(GTK_LABEL(window), "Acts as an out of bounds.");
	}
	else if (strcmp(text, "0x0C - Moving Terrain") == 0) {
		gtk_label_set_text(GTK_LABEL(window), "Terrain that can move the player. Linked to routes in the KMP[?].");
	}
	else if (strcmp(text, "0x0D - Road 4") == 0) {
		gtk_label_set_text(GTK_LABEL(window), "A type of road that's solid for both players and items.");
	}
	else if (strcmp(text, "0x0E - Unknown [!]Crashes the game[!]") == 0) {
		gtk_label_set_text(GTK_LABEL(window), "The game crashes when either the player or CPUs make contact with this collision.");
	}
	else if (strcmp(text, "0x0F - Does nothing") == 0) {
		gtk_label_set_text(GTK_LABEL(window), "Does nothing, you just fall through it. [?]");
	}
	
	
	
	else if (strcmp(text, "0x10 - Wall") == 0) {
		gtk_label_set_text(GTK_LABEL(window), "A wall that is solid to both players and items.");
	}
	else if (strcmp(text, "0x11 - Wall 2") == 0) {
		gtk_label_set_text(GTK_LABEL(window), "A wall that is solid to both players and items.");
	}
	else if (strcmp(text, "0x12 - Invisible Wall") == 0) {
		gtk_label_set_text(GTK_LABEL(window), "A wall that is solid to both players but not items.");
	}
	else if (strcmp(text, "0x13 - Does nothing") == 0) {
		gtk_label_set_text(GTK_LABEL(window), "Does nothing, you just fall through it. [?]");
	}
	else if (strcmp(text, "0x14 - Wall 3") == 0) {
		gtk_label_set_text(GTK_LABEL(window), "A wall that is solid to both players and items.");
	}
	else if (strcmp(text, "0x15 - Wall 4") == 0) {
		gtk_label_set_text(GTK_LABEL(window), "A wall that is solid to both players and items.");
	}
	else if (strcmp(text, "0x16 - Does nothing") == 0) {
		gtk_label_set_text(GTK_LABEL(window), "Does nothing, you just fall through it. [?]");
	}
	else if (strcmp(text, "0x17 - Does nothing") == 0) {
		gtk_label_set_text(GTK_LABEL(window), "Does nothing, you just fall through it. [?]");
	}
	else if (strcmp(text, "0x18 - Does nothing") == 0) {
		gtk_label_set_text(GTK_LABEL(window), "Does nothing, you just fall through it. [?]");
	}
	else if (strcmp(text, "0x19 - Fall Boundary") == 0) {
		gtk_label_set_text(GTK_LABEL(window), "Causes the player to fall and be respawned back on the track.");
	}
	else if (strcmp(text, "0x1A - Effect Trigger") == 0) {
		gtk_label_set_text(GTK_LABEL(window), "Triggers a visual effect when passing through this collision.");
	}
	else if (strcmp(text, "0x1B - Does nothing") == 0) {
		gtk_label_set_text(GTK_LABEL(window), "Does nothing, you just fall through it. [?]");
	}
	else if (strcmp(text, "0x1C - Glider Activator") == 0) {
		gtk_label_set_text(GTK_LABEL(window), "Activates your glider after passing through it, like a glider pad but not solid.");
	}
	else if (strcmp(text, "0x1D - Fall Boundary 2") == 0) {
		gtk_label_set_text(GTK_LABEL(window), "Causes the player to fall and be respawned back on the track.");
	}
	else if (strcmp(text, "0x1E - Does nothing") == 0) {
		gtk_label_set_text(GTK_LABEL(window), "Does nothing, you just fall through it. [?]");
	}
	else if (strcmp(text, "0x1F - Effect Trigger 2") == 0) {
		gtk_label_set_text(GTK_LABEL(window), "Triggers a visual effect when passing through this collision.");
	}
	else {
		gtk_label_set_text(GTK_LABEL(window), "");
	}
	
	g_free(text);
}

void decrods (GtkWidget *widget, gpointer window) {
	gint index = gtk_combo_box_get_active(GTK_COMBO_BOX(widget));
	gchar *dec;
	
	if (index == 0) {
		gtk_label_set_text(GTK_LABEL(window), "A type of road that's solid for both players and items.");
	}
	else if (index == 1) {
		gtk_label_set_text(GTK_LABEL(window), "Unknown.");
	}
	else if (index == 2) {
		gtk_label_set_text(GTK_LABEL(window), "Terrain that slows you down a bit.");
	}
	else if (index == 3) {
		gtk_label_set_text(GTK_LABEL(window), "Terrain that slows you down.");
	}
	else if (index == 4) {
		gtk_label_set_text(GTK_LABEL(window), "Does nothing, you just fall through it. [?]");
	}
	else if (index == 5) {
		gtk_label_set_text(GTK_LABEL(window), "Unknown.");
	}
	else if (index == 6) {
		gtk_label_set_text(GTK_LABEL(window), "A type of read that is slippery, but does not slow you down.");
	}
	else if (index == 7) {
		gtk_label_set_text(GTK_LABEL(window), "Provides a quick speed boost. Variations make different road sounds when drifting.");
	}
	else if (index == 8) {
		gtk_label_set_text(GTK_LABEL(window), "A wall that is solid to both players and items.");
	}
	else if (index == 9) {
		gtk_label_set_text(GTK_LABEL(window), "A wall that is solid to both players and items.");
	}
	else if (index == 10) {
		gtk_label_set_text(GTK_LABEL(window), "Acts as an out of bounds.");
	}
	else if (index == 11) {
		gtk_label_set_text(GTK_LABEL(window), "Does nothing, you just fall through it. [?]");
	}
	else if (index == 12) {
		gtk_label_set_text(GTK_LABEL(window), "A hop effect.");
	}
	else if (index == 13) {
		gtk_label_set_text(GTK_LABEL(window), "A road that's sort of sticky.");
	}
	else if (index == 14) {
		gtk_label_set_text(GTK_LABEL(window), "A hop effect.");
	}
	else if (index == 15) {
		gtk_label_set_text(GTK_LABEL(window), "Activates the cannon.");
	}
	
	
	
	else if (index == 16) {
		gtk_label_set_text(GTK_LABEL(window), "Unknown.");
	}
	else if (index == 17) {
		gtk_label_set_text(GTK_LABEL(window), "The water falls like in Yoshi Falls..");
	}
	else if (index == 18) {
		gtk_label_set_text(GTK_LABEL(window), "Provides a quick speed boost. Variations make different road sounds when drifting. [?]");
	}
	else if (index == 19) {
		gtk_label_set_text(GTK_LABEL(window), "Loops?");
	}
	else if (index == 20) {
		gtk_label_set_text(GTK_LABEL(window), "Road that creates some noise.");
	}
	else if (index == 21) {
		gtk_label_set_text(GTK_LABEL(window), "Wall that creates some noise.");
	}
	else if (index == 22) {
		gtk_label_set_text(GTK_LABEL(window), "Does nothing, you just fall through it. [?]");
	}
	else if (index == 23) {
		gtk_label_set_text(GTK_LABEL(window), "Does nothing, you just fall through it. [?]");
	}
	else if (index == 24) {
		gtk_label_set_text(GTK_LABEL(window), "Does nothing, you just fall through it. [?]");
	}
	else if (index == 25) {
		gtk_label_set_text(GTK_LABEL(window), "Does nothing, you just fall through it. [?]");
	}
	else if (index == 26) {
		gtk_label_set_text(GTK_LABEL(window), "Does nothing, you just fall through it. [?]");
	}
	else if (index == 27) {
		gtk_label_set_text(GTK_LABEL(window), "Does nothing, you just fall through it. [?]");
	}
	else if (index == 28) {
		gtk_label_set_text(GTK_LABEL(window), "Does nothing, you just fall through it. [?]");
	}
	else if (index == 29) {
		gtk_label_set_text(GTK_LABEL(window), "Does nothing, you just fall through it. [?]");
	}
	else if (index == 30) {
		gtk_label_set_text(GTK_LABEL(window), "Does nothing, you just fall through it. [?]");
	}
	else if (index == 31) {
		gtk_label_set_text(GTK_LABEL(window), "Does nothing, you just fall through it. [?]");
	}
	else {
		gtk_label_set_text(GTK_LABEL(window), "");
	}
}
