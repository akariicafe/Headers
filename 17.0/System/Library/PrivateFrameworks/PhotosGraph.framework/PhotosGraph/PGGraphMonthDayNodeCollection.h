@class PGGraphPersonNodeCollection, MARelation;

@interface PGGraphMonthDayNodeCollection : PGGraphCalendarUnitNodeCollection

@property (class, readonly) MARelation *dateOfMonthDay;

@property (readonly, nonatomic) PGGraphPersonNodeCollection *birthdayPersonNodes;
@property (readonly, nonatomic) PGGraphPersonNodeCollection *anniversaryPersonNodes;

+ (unsigned long long)calendarUnit;
+ (id)monthDayNodesForLocalDate:(id)a0 inGraph:(id)a1;
+ (id)monthDayNodesForMonth:(long long)a0 day:(long long)a1 inGraph:(id)a2;

@end
