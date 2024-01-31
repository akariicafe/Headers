@interface DTNanoTimestampFormatter : NSNumberFormatter

+ (id)stringForNanoseconds:(unsigned long long)a0;
+ (id)stringForNanoseconds:(unsigned long long)a0 highestResolutionTimeEnabled:(BOOL)a1;

- (id)stringForObjectValue:(id)a0;

@end
