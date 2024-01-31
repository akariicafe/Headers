@interface _DKNavigationMonitor : _DKMonitor

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL navigating;
@property (nonatomic) int startedToken;
@property (nonatomic) int stoppedToken;

+ (id)eventStream;
+ (id)entitlements;
+ (void)setIsNavigating:(BOOL)a0;

- (id)loadState;
- (void)saveState;
- (void)dealloc;
- (void)setNavigationStatus:(BOOL)a0;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void)deactivate;

@end
