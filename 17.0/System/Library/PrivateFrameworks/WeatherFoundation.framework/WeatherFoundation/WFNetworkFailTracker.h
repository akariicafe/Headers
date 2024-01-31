@interface WFNetworkFailTracker : NSObject

@property (readonly, nonatomic) int numConsecutiveFails;
@property (readonly, nonatomic) double lastFailTimeInSeconds;

- (BOOL)lastFailTimeExpiredForSettings:(id)a0;
- (void)incrementFailCount;

@end
