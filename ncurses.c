#include <ncurses.h>

int main()
{
	initscr();
	printw("Yo, what up.");
	refresh();
	getch();
	endwin();

	return 0;
}
