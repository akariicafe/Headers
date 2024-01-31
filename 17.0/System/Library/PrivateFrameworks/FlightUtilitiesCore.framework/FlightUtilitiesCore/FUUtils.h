@interface FUUtils : NSObject

+ (id)airportFromSFAirport:(id)a0;
+ (id)convertFlightModel:(id)a0 withError:(id *)a1;
+ (void)enumerateFlightCodesInString:(id)a0 usingBlock:(id /* block */)a1;
+ (void)extractTimeForFlightStep:(id)a0 fromLeg:(id)a1;
+ (void)setTestDate:(id)a0;
+ (id)testDate;

@end
