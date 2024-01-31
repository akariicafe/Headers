@interface CNDateHelper : NSObject

+ (id)gregorianCalendar;
+ (id)dateWithYear:(long long)a0 month:(long long)a1 day:(long long)a2 hour:(long long)a3 minute:(long long)a4 second:(long long)a5 timeZone:(id)a6;
+ (id)gregorianDateComponentsFromDateComponents:(id)a0;
+ (BOOL)isGregorianDerivedCalendar:(id)a0;
+ (BOOL)isGregorianDerivedCalendarIdentifier:(id)a0;
+ (id)componentsForJanuary1WithYear:(long long)a0;
+ (id)componentsFromDate:(id)a0;
+ (long long)currentGregorianYearInGMT;
+ (id)dateComponentsFromDateComponents:(id)a0 preservingUnits:(unsigned long long)a1;
+ (id)dateComponentsInCalendar:(id)a0 fromGregorianDateComponents:(id)a1;
+ (id)dateComponentsInGregorianYearlessYearForYearlessDateComponents:(id)a0 timeZone:(id)a1;
+ (id)dateWithYear:(long long)a0 month:(long long)a1 day:(long long)a2;
+ (id)gregorianCalendarInGMT;
+ (long long)gregorianYearFromDate:(id)a0;
+ (long long)gregorianYearInGMTFromDate:(id)a0;
+ (BOOL)isComponentsEmpty:(id)a0;

@end
