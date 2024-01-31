@class NSString, BSServiceConnection;
@protocol ITIdleTimerStateRequestDelegate;

@interface ITIdleTimerStateClient : NSObject <ITIdleTimerClientInterface, ITIdleTimerStateRequestHandling> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accessLock;
    unsigned long long _access_serviceAvailability;
    BSServiceConnection *_connection;
    id<ITIdleTimerStateRequestDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)_connectionInterrupted;
- (BOOL)isIdleTimerServiceAvailable;
- (void)_access_addIdleTimerConfiguration:(id)a0 forReason:(id)a1 error:(id *)a2;
- (void)_access_removeIdleTimerConfiguration:(id)a0 forReason:(id)a1;
- (void)addIdleTimerConfiguration:(id)a0 forReason:(id)a1 error:(id *)a2;
- (BOOL)handleIdleEvent:(id)a0 usingConfigurationWithIdentifier:(id)a1;
- (void)removeIdleTimerConfiguration:(id)a0 forReason:(id)a1;

@end
