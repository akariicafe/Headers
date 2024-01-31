@interface GEOHoursTestHelper : NSObject

+ (id)dateWithString:(id)a0;
+ (id)_pdHoursFromHour:(long long)a0 fromMinute:(long long)a1 toHour:(long long)a2 toMinute:(long long)a3 inTimeZone:(id)a4 onDay:(long long)a5 month:(long long)a6 year:(long long)a7 openingThreshold:(double)a8 closingThreshold:(double)a9 shouldGoOverMidnight:(BOOL)a10;
+ (struct GEOPDLocalTimeRange { unsigned int x0; unsigned int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; })_rangeWithFromHour:(long long)a0 fromMinute:(long long)a1 toHour:(long long)a2 toMinute:(long long)a3;
+ (id)testBusinessHoursForMKLocalizedHoursBuilderTest;
+ (id)testBusinessHoursWithPermanentlyClosedHoursTypeForMKLocalizedHoursBuilderTest;
+ (id)testBusinessHoursWithTemporaryClosedHoursTypeForMKLocalizedHoursBuilderTest;
+ (id)testDateForMKLocalizedHoursBuilderTest;
+ (id)testTimeZoneForGEOPlaceDailyHoursTest;
+ (id)testTimeZoneForMKLocalizedHoursBuilderTest;
+ (id)testingDictionaryForIsWeekdayInRange;

@end
