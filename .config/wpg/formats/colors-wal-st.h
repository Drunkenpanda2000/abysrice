const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#f0f5f3", /* black   */
  [1] = "#3D7482", /* red     */
  [2] = "#6F8C91", /* green   */
  [3] = "#59838A", /* yellow  */
  [4] = "#657D84", /* blue    */
  [5] = "#4F7A84", /* magenta */
  [6] = "#759AA6", /* cyan    */
  [7] = "#b6cfd7", /* white   */

  /* 8 bright colors */
  [8]  = "#7f9096",  /* black   */
  [9]  = "#3D7482",  /* red     */
  [10] = "#6F8C91", /* green   */
  [11] = "#59838A", /* yellow  */
  [12] = "#657D84", /* blue    */
  [13] = "#4F7A84", /* magenta */
  [14] = "#759AA6", /* cyan    */
  [15] = "#24645f", /* white   */

  /* special colors */
  [256] = "#f0f5f3", /* background */
  [257] = "#24645f", /* foreground */
  [258] = "#24645f",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
