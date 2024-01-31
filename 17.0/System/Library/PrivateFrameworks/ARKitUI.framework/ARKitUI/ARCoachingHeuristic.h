@interface ARCoachingHeuristic : NSObject

@property (nonatomic) BOOL satisfied;
@property (readonly, nonatomic) long long requirements;

- (void)updateWithFrame:(id)a0 cache:(id)a1;

@end
