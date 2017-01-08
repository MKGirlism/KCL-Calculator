#include "getall.h"
#include "val2ent.h"
#include "decro.h"
#include "basiceffect.h"
#include "becalc.h"
#include "shadow.h"
#include "special.h"
#include "calcds.h"
#include "calc7.h"

void getindex (GtkWidget *widget, gpointer window) {
	gint out = gtk_combo_box_get_active(GTK_COMBO_BOX(window));
	g_print("%d\n", out);
}

void entryres (GtkWidget *widget, GdkEventKey *event) {
	const char *text = gtk_entry_get_text(GTK_ENTRY(entry));
	gint f3, f2, f1, f0;
	
	if (text[2] == '0') {
		if (text[3] == '0') {
			f3 = 0;
		}
		else if (text[3] == '1') {
			f3 = 1;
		}
		else if (text[3] == '2') {
			f3 = 2;
		}
		else if (text[3] == '3') {
			f3 = 3;
		}
		else if (text[3] == '4') {
			f3 = 4;
		}
		else if (text[3] == '5') {
			f3 = 5;
		}
		else if (text[3] == '6') {
			f3 = 6;
		}
		else if (text[3] == '7') {
			f3 = 7;
		}
		else if (text[3] == '8') {
			f3 = 8;
		}
		else if (text[3] == '9') {
			f3 = 9;
		}
		else if (text[3] == 'A') {
			f3 = 10;
		}
		else if (text[3] == 'B') {
			f3 = 11;
		}
		else if (text[3] == 'C') {
			f3 = 12;
		}
		else if (text[3] == 'D') {
			f3 = 13;
		}
		else if (text[3] == 'E') {
			f3 = 14;
		}
		else if (text[3] == 'F') {
			f3 = 15;
		}
		
		f2 = 0;
	}
	
	if (text[2] == '1') {
		if (text[3] == '0') {
			f3 = 16;
		}
		else if (text[3] == '1') {
			f3 = 17;
		}
		else if (text[3] == '2') {
			f3 = 18;
		}
		else if (text[3] == '3') {
			f3 = 19;
		}
		else if (text[3] == '4') {
			f3 = 20;
		}
		else if (text[3] == '5') {
			f3 = 21;
		}
		else if (text[3] == '6') {
			f3 = 22;
		}
		else if (text[3] == '7') {
			f3 = 23;
		}
		else if (text[3] == '8') {
			f3 = 24;
		}
		else if (text[3] == '9') {
			f3 = 25;
		}
		else if (text[3] == 'A') {
			f3 = 26;
		}
		else if (text[3] == 'B') {
			f3 = 27;
		}
		else if (text[3] == 'C') {
			f3 = 28;
		}
		else if (text[3] == 'D') {
			f3 = 29;
		}
		else if (text[3] == 'E') {
			f3 = 30;
		}
		else if (text[3] == 'F') {
			f3 = 31;
		}
		
		f2 = 0;
	}
	
	if (text[2] == '2') {
		if (text[3] == '0') {
			f3 = 0;
		}
		else if (text[3] == '1') {
			f3 = 1;
		}
		else if (text[3] == '2') {
			f3 = 2;
		}
		else if (text[3] == '3') {
			f3 = 3;
		}
		else if (text[3] == '4') {
			f3 = 4;
		}
		else if (text[3] == '5') {
			f3 = 5;
		}
		else if (text[3] == '6') {
			f3 = 6;
		}
		else if (text[3] == '7') {
			f3 = 7;
		}
		else if (text[3] == '8') {
			f3 = 8;
		}
		else if (text[3] == '9') {
			f3 = 9;
		}
		else if (text[3] == 'A') {
			f3 = 10;
		}
		else if (text[3] == 'B') {
			f3 = 11;
		}
		else if (text[3] == 'C') {
			f3 = 12;
		}
		else if (text[3] == 'D') {
			f3 = 13;
		}
		else if (text[3] == 'E') {
			f3 = 14;
		}
		else if (text[3] == 'F') {
			f3 = 15;
		}
		
		f2 = 1;
	}
	
	if (text[2] == '3') {
		if (text[3] == '0') {
			f3 = 16;
		}
		else if (text[3] == '1') {
			f3 = 17;
		}
		else if (text[3] == '2') {
			f3 = 18;
		}
		else if (text[3] == '3') {
			f3 = 19;
		}
		else if (text[3] == '4') {
			f3 = 20;
		}
		else if (text[3] == '5') {
			f3 = 21;
		}
		else if (text[3] == '6') {
			f3 = 22;
		}
		else if (text[3] == '7') {
			f3 = 23;
		}
		else if (text[3] == '8') {
			f3 = 24;
		}
		else if (text[3] == '9') {
			f3 = 25;
		}
		else if (text[3] == 'A') {
			f3 = 26;
		}
		else if (text[3] == 'B') {
			f3 = 27;
		}
		else if (text[3] == 'C') {
			f3 = 28;
		}
		else if (text[3] == 'D') {
			f3 = 29;
		}
		else if (text[3] == 'E') {
			f3 = 30;
		}
		else if (text[3] == 'F') {
			f3 = 31;
		}
		
		f2 = 1;
	}
	
	if (text[2] == '4') {
		if (text[3] == '0') {
			f3 = 0;
		}
		else if (text[3] == '1') {
			f3 = 1;
		}
		else if (text[3] == '2') {
			f3 = 2;
		}
		else if (text[3] == '3') {
			f3 = 3;
		}
		else if (text[3] == '4') {
			f3 = 4;
		}
		else if (text[3] == '5') {
			f3 = 5;
		}
		else if (text[3] == '6') {
			f3 = 6;
		}
		else if (text[3] == '7') {
			f3 = 7;
		}
		else if (text[3] == '8') {
			f3 = 8;
		}
		else if (text[3] == '9') {
			f3 = 9;
		}
		else if (text[3] == 'A') {
			f3 = 10;
		}
		else if (text[3] == 'B') {
			f3 = 11;
		}
		else if (text[3] == 'C') {
			f3 = 12;
		}
		else if (text[3] == 'D') {
			f3 = 13;
		}
		else if (text[3] == 'E') {
			f3 = 14;
		}
		else if (text[3] == 'F') {
			f3 = 15;
		}
		
		f2 = 2;
	}
	
	if (text[2] == '5') {
		if (text[3] == '0') {
			f3 = 16;
		}
		else if (text[3] == '1') {
			f3 = 17;
		}
		else if (text[3] == '2') {
			f3 = 18;
		}
		else if (text[3] == '3') {
			f3 = 19;
		}
		else if (text[3] == '4') {
			f3 = 20;
		}
		else if (text[3] == '5') {
			f3 = 21;
		}
		else if (text[3] == '6') {
			f3 = 22;
		}
		else if (text[3] == '7') {
			f3 = 23;
		}
		else if (text[3] == '8') {
			f3 = 24;
		}
		else if (text[3] == '9') {
			f3 = 25;
		}
		else if (text[3] == 'A') {
			f3 = 26;
		}
		else if (text[3] == 'B') {
			f3 = 27;
		}
		else if (text[3] == 'C') {
			f3 = 28;
		}
		else if (text[3] == 'D') {
			f3 = 29;
		}
		else if (text[3] == 'E') {
			f3 = 30;
		}
		else if (text[3] == 'F') {
			f3 = 31;
		}
		
		f2 = 2;
	}
	
	if (text[2] == '6') {
		if (text[3] == '0') {
			f3 = 0;
		}
		else if (text[3] == '1') {
			f3 = 1;
		}
		else if (text[3] == '2') {
			f3 = 2;
		}
		else if (text[3] == '3') {
			f3 = 3;
		}
		else if (text[3] == '4') {
			f3 = 4;
		}
		else if (text[3] == '5') {
			f3 = 5;
		}
		else if (text[3] == '6') {
			f3 = 6;
		}
		else if (text[3] == '7') {
			f3 = 7;
		}
		else if (text[3] == '8') {
			f3 = 8;
		}
		else if (text[3] == '9') {
			f3 = 9;
		}
		else if (text[3] == 'A') {
			f3 = 10;
		}
		else if (text[3] == 'B') {
			f3 = 11;
		}
		else if (text[3] == 'C') {
			f3 = 12;
		}
		else if (text[3] == 'D') {
			f3 = 13;
		}
		else if (text[3] == 'E') {
			f3 = 14;
		}
		else if (text[3] == 'F') {
			f3 = 15;
		}
		
		f2 = 3;
	}
	
	if (text[2] == '7') {
		if (text[3] == '0') {
			f3 = 16;
		}
		else if (text[3] == '1') {
			f3 = 17;
		}
		else if (text[3] == '2') {
			f3 = 18;
		}
		else if (text[3] == '3') {
			f3 = 19;
		}
		else if (text[3] == '4') {
			f3 = 20;
		}
		else if (text[3] == '5') {
			f3 = 21;
		}
		else if (text[3] == '6') {
			f3 = 22;
		}
		else if (text[3] == '7') {
			f3 = 23;
		}
		else if (text[3] == '8') {
			f3 = 24;
		}
		else if (text[3] == '9') {
			f3 = 25;
		}
		else if (text[3] == 'A') {
			f3 = 26;
		}
		else if (text[3] == 'B') {
			f3 = 27;
		}
		else if (text[3] == 'C') {
			f3 = 28;
		}
		else if (text[3] == 'D') {
			f3 = 29;
		}
		else if (text[3] == 'E') {
			f3 = 30;
		}
		else if (text[3] == 'F') {
			f3 = 31;
		}
		
		f2 = 3;
	}
	
	if (text[2] == '8') {
		if (text[3] == '0') {
			f3 = 0;
		}
		else if (text[3] == '1') {
			f3 = 1;
		}
		else if (text[3] == '2') {
			f3 = 2;
		}
		else if (text[3] == '3') {
			f3 = 3;
		}
		else if (text[3] == '4') {
			f3 = 4;
		}
		else if (text[3] == '5') {
			f3 = 5;
		}
		else if (text[3] == '6') {
			f3 = 6;
		}
		else if (text[3] == '7') {
			f3 = 7;
		}
		else if (text[3] == '8') {
			f3 = 8;
		}
		else if (text[3] == '9') {
			f3 = 9;
		}
		else if (text[3] == 'A') {
			f3 = 10;
		}
		else if (text[3] == 'B') {
			f3 = 11;
		}
		else if (text[3] == 'C') {
			f3 = 12;
		}
		else if (text[3] == 'D') {
			f3 = 13;
		}
		else if (text[3] == 'E') {
			f3 = 14;
		}
		else if (text[3] == 'F') {
			f3 = 15;
		}
		
		f2 = 4;
	}
	
	if (text[2] == '9') {
		if (text[3] == '0') {
			f3 = 16;
		}
		else if (text[3] == '1') {
			f3 = 17;
		}
		else if (text[3] == '2') {
			f3 = 18;
		}
		else if (text[3] == '3') {
			f3 = 19;
		}
		else if (text[3] == '4') {
			f3 = 20;
		}
		else if (text[3] == '5') {
			f3 = 21;
		}
		else if (text[3] == '6') {
			f3 = 22;
		}
		else if (text[3] == '7') {
			f3 = 23;
		}
		else if (text[3] == '8') {
			f3 = 24;
		}
		else if (text[3] == '9') {
			f3 = 25;
		}
		else if (text[3] == 'A') {
			f3 = 26;
		}
		else if (text[3] == 'B') {
			f3 = 27;
		}
		else if (text[3] == 'C') {
			f3 = 28;
		}
		else if (text[3] == 'D') {
			f3 = 29;
		}
		else if (text[3] == 'E') {
			f3 = 30;
		}
		else if (text[3] == 'F') {
			f3 = 31;
		}
		
		f2 = 4;
	}
	
	if (text[2] == 'A') {
		if (text[3] == '0') {
			f3 = 0;
		}
		else if (text[3] == '1') {
			f3 = 1;
		}
		else if (text[3] == '2') {
			f3 = 2;
		}
		else if (text[3] == '3') {
			f3 = 3;
		}
		else if (text[3] == '4') {
			f3 = 4;
		}
		else if (text[3] == '5') {
			f3 = 5;
		}
		else if (text[3] == '6') {
			f3 = 6;
		}
		else if (text[3] == '7') {
			f3 = 7;
		}
		else if (text[3] == '8') {
			f3 = 8;
		}
		else if (text[3] == '9') {
			f3 = 9;
		}
		else if (text[3] == 'A') {
			f3 = 10;
		}
		else if (text[3] == 'B') {
			f3 = 11;
		}
		else if (text[3] == 'C') {
			f3 = 12;
		}
		else if (text[3] == 'D') {
			f3 = 13;
		}
		else if (text[3] == 'E') {
			f3 = 14;
		}
		else if (text[3] == 'F') {
			f3 = 15;
		}
		
		f2 = 5;
	}
	
	if (text[2] == 'B') {
		if (text[3] == '0') {
			f3 = 16;
		}
		else if (text[3] == '1') {
			f3 = 17;
		}
		else if (text[3] == '2') {
			f3 = 18;
		}
		else if (text[3] == '3') {
			f3 = 19;
		}
		else if (text[3] == '4') {
			f3 = 20;
		}
		else if (text[3] == '5') {
			f3 = 21;
		}
		else if (text[3] == '6') {
			f3 = 22;
		}
		else if (text[3] == '7') {
			f3 = 23;
		}
		else if (text[3] == '8') {
			f3 = 24;
		}
		else if (text[3] == '9') {
			f3 = 25;
		}
		else if (text[3] == 'A') {
			f3 = 26;
		}
		else if (text[3] == 'B') {
			f3 = 27;
		}
		else if (text[3] == 'C') {
			f3 = 28;
		}
		else if (text[3] == 'D') {
			f3 = 29;
		}
		else if (text[3] == 'E') {
			f3 = 30;
		}
		else if (text[3] == 'F') {
			f3 = 31;
		}
		
		f2 = 5;
	}
	
	if (text[2] == 'C') {
		if (text[3] == '0') {
			f3 = 0;
		}
		else if (text[3] == '1') {
			f3 = 1;
		}
		else if (text[3] == '2') {
			f3 = 2;
		}
		else if (text[3] == '3') {
			f3 = 3;
		}
		else if (text[3] == '4') {
			f3 = 4;
		}
		else if (text[3] == '5') {
			f3 = 5;
		}
		else if (text[3] == '6') {
			f3 = 6;
		}
		else if (text[3] == '7') {
			f3 = 7;
		}
		else if (text[3] == '8') {
			f3 = 8;
		}
		else if (text[3] == '9') {
			f3 = 9;
		}
		else if (text[3] == 'A') {
			f3 = 10;
		}
		else if (text[3] == 'B') {
			f3 = 11;
		}
		else if (text[3] == 'C') {
			f3 = 12;
		}
		else if (text[3] == 'D') {
			f3 = 13;
		}
		else if (text[3] == 'E') {
			f3 = 14;
		}
		else if (text[3] == 'F') {
			f3 = 15;
		}
		
		f2 = 6;
	}
	
	if (text[2] == 'D') {
		if (text[3] == '0') {
			f3 = 16;
		}
		else if (text[3] == '1') {
			f3 = 17;
		}
		else if (text[3] == '2') {
			f3 = 18;
		}
		else if (text[3] == '3') {
			f3 = 19;
		}
		else if (text[3] == '4') {
			f3 = 20;
		}
		else if (text[3] == '5') {
			f3 = 21;
		}
		else if (text[3] == '6') {
			f3 = 22;
		}
		else if (text[3] == '7') {
			f3 = 23;
		}
		else if (text[3] == '8') {
			f3 = 24;
		}
		else if (text[3] == '9') {
			f3 = 25;
		}
		else if (text[3] == 'A') {
			f3 = 26;
		}
		else if (text[3] == 'B') {
			f3 = 27;
		}
		else if (text[3] == 'C') {
			f3 = 28;
		}
		else if (text[3] == 'D') {
			f3 = 29;
		}
		else if (text[3] == 'E') {
			f3 = 30;
		}
		else if (text[3] == 'F') {
			f3 = 31;
		}
		
		f2 = 6;
	}
	
	if (text[2] == 'E') {
		if (text[3] == '0') {
			f3 = 0;
		}
		else if (text[3] == '1') {
			f3 = 1;
		}
		else if (text[3] == '2') {
			f3 = 2;
		}
		else if (text[3] == '3') {
			f3 = 3;
		}
		else if (text[3] == '4') {
			f3 = 4;
		}
		else if (text[3] == '5') {
			f3 = 5;
		}
		else if (text[3] == '6') {
			f3 = 6;
		}
		else if (text[3] == '7') {
			f3 = 7;
		}
		else if (text[3] == '8') {
			f3 = 8;
		}
		else if (text[3] == '9') {
			f3 = 9;
		}
		else if (text[3] == 'A') {
			f3 = 10;
		}
		else if (text[3] == 'B') {
			f3 = 11;
		}
		else if (text[3] == 'C') {
			f3 = 12;
		}
		else if (text[3] == 'D') {
			f3 = 13;
		}
		else if (text[3] == 'E') {
			f3 = 14;
		}
		else if (text[3] == 'F') {
			f3 = 15;
		}
		
		f2 = 7;
	}
	
	if (text[2] == 'F') {
		if (text[3] == '0') {
			f3 = 16;
		}
		else if (text[3] == '1') {
			f3 = 17;
		}
		else if (text[3] == '2') {
			f3 = 18;
		}
		else if (text[3] == '3') {
			f3 = 19;
		}
		else if (text[3] == '4') {
			f3 = 20;
		}
		else if (text[3] == '5') {
			f3 = 21;
		}
		else if (text[3] == '6') {
			f3 = 22;
		}
		else if (text[3] == '7') {
			f3 = 23;
		}
		else if (text[3] == '8') {
			f3 = 24;
		}
		else if (text[3] == '9') {
			f3 = 25;
		}
		else if (text[3] == 'A') {
			f3 = 26;
		}
		else if (text[3] == 'B') {
			f3 = 27;
		}
		else if (text[3] == 'C') {
			f3 = 28;
		}
		else if (text[3] == 'D') {
			f3 = 29;
		}
		else if (text[3] == 'E') {
			f3 = 30;
		}
		else if (text[3] == 'F') {
			f3 = 31;
		}
		
		f2 = 7;
	}
	
	if (text[1] == '0') {
		f1 = 0;
	}
	else if (text[1] == '1') {
		f1 = 1;
	}
	else if (text[1] == '2') {
		f1 = 2;
	}
	else if (text[1] == '3') {
		f1 = 3;
	}
	else if (text[1] == '4') {
		f1 = 4;
	}
	else if (text[1] == '5') {
		f1 = 5;
	}
	else if (text[1] == '6') {
		f1 = 6;
	}
	else if (text[1] == '7') {
		f1 = 7;
	}
	else if (text[1] == '8') {
		f1 = 8;
	}
	else if (text[1] == '9') {
		f1 = 9;
	}
	else if (text[1] == 'A') {
		f1 = 10;
	}
	else if (text[1] == 'B') {
		f1 = 11;
	}
	else if (text[1] == 'C') {
		f1 = 12;
	}
	else if (text[1] == 'D') {
		f1 = 13;
	}
	else if (text[1] == 'E') {
		f1 = 14;
	}
	else if (text[1] == 'F') {
		f1 = 15;
	}
	else {
		f1 = 0;
	}
	
	if (text[0] == '0') {
		f0 = 0;
	}
	else if (text[0] == '1') {
		f0 = 1;
	}
	else if (text[0] == '2') {
		f0 = 2;
	}
	else if (text[0] == '3') {
		f0 = 3;
	}
	else if (text[0] == '4') {
		f0 = 4;
	}
	else if (text[0] == '5') {
		f0 = 5;
	}
	else if (text[0] == '6') {
		f0 = 6;
	}
	else if (text[0] == '7') {
		f0 = 7;
	}
	else if (text[0] == '8') {
		f0 = 8;
	}
	else if (text[0] == '9') {
		f0 = 9;
	}
	else if (text[0] == 'A') {
		f0 = 10;
	}
	else if (text[0] == 'B') {
		f0 = 11;
	}
	else if (text[0] == 'C') {
		f0 = 12;
	}
	else if (text[0] == 'D') {
		f0 = 13;
	}
	else if (text[0] == 'E') {
		f0 = 14;
	}
	else if (text[0] == 'F') {
		f0 = 15;
	}
	else {
		f0 = 0;
	}
	
	if (event->keyval == 65293) {
		gtk_combo_box_set_active(GTK_COMBO_BOX(combod), f3);
		gtk_combo_box_set_active(GTK_COMBO_BOX(combob), f2);
		gtk_combo_box_set_active(GTK_COMBO_BOX(combosh), f1);
		gtk_combo_box_set_active(GTK_COMBO_BOX(combosp), f0);
	}
}

