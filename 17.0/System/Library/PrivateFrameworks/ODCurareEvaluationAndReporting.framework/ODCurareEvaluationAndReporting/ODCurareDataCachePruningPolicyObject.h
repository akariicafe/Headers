@interface ODCurareDataCachePruningPolicyObject : NSObject

@property (nonatomic) long long maximumNumberOfDays;
@property (nonatomic) long long maximumNumberOfEvents;

- (id)initWithMaximumNumberOfDays:(int)a0 maximumNumberOfEvents:(int)a1;

@end
