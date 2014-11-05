/* j/5/mule.c
**
** This file is in the public domain.
*/
#include "all.h"

  u3_noun
  u3_cwe_mule(u3_noun cor)
  {
    u3_noun tap;

    if ( c3n == u3_cr_mean(cor, u3_cv_sam, &tap, 0) ) {
      return u3_cm_bail(c3__exit);
    }
    else {
      u3_noun hok = u3_cj_hook(u3k(cor), "mute");

      /* this takes advantage of the fact that mute's result, at the typeless
       * C/Nock level, is identical to what a typed mule would produce,
       * without running the formula twice.
       */
      return u3_cn_slam_on(hok, u3k(tap));
    }
  }