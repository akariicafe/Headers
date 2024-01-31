@class NSString, NSMutableDictionary, ITIdleTimerStateServer, NSObject;
@protocol OS_dispatch_queue, ITIdleTimerStateServiceDelegate, BSInvalidatable;

@interface ITIdleTimerStateService : NSObject <ITIdleTimerStateServerDelegate> {
    ITIdleTimerStateServer *_server;
    NSObject<OS_dispatch_queue> *_calloutDispatchQueue;
    NSMutableDictionary *_assertionsByReason;
    NSMutableDictionary *_assertionReasonsByClientID;
    id<BSInvalidatable> _stateCaptureAssertion;
}

@property (weak, nonatomic) id<ITIdleTimerStateServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)clientDidDisconnect:(id)a0;
- (id)initWithDispatchQueue:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;
- (id)initWithDispatchQueue:(id)a0;
- (BOOL)isIdleTimerServiceAvailable;
- (void)_addStateCaptureHandler;
- (BOOL)clientConfiguration:(id)a0 handleIdleEvent:(unsigned long long)a1;
- (id)_identifierForClientProcess:(id)a0;
- (BOOL)addIdleTimerConfiguration:(id)a0 fromProcess:(id)a1 forReason:(id)a2;
- (void)removeIdleTimerConfigurationFromProcess:(id)a0 forReason:(id)a1;

@end
