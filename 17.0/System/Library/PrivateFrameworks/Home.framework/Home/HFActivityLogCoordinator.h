@class HMHome, HFActivityLogCoordinator_Swift;
@protocol HFActivityLogCoordinatorDelegate;

@interface HFActivityLogCoordinator : NSObject

@property (retain, nonatomic) HFActivityLogCoordinator_Swift *coordinator;
@property (nonatomic) long long eventCount;
@property (readonly, nonatomic) HMHome *home;
@property (weak, nonatomic) id<HFActivityLogCoordinatorDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (void)prefetchEventsSinceDate:(id)a0;

@end