int main (int argc, char *argv[]) {
	GtkAccelGroup * accel_group = NULL;
	
	// GTKを始まり。
	gtk_init(&argc, &argv);
	
	// ウィンドウ物。
	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title(GTK_WINDOW(window), "KCL Calculator v1.1");
	gtk_container_set_border_width(GTK_CONTAINER(window), 5);
	gtk_window_resize(GTK_WINDOW(window), 686, 280);
	gtk_window_set_resizable(GTK_WINDOW(window), FALSE);
	gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
	
	// レイアウトを樹立。
	fixed = gtk_fixed_new();
	gtk_container_add(GTK_CONTAINER(window), fixed);
	
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
	
	// 結果。
	labelID = gtk_label_new("KCL ID:");
	gtk_label_set_justify(GTK_LABEL(labelID), GTK_JUSTIFY_RIGHT);
	gtk_fixed_put(GTK_FIXED(fixed), labelID, 150, 180);
	gtk_widget_set_size_request(labelID, 97, 30);
	
	entry = gtk_entry_new();
	gtk_entry_set_text(GTK_ENTRY(entry), "0000");
	gtk_entry_set_editable(GTK_ENTRY(entry), TRUE);
	gtk_fixed_put(GTK_FIXED(fixed), entry, 240, 180);
	gtk_widget_set_size_request(entry, 97, 30);
	
	g_signal_connect(G_OBJECT(entry), "key-release-event",
		G_CALLBACK(entryres), NULL);
	
	radio1 = gtk_radio_button_new_with_label(NULL, "MKDS");
	gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radio1), FALSE);
	gtk_fixed_put(GTK_FIXED(fixed), radio1, 180, 220);
	gtk_widget_set_size_request(radio1, 97, 30);
	
	group = gtk_radio_button_get_group(GTK_RADIO_BUTTON(radio1));
	
	radio2 = gtk_radio_button_new_with_label(group, "MK7");
	gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radio2), TRUE);
	gtk_fixed_put(GTK_FIXED(fixed), radio2, 270, 220);
	gtk_widget_set_size_request(radio2, 97, 30);
	
	g_signal_connect(G_OBJECT(combod), "changed", 
		G_CALLBACK(val2ent7), (gpointer) entry);
	g_signal_connect(G_OBJECT(combob), "changed", 
		G_CALLBACK(becalc7), (gpointer) entry);
	g_signal_connect(G_OBJECT(combosh), "changed", 
		G_CALLBACK(shadow7), (gpointer) entry);
	g_signal_connect(G_OBJECT(combosp), "changed", 
		G_CALLBACK(special7), (gpointer) entry);

	g_signal_connect(G_OBJECT(radio1), "clicked", 
		G_CALLBACK(calcds), (gpointer) window);
	g_signal_connect(G_OBJECT(radio2), "clicked", 
		G_CALLBACK(calc7), (gpointer) window);
	
	// あたしの名前は。。。
	labelF = gtk_label_new("Made by MKGirlism. https://www.dshack.org");
	gtk_label_set_justify(GTK_LABEL(labelF), GTK_JUSTIFY_RIGHT);
	gtk_fixed_put(GTK_FIXED(fixed), labelF, 150, 250);
	gtk_widget_set_size_request(labelF, 400, 30);
	
	// 全て破壊して。
	g_signal_connect(G_OBJECT(window), "destroy",
		G_CALLBACK(gtk_main_quit), NULL);
	
	gtk_widget_show_all(window);
	
	gtk_main();
	
	return 0;
}
