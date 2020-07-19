//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] =
  {
   // Sigs:
   //  6: cpu
   //  7: date/time
   //  8: diskspace
   //  9: battery
   // 10: memory
   // 11: mpd
   // 12: volume
   // 13: temperature
   // 14: weather
   // 15: brightness

   /*Icon*/ /*Command*/  /*Update Interval*/ /*Update Signal*/
   {"",  "dwmblocks_mpd",                 0,     11},
   {"",  "dwmblocks_disk",              300,      8},
   {"",  "dwmblocks_memory",             30,     10},
   {"",  "dwmblocks_cpu",                10,      6},
   {"",  "dwmblocks_temp",               10,     13},
   {"",  "dwmblocks_backlight",           0,     15},
   {"",  "dwmblocks_battery",            30,      9},
   {"",  "dwmblocks_volume",              0,     12},
/* {"",  "dwmblocks_weather",          1800,     14}, */
   {"",  "dwmblocks_date",               30,      7},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
