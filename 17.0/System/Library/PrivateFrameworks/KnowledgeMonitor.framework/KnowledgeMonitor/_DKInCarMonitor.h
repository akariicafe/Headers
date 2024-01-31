@interface _DKInCarMonitor : _DKMonitor

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL connected;
@property (nonatomic) int connectedToken;
@property (nonatomic) int disconnectedToken;

+ (id)eventStream;
+ (void)setIsConnected:(BOOL)a0;
+ (id)entitlements;

- (id)loadState;
- (void)saveState;
- (void)dealloc;
- (void)start;
- (void)setConnectedStatus:(BOOL)a0;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void)deactivate;

@end
