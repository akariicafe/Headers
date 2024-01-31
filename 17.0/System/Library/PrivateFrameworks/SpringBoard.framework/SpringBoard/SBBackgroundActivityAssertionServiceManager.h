@class NSXPCListener, NSMapTable, STBackgroundActivitiesStatusDomainPublisher, NSMutableSet, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, SBBackgroundActivityAssertionServiceManagerDelegate;

@interface SBBackgroundActivityAssertionServiceManager : NSObject <NSXPCListenerDelegate, SBBackgroundActivityAssertionServer, BSDescriptionProviding> {
    NSMutableArray *_runningUpdateTransactions;
}

@property (retain, nonatomic) NSXPCListener *xpcListener;
@property (retain, nonatomic) NSMapTable *assertionsByIdentifierByClientConnection;
@property (retain, nonatomic) NSMapTable *assertionsByBackgroundActivityIdentifier;
@property (retain, nonatomic) NSMapTable *attributionsByAssertion;
@property (retain, nonatomic) NSMutableArray *coordinatorConnectionsByBackgroundActivity;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (copy, nonatomic) NSMutableSet *backgroundActivityIdentifiers;
@property (copy, nonatomic) NSMutableSet *exclusiveBackgroundActivityIdentifiers;
@property (readonly, nonatomic) STBackgroundActivitiesStatusDomainPublisher *publisher;
@property (weak, nonatomic) id<SBBackgroundActivityAssertionServiceManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)succinctDescriptionBuilder;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (void)activateBackgroundActivityAssertions:(id)a0 reply:(id /* block */)a1;
- (void)deactivateBackgroundActivityAssertionsWithIdentifiers:(id)a0;
- (void)setRegisteredBackgroundActivityIdentifiers:(id)a0 reply:(id /* block */)a1;
- (void)setStatusString:(id)a0 forAssertionWithIdentifier:(id)a1;
- (id)_internalQueue_backgroundActivityIdentifiersAddedByAddingAssertionData:(id)a0;
- (id)_internalQueue_backgroundActivityIdentifiersRemovedByRemovingAssertionData:(id)a0;
- (id)_internalQueue_coordinatorClientForBackgroundActivityIdentifiers:(id)a0;
- (id)_internalQueue_coordinatorClientForConnection:(id)a0;
- (id)_internalQueue_coordinatorClientMatchingBackgroundActivityIdentifier:(id)a0;
- (void)_internalQueue_deactivateBackgroundActivityAssertionsWithIdentifiers:(id)a0 forClientConnection:(id)a1;
- (void)_internalQueue_publishAttributionsForAddingAssertionData:(id)a0;
- (void)_internalQueue_publishAttributionsForRemovingAssertionData:(id)a0;
- (void)_invalidateAssertionsWithIdentifiers:(id)a0 forClientConnection:(id)a1;
- (void)_notifyDelegateAboutStatusStringChange;
- (BOOL)_verifyCoordinatorEntitlementForBackgroundActivityIdentifiers:(id)a0 onConnection:(id)a1;
- (BOOL)handleTapForBackgroundActivityWithIdentifier:(id)a0;
- (void)invalidateBackgroundActivityAssertions:(id)a0;
- (id)statusStringForBackgroundActivityWithIdentifier:(id)a0 activeAttributions:(id)a1;
- (void)unregisterCoordinatorRegistrationForBackgroundActivityIdentifiers:(id)a0;

@end
