@class NSString, SBWorkspaceKeyboardFocusController, BSServiceConnectionListener, NSMutableDictionary, NSMutableSet, NSObject, FBServiceClientAuthenticator, SBKeyboardSuppressionManager;
@protocol OS_dispatch_queue, BSInvalidatable;

@interface SBUniversalControlServer : NSObject <SBSUniversalControlClientToServerInterface, BSServiceConnectionListenerDelegate, BSDescriptionStreamable> {
    BSServiceConnectionListener *_connectionListener;
    FBServiceClientAuthenticator *_clientAuthenticator;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_connections;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_lock_keyboardDisabledReasonsByPID;
    NSMutableDictionary *_lock_screenEdgesOwnedByPID;
    id<BSInvalidatable> _lock_keyboardFocusAssertion;
    id<BSInvalidatable> _lock_keyboardSuppressionAssertion;
    unsigned long long _lock_externallyControlledScreenEdgeMask;
    SBWorkspaceKeyboardFocusController *_keyboardFocusController;
    SBKeyboardSuppressionManager *_keyboardSuppressionManager;
}

@property (nonatomic) unsigned long long externalProcessActiveOnScreenEdges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_queue_removeConnection:(id)a0;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (void)_queue_addConnection:(id)a0;
- (oneway void)setKeyboardFocusDisabled:(id)a0 reason:(id)a1;
- (oneway void)setScreenEdgesOwned:(id)a0 reason:(id)a1;
- (void)_lock_reevaluateKeyboardFocusDisablement;
- (void)_lock_reevaluateScreenEdgeOwnership;
- (id)initWithKeyboardFocusController:(id)a0 keyboardSuppressionManager:(id)a1;

@end
