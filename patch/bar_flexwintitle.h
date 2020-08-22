static int width_flexwintitle(Bar *bar, BarWidthArg *a);
static int draw_flexwintitle(Bar *bar, BarDrawArg *a);
static int click_flexwintitle(Bar *bar, Arg *arg, BarClickArg *a);

static void flextitledraw(Monitor *m, Client *c, int unused, int x, int w, int groupactive, Arg *arg);
static void flextitleclick(Monitor *m, Client *c, int passx, int x, int w, int unused, Arg *arg);
static int flextitlecalculate(Monitor *m, int offx, int w, int passx, void(*tabfn)(Monitor *, Client *, int, int, int, int, Arg *arg), Arg *arg);
static int getschemefor(Monitor *m, int group, int activegroup);
static int getselschemefor(int scheme);
static Client *flextitledrawarea(Monitor *m, Client *c, int x, int r, int w, int max_clients, int tabscheme, int draw_tiled, int draw_hidden, int draw_floating, int passx, void(*tabfn)(Monitor *, Client *, int, int, int, int, Arg *arg), Arg *arg);