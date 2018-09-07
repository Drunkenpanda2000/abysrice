static const char norm_fg[] = "#24645f";
static const char norm_bg[] = "#f0f5f3";
static const char norm_border[] = "#7f9096";

static const char sel_fg[] = "#24645f";
static const char sel_bg[] = "#6F8C91";
static const char sel_border[] = "#24645f";

static const char urg_fg[] = "#24645f";
static const char urg_bg[] = "#3D7482";
static const char urg_border[] = "#3D7482";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
