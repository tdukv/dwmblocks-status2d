//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] =
  {
   // Sigs:
   //  9: battery
   // 10: colors
   // 11: mpd
   // 12: volume
   // 13: temperature
   // 14: weather
   // 15: brightness

   // Use to change to bg/fg to a pywal color #.
   // {"", "dwmblocks_color fg* bg*", 0, 10},
   // Add 'pkill -x -RTMIN+10 dwmblocks' to wal script to update.

   /*Icon*/ /*Command*/  /*Update Interval*/ /*Update Signal*/
   {"",  "dwmblocks_mpc",                 0,     11},
   {"",  "dwmblocks_color bg4 fg0",       0,     10},
   {"", "free -h|awk '/^Mem/ { print $3\"/\"$2 }'|sed s/i//g",30, 0},

   {"",  "dwmblocks_temp",               10,     13},
   {"",  "dwmblocks_backlight",           0,     15},
   {"",  "dwmblocks_battery",            30,      9},
   {"",  "dwmblocks_volume",              0,     12},
   //{"",  "dwmblocks_weather",          1800,     14},
   {"",  "dwmblocks_date",               30,      0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
