@class NSString, BSCompoundAssertion, BSServiceConnection;

@interface SBSSmartCoverService : NSObject <BSInvalidatable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BSServiceConnection *_lock_connection;
    BSCompoundAssertion *_observerAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (oneway void)observeSmartCoverStateDidChange:(id)a0;
- (id)registerSmartCoverStateObserver:(id)a0;

@end
