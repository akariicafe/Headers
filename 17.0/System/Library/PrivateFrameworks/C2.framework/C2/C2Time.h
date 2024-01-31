@interface C2Time : NSObject

+ (unsigned long long)convertTimeIntervalToServerTime:(double)a0;
+ (double)converServerTimeToTimeInterval:(unsigned long long)a0;

@end
