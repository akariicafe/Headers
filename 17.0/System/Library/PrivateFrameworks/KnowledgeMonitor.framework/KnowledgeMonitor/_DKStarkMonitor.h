@class NSString, CARSessionStatus;

@interface _DKStarkMonitor : _DKMonitor <CARSessionObserving>

@property (retain, nonatomic) CARSessionStatus *sessionStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventStream;
+ (id)entitlements;
+ (id)_eventWithState:(BOOL)a0;

- (void)dealloc;
- (void)start;
- (void)updateCurrentState;
- (void)sessionDidConnect:(id)a0;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void).cxx_destruct;
- (void)sessionDidDisconnect:(id)a0;
- (void)deactivate;

@end
