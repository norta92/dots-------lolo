/*_______         __                                   .__        
\_   ___ \_____ _/  |_______ ______  __ __  ____  ____ |__| ____  
/    \  \/\__  \\   __\____ \\____ \|  |  \/ ___\/ ___\|  |/    \ 
\     \____/ __ \|  | |  |_> >  |_> >  |  |  \__\  \___|  |   |  \
 \______  (____  /__| |   __/|   __/|____/ \___  >___  >__|___|  /
        \/     \/     |__|   |__|              \/    \/        \/   
* Edited by j5onrf (2025)
* -----------------------------------------------------  
* icons-only-Catppuccin-Mocha Beta
*/

/* Define color variables */
* {
blue1:        #89B4FA;  /* Primary accent color (Mocha's blue) */
blue2:        #313244;  /* Surface background (Mocha's surface0) */
bg:           #1E1E2E;  /* Base background color (Mocha's mantle) */
blue4:        #2E3440;  /* Darker surface variant (not in official palette but matches Mocha tones) */
al:           #00000000;    /* Transparent */
fg:           #88C0D0FF;    /* Light blue for text and icons */
wh:           #FFFFFF;      /* White color */
}

/* General Configuration */
configuration {
    font:                "JetBrainsMono Nerd Font Propo 16";
    font-weight: 600; /* Medium weight for balance */
    show-icons:          true;
    icon-theme:          "Papirus";
    display-drun:        " ";
    drun-display-format: "{name}";
    disable-history:     false;
    hide-scrollbar:      true;
    cycle: false; /* Disable wrapping when scrolling */
}

/* Window (Background and Border) */
window {
    transparency:        "real";
    background-color:    @bg;    /* Window background color */
    text-color:          @fg;    /* Text color */
    border:              0.11em; /* Border thickness (match Waybar) */
    border-color:        @blue1;  /* Border color (secondary background) */
    border-radius:       1em;    /* Rounded corners */
    width:               1880px;
    location:            center;   /* Align with Waybar sidebar */
    x-offset:            0px;   /* Slight horizontal offset */
    y-offset:            0px;    /* Align vertically with screen */
}

/* Input Bar (Search Area) */
inputbar {
    background-color:    @al;
    text-color:          @fg;
    padding:             0.65em 0.5em;  /*  */
    margin:              0.81em 0.81em 0em;  /*  */
    children:            [ prompt, entry ];
    horizontal-align:    0;
}

/* Prompt (Label before Input) */
prompt {
    text-color:          @wh;    /* Accent color for prompt text */
    background-color:    transparent;
    padding:             0.18em 0 0 0; /* Add left padding to move the icon */
    margin-left:         0em;   /* Add some space between the icon and the search box */
}

/* Entry (Search Input) */
entry {
    background-color:    @al;
    text-color:          @wh;    /* White color for text */
    placeholder-color:   @wh;    /* White color for placeholder */
    placeholder:         "Search...";
    padding:             0.2em 0.5em;
    horizontal-align:    0;      /* Align text input to the left */
}

/* Listview (Result Items) */
listview {
    background-color:    @al;    /* Transparent background */
    columns:             10;
    lines:               2;     /* Set the height with # of lines */
    spacing:             0em;  /* Space between items */
    margin:              0.81em 0.81em 0em;  /* */
    layout:              vertical;
}

/* Elements (Items in Listview) */
element {
    background-color:    @blue2;
    text-color:          @wh;    /* White color for element text */
    border-radius:       100em;  /*  */
    padding:             0.4em 0.5em; /*  */
    margin:              0.4em;
    border:              0.12em; /* Border thickness (match Waybar) */
    border-color:       @al;   /* Border color (secondary background) */
}

/* Icons (Optional for Listview Items) */
element-icon {
    background-color:    @al;
    text-color:          inherit;
    size:                128px;    /* Icon size */
}

/* Selected Element */
element selected {
    background-color:    @blue1;
    text-color:          @bg;     /* Contrast text for selection */
    border-color:        @blue1;     /* Accent border color */
}

/* Text for Elements */
element-text {
    background-color:    transparent;
    text-color:          inherit;
    expand:              true;
    horizontal-align:    0;
    vertical-align:      0.5;
    padding-left:        0em;    /*  */
}

/* Main Box (Container for Input and Listview) */
mainbox {
    children:            [ inputbar, listview ];
    spacing:             0em;  /* Reduce spacing between search box and results */
    background-color:    @al;    /* Transparent container */
    margin:              0 0 0.6em 0;
}

