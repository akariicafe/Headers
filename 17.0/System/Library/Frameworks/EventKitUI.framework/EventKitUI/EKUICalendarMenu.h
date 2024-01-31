@interface EKUICalendarMenu : NSObject

+ (id)placeholderMenuForCalendar:(id)a0 backgroundColor:(id)a1;
+ (id)_calendarMenuWithCalendars:(id)a0 eventStore:(id)a1 backgroundColor:(id)a2 setupActionHandler:(id /* block */)a3 selectionHandler:(id /* block */)a4 subtitle:(id)a5;
+ (id)calendarCircleImageForColor:(id)a0;
+ (id)calendarMenuWithCalendars:(id)a0 eventStore:(id)a1 backgroundColor:(id)a2 setupActionHandler:(id /* block */)a3 selectionHandler:(id /* block */)a4;
+ (id)calendarSubmenuWithSubtitle:(id)a0 calendars:(id)a1 eventStore:(id)a2 backgroundColor:(id)a3 setupActionHandler:(id /* block */)a4 selectionHandler:(id /* block */)a5;

@end
