@class BKSApplicationStateMonitor;
@protocol SOSProcessObserverDelegate;

@interface SOSProcessObserver : NSObject

@property (readonly, nonatomic) BKSApplicationStateMonitor *applicationMonitor;
@property (nonatomic) BOOL cachedApplicationRunning;
@property (weak, nonatomic) id<SOSProcessObserverDelegate> delegate;

+ (BOOL)isApplicationStateRunning:(unsigned int)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (void)applicationMonitorStateDidChangeForBundleIdentifier:(id)a0;

@end
