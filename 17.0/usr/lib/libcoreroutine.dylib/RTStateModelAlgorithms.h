@interface RTStateModelAlgorithms : NSObject

+ (id)bucketizeDates:(id)a0 bucketInterval:(double)a1 latestDate:(id)a2;
+ (id)adjustedDate:(id)a0 betweenMinDate:(id)a1 maxDate:(id)a2 strideDays:(unsigned long long)a3 outDeltaDays:(long long *)a4;
+ (double)timeByAddingUnit:(unsigned long long)a0 value:(long long)a1 toTime:(double)a2;
+ (id)adjustedDateInterval:(id)a0 betweenMinDate:(id)a1 maxDate:(id)a2 strideDays:(unsigned long long)a3;
+ (id)adjustedDate:(id)a0 betweenMinDate:(id)a1 maxDate:(id)a2 strideDays:(unsigned long long)a3;

@end
