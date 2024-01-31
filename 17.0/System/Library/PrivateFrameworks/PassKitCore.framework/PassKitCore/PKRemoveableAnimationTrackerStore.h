@class NSMutableArray;

@interface PKRemoveableAnimationTrackerStore : NSObject

@property (copy, nonatomic) NSMutableArray *trackers;

- (void)remove;
- (id)init;
- (void).cxx_destruct;
- (void)preempt;

@end
