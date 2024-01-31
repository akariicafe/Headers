@class NSObject, NSString, NSHashTable, SBExternalDisplayDefaults, SBDisplayManager, SBSConnectedDisplayInfoFactory;
@protocol _SBExternalDisplayServiceConnectionListening, OS_dispatch_queue, BSInvalidatable;

@interface SBExternalDisplayService : NSObject <SBDisplayManagerObserver, _SBExternalDisplayServiceConnectionListenerDelegate> {
    id<_SBExternalDisplayServiceConnectionListening> _serviceConnectionListener;
    SBSConnectedDisplayInfoFactory *_connectedDisplayInfoFactory;
    SBDisplayManager *_displayManager;
    SBExternalDisplayDefaults *_defaults;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    id<BSInvalidatable> _displayManagerObserverToken;
    NSHashTable *_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)displayManager:(id)a0 didConnectIdentity:(id)a1 withConfiguration:(id)a2;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)_displayInfoForDisplayIdentity:(id)a0 configuration:(id)a1;
- (id)_extendedModeDisplayConfigurationForHardwareIdentifier:(id)a0 error:(out id *)a1;
- (void)_notifyOfPropertyChangesForDisplayConfiguration:(id)a0 requestingClient:(id)a1;
- (void)client:(id)a0 getConnectedDisplayInfoWithCompletion:(id /* block */)a1;
- (void)client:(id)a0 setDisplayArrangement:(id)a1 forDisplay:(id)a2;
- (void)client:(id)a0 setDisplayMirroringEnabled:(id)a1 forDisplay:(id)a2;
- (void)client:(id)a0 setDisplayModeSettings:(id)a1 forDisplay:(id)a2 options:(id)a3 completionHandler:(id /* block */)a4;
- (void)displayManager:(id)a0 willDisconnectIdentity:(id)a1;
- (id)initWithDisplayManager:(id)a0;
- (id)initWithDisplayManager:(id)a0 serviceListenerFactory:(id)a1 connectedDisplayInfoFactory:(id)a2;
- (id)preferredArrangementOfDisplay:(id)a0 relativeTo:(id)a1;
- (id)preferredArrangementOfExternalDisplay:(id)a0;

@end
