#ifndef statusbar_h
#define statusbar_h


extern int statusvisible;

void statusbar_kpress( KeySym *ks, char *buf );
void updatestatus();
void setstatus(char* status);
void statusbar_focusin();
void statusbar_focusout();



#endif

