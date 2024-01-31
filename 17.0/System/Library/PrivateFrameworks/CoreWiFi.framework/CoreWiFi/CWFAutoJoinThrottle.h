@class NSDictionary;

@interface CWFAutoJoinThrottle : NSObject <NSCopying>

@property (nonatomic) long long trigger;
@property (retain, nonatomic) NSDictionary *intervals;
@property (retain, nonatomic) NSDictionary *intervalsBasedOnTriggerTimestamp;

+ (id)autoJoinThrottleWithTrigger:(long long)a0 intervals:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
