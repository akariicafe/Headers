@interface WebLowPowerModeObserver : NSObject

@property (nonatomic) void *notifier;
@property (readonly, nonatomic) BOOL isLowPowerModeEnabled;

- (void)dealloc;
- (void)_didReceiveLowPowerModeChange;
- (id)initWithNotifier:(void *)a0;

@end
