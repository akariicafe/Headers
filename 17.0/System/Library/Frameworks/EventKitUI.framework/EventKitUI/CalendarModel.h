@interface CalendarModel : CUIKCalendarModel

+ (id)calendarModelWithEventStore:(id)a0;
+ (id)new;
+ (id)calendarModelWithDataPath:(id)a0;

- (id)init;
- (id)occurrencesForDay:(id)a0 waitForLoad:(BOOL)a1;
- (id)occurrencesForStartDay:(id)a0 endDay:(id)a1 preSorted:(BOOL)a2 waitForLoad:(BOOL)a3;
- (id)initWithDataPath:(id)a0;
- (id)cachedSpecialDayDataForSection:(long long)a0;
- (id)persistedSceneState;
- (id)initWithEventStore:(id)a0;
- (id)occurrencesForStartDate:(id)a0 endDate:(id)a1 preSorted:(BOOL)a2 waitForLoad:(BOOL)a3;

@end
