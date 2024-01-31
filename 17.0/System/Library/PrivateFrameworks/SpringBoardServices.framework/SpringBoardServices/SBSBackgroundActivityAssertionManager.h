@class NSMapTable, NSXPCConnection, NSMutableDictionary, SBSBackgroundActivityCoordinator, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface SBSBackgroundActivityAssertionManager : NSObject <BSDescriptionProviding, SBSBackgroundActivityAssertionClient>

@property (retain, nonatomic) NSMapTable *assertionsByIdentifier;
@property (retain, nonatomic) NSMutableDictionary *acquisitionHandlerEntriesByIdentifier;
@property (retain, nonatomic) NSXPCConnection *sbXPCConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (weak, nonatomic) SBSBackgroundActivityCoordinator *internalQueue_backgroundActivityCoordinator;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *coordinatorCalloutQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (void)updateStatusStringForAssertion:(id)a0;
- (void)_handleXPCConnectionInvalidation;
- (void)_internalQueue_removeBackgroundActivityAssertionWithIdentifier:(id)a0 invalidate:(BOOL)a1;
- (void)_internalQueue_setupXPCConnectionIfNecessary;
- (void)_internalQueue_updateRegistrationForCoordinator:(id)a0 reply:(id /* block */)a1;
- (void)_reactivateAssertions;
- (void)_registerBackgroundActivityCoordinatorAfterInterruption;
- (void)addBackgroundActivityAssertion:(id)a0 withHandler:(id /* block */)a1 onQueue:(id)a2;
- (void)invalidateBackgroundActivityAssertionsWithIdentifiers:(id)a0;
- (void)removeBackgroundActivityAssertion:(id)a0;
- (void)statusBarTappedWithContext:(id)a0 reply:(id /* block */)a1;
- (void)unregisterCoordinator;
- (void)updateRegistrationForCoordinator:(id)a0 reply:(id /* block */)a1;

@end
