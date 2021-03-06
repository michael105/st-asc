#ifndef input_h
#define input_h
#include <X11/Xlib.h>


// save different inputmodes
extern int inputmode;

extern void (*handler[LASTEvent])(XEvent *); 


// callback argument
typedef union {
  int i;
  unsigned int ui;
  float f;
  const void *v;
  const char *s;
} Arg;



// keyboard input handling.

/* types used in config.h */
typedef struct {
		unsigned int mod;
		KeySym keysym;
		void (*func)(const Arg *);
		const Arg arg;
		unsigned int inputmode;
} Shortcut;


typedef struct {
		KeySym k;
		unsigned int mask;
		char *s;
		/* three-valued logic variables: 0 indifferent, 1 on, -1 off */
		signed char appkey;    /* application keypad */
		signed char appcursor; /* application cursor */
} Key;

/* X modifiers */
#define XK_ANY_MOD UINT_MAX
#define XK_NO_MOD 0
#define XK_SWITCH_MOD (1 << 13)

/* XEMBED messages */
#define XEMBED_FOCUS_IN 4
#define XEMBED_FOCUS_OUT 5


int evcol(XEvent *);
int evrow(XEvent *);


int match(unsigned int mask, unsigned int state);
char *kmap(KeySym k, unsigned int state);

// the main event loop
void run();

// callbacks
void numlock(const Arg *);

// mouse events handling
typedef struct {
		unsigned int mod;
		unsigned int button;
		void (*func)(const Arg *);
		const Arg arg;
		unsigned int release;
		int altscrn; /* 0: don't care,  -1: not alt screen,  1: alt screen */
} MouseShortcut;



// event handling
void kpress(XEvent *ev);

int mouseaction(XEvent *, unsigned int);
void brelease(XEvent *);
void bpress(XEvent *);
void bmotion(XEvent *);
void mousereport(XEvent *);


// xwindow related
void expose(XEvent *);
void visibility(XEvent *);
void unmap(XEvent *);
void cmessage(XEvent *);
void resize(XEvent *);
void focus(XEvent *);
void propnotify(XEvent *);



// callbacks . Used in config.h
void ttysend(const Arg *);
void dummy( const Arg *a);


#endif

