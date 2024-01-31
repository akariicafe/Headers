@interface STDowntimeOverrideBuilder : NSObject

+ (id)createAutomaticOverrideWithState:(long long)a0 schedule:(id)a1 creationDate:(id)a2 calendar:(id)a3;
+ (id)createFixedDurationOverrideWithInterval:(double)a0 state:(long long)a1 creationDate:(id)a2 calendar:(id)a3;

@end
