@interface IAMPresentationPolicy : NSObject

@property (readonly, nonatomic) long long policyGroup;
@property (readonly, nonatomic) double minimumIntervalBetweenPresentations;

+ (long long)presentationPolicyGroupForGlobalPresentationPolicyGroup:(int)a0;

- (id)initWithMinimumIntervalBetweenPresentations:(double)a0 forPresentationPolicyGroup:(long long)a1;

@end
