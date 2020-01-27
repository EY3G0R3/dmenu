/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=14"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
// igorg: gruvbox scheme
// igorg: TODO: should we read these from ~/.Xresources or always pass from dwm?
	/*                fg         bg       */
	[SchemeNorm] = { "#928374", "#282828" },
// igorg: option 1: invert the gruvbox fg/bg
  //[SchemeSel] = { "#282828", "#928374" },
// igorg: option 2: use cyan background and light foreground
	[SchemeSel] = { "#eeeeee", "#005577" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
