@class NSString, AFMyriadCoordinator, SVXMyriadWiFiAssertion, NSObject;
@protocol SVXMyriadResponseDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface SVXMyriadHostDevice : NSObject <AFMyriadDelegate, SVXMyriadRequestDelegate> {
    AFMyriadCoordinator *_myriadCoordinator;
    id<SVXMyriadResponseDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    struct { id /* block */ completion; NSObject<OS_dispatch_source> *timer; } _emergencyContext;
    SVXMyriadWiFiAssertion *_wifiAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupEnabled:(BOOL)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (void)shouldAbortAnotherDeviceBetter:(id)a0;
- (void)shouldContinue:(id)a0;
- (void)willEndSession:(id)a0;
- (void)myriadCoordinatorDidHandleEmergency:(id)a0;
- (void)shouldUnduck:(id)a0;
- (void)willStartWithSession:(id)a0;
- (void)_initializeMyriadEmergencyTimer;
- (void)_acquireWiFiAssertion;
- (void)_armEmergencyDispatchTimerFor:(double)a0 toExecute:(id /* block */)a1;
- (void)_disarmMyriadEmergencyTimer;
- (void)_releaseWiFiAssertion;
- (void)_signalEmergencyCallHandledStatus:(BOOL)a0;
- (void)_startAdvertisingEmergency:(id /* block */)a0;
- (void)preheatMyriad;
- (void)resetMyriad;
- (void)startAdvertising:(unsigned long long)a0 withMyriadGoodnessScoreContext:(id)a1 withMyriadAudioContext:(id)a2 completion:(id /* block */)a3;

@end
