@interface __NSPlaceholderTimeZone : NSTimeZone

- (id)retain;
- (long long)secondsFromGMTForDate:(id)a0;
- (id)init;
- (void)dealloc;
- (unsigned long long)retainCount;
- (BOOL)isDaylightSavingTimeForDate:(id)a0;
- (id)abbreviationForDate:(id)a0;
- (id)data;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)a0;
- (id)initWithName:(id)a0 data:(id)a1;
- (id)initWithName:(id)a0;
- (double)daylightSavingTimeOffsetForDate:(id)a0;
- (id)name;
- (oneway void)release;

@end
