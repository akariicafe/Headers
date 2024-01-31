@interface _DKAssertionsPreventingRestartMonitor : _DKMonitor

@property (nonatomic) int userspaceAssertionsToken;
@property (nonatomic) int preventIdleSleepAssertionsToken;
@property (nonatomic) int systemAssertionsToken;
@property (nonatomic) int restartPreventerAssertionsToken;
@property (nonatomic) BOOL lastPreventingRestartAssertionsStatus;

+ (id)eventStream;
+ (id)entitlements;

- (id)loadState;
- (void)saveState;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (BOOL)areAssertionsPreventingRestart;
- (void)deactivate;

@end
