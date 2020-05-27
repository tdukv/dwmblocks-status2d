//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] =
  {
   // Sigs:
   //  9: battery
   // 10: colors
   // 11: mpd
   // 12: volume
   // 13: // build too unstable to invite extra bad luck
   // 14: weather
   // 15: brightness

   // Use to change to bg/fg to a pywal color #.
   // {"", "dwmblocks_color fg* bg*", 0, 10},
   // Add 'pkill -x -RTMIN+10 dwmblocks' to wal script to update.

   /*Icon*/ /*Command*/	/*Update Interval*/ /*Update Signal*/
   {"",  "dwmblocks_color bg3 fg0",       0,     10},
   {"",  "dwmblocks_mpc",                 0,     11},
   {"",  "dwmblocks_color bg4 fg0",       0,     10},
   {"", "free -h|awk '/^Mem/ { print $3\"/\"$2 }'|sed s/i//g",30, 0},
   {"",  "dwmblocks_color bg5 fg0",       0,     10},
   {"", "sed 's/000$/°C /' /sys/class/thermal/thermal_zone?/temp | paste -sd ''", 10, 0},

   {"",  "dwmblocks_color bg6 fg0",       0,     10},
   {"🔆", "xbacklight | cut -d '.' -f1",   0,     15},
   {"",  "dwmblocks_color bg5 fg0",       0,     10},
   {"",  "dwmblocks_battery",            30,      9},
   {"",  "dwmblocks_color bg4 fg0",       0,     10},
   {"",  "dwmblocks_volume",              0,     12},
   {"",  "dwmblocks_color bg3 fg0",       0,     10},
   //{"",  "dwmblocks_weather",          1800,     14},
   //{"",  "dwmblocks_color bg2 fg0",       0,     10},
   {"",  "dwmblocks_date",               30,      0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
