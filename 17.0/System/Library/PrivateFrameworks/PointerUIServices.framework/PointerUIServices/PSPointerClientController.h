@class NSCountedSet, NSString, NSMutableDictionary, NSMutableArray, NSMutableSet, NSObject, BSServiceConnection;
@protocol OS_dispatch_queue, BSInvalidatable, PSPointerClientControllerDelegate;

@interface PSPointerClientController : NSObject <PSPointerDefaultServiceServerToClientInterface, PSPointerDefaultLaunchingServiceServerToClientInterface, BSInvalidatable> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BSServiceConnection *_nonLaunchingConnection;
    BSServiceConnection *_launchingConnection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSCountedSet *_persistentPointerHideReasons;
    NSCountedSet *_persistentPointerShowReasons;
    NSMutableArray *_serviceKeepAliveAssertions;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _invalidationAndConfigurationLock;
    BOOL _hasActivatedLaunchingConnection;
    BOOL _isConnectionActive;
    id<BSInvalidatable> _systemPointerInteractionContextIDAssertion;
    NSMutableSet *_accessQueue_validPortalSourceCollections;
    NSMutableSet *_accessQueue_validMatchMoveSources;
}

@property (retain, nonatomic) NSMutableDictionary *systemPointerInteractionContextIDs;
@property (weak, nonatomic) id<PSPointerClientControllerDelegate> delegate;
@property (readonly, nonatomic, getter=isClientInteractionEnabled) BOOL clientInteractionEnabled;
@property (readonly, nonatomic) long long clientInteractionState;
@property (readonly, nonatomic) long long pointerVisibilityState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)_connectionQueue_handleLaunchingConnectionInterruption;
- (void)_connectionQueue_handleNonLaunchingConnectionActivation;
- (id)acquireServiceKeepAliveAssertion;
- (void)setActiveHoverRegion:(id)a0 transitionCompletion:(id /* block */)a1;
- (id)_connectionQueue_launchingConnection;
- (void)_createPointerPortalSourceCollectionForDisplay:(id)a0 completion:(id /* block */)a1;
- (id)_accessQueue_acquireServiceKeepAliveAssertion;
- (void)sharedInit;
- (id)persistentlyShowPointerAssertionForReason:(unsigned long long)a0;
- (oneway void)invalidatedPortalSourceCollections:(id)a0 matchMoveSources:(id)a1;
- (void)setSystemCursorInteractionContextID:(unsigned int)a0;
- (void)invalidate;
- (oneway void)clientInteractionStateDidChange:(id)a0;
- (oneway void)adjustedDecelerationTargetPointerPosition:(id)a0 velocity:(id)a1 inContextID:(id)a2 cursorRegionLookupRadius:(id)a3 cursorRegionLookupResolution:(id)a4 lookupConeAngle:(id)a5 completion:(id /* block */)a6;
- (id)setSystemPointerInteractionContextID:(unsigned int)a0 displayUUID:(id)a1;
- (void)invalidatePointerPortalSourceCollection:(id)a0 completion:(id /* block */)a1;
- (void)createPointerPortalSourceCollectionWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)invalidateContentMatchMoveSources:(id)a0 completion:(id /* block */)a1;
- (id)persistentlyHidePointerAssertionForReason:(unsigned long long)a0;
- (void)createPointerPortalSourceCollectionForDisplayUUID:(id)a0 completion:(id /* block */)a1;
- (void)autohidePointerForReason:(unsigned long long)a0;
- (void)createContentMatchMoveSourcesWithCount:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_createContentMatchMoveSourcesForDisplay:(id)a0 count:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_connectionQueue_handleNonLaunchingConnectionInterruption;
- (void)_main_notifyDelegateOfInvalidatedRemoteSourcesSpecificallyThesePortalSourceCollections:(id)a0 matchMoveSources:(id)a1;
- (oneway void)pointerVisibilityStateDidChange:(id)a0;
- (void)createContentMatchMoveSourcesForDisplayUUID:(id)a0 count:(unsigned long long)a1 completion:(id /* block */)a2;

@end
