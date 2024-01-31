@interface CalendarColors : NSObject

+ (id)grayColor;
+ (void)initialize;
+ (id)localizedColorNameForColorName:(id)a0;
+ (void)_bootstrapColorNameMapping;
+ (void)_rebuildColors;
+ (id)birthdayCalendarColor;
+ (id)colorForName:(id)a0;
+ (id)colorNamesOrderedForAssignment;
+ (int)countOfColor:(id)a0 inArray:(id)a1;
+ (id)defaultCalendarColorNames;
+ (id)facebookCalendarColor;
+ (id)nameOfColor:(id)a0;
+ (id)symbolicColorForNewCalendarWithExistingSymbolicNames:(id)a0;
+ (id)textColorForName:(id)a0;

@end
