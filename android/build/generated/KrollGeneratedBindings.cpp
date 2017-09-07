/* C++ code produced by gperf version 3.1 */
/* Command-line: gperf -L C++ -E -t /home/miga/dev/ti.calendar/android/build/generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/home/miga/dev/ti.calendar/android/build/generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "ti.calendar.ExampleProxy.h"
#include "ti.calendar.TiCalendarModule.h"


namespace titanium {
namespace bindings {
#line 16 "/home/miga/dev/ti.calendar/android/build/generated/KrollGeneratedBindings.gperf"
struct BindEntry;
/* maximum key range = 5, duplicates = 0 */

class TiCalendarBindings
{
private:
  static inline unsigned int hash (const char *str, size_t len);
public:
  static struct BindEntry *lookupGeneratedInit (const char *str, size_t len);
};

inline /*ARGSUSED*/
unsigned int
TiCalendarBindings::hash (const char *str, size_t len)
{
  return len;
}

struct BindEntry *
TiCalendarBindings::lookupGeneratedInit (const char *str, size_t len)
{
  enum
    {
      TOTAL_KEYWORDS = 2,
      MIN_WORD_LENGTH = 24,
      MAX_WORD_LENGTH = 28,
      MIN_HASH_VALUE = 24,
      MAX_HASH_VALUE = 28
    };

  static struct BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 19 "/home/miga/dev/ti.calendar/android/build/generated/KrollGeneratedBindings.gperf"
      {"ti.calendar.ExampleProxy",::ti::calendar::ticalendar::ExampleProxy::bindProxy,::ti::calendar::ticalendar::ExampleProxy::dispose},
      {""}, {""}, {""},
#line 18 "/home/miga/dev/ti.calendar/android/build/generated/KrollGeneratedBindings.gperf"
      {"ti.calendar.TiCalendarModule",::ti::calendar::TiCalendarModule::bindProxy,::ti::calendar::TiCalendarModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 20 "/home/miga/dev/ti.calendar/android/build/generated/KrollGeneratedBindings.gperf"

}
}
