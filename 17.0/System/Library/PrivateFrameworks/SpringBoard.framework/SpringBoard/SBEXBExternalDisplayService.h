@class NSString, NSMutableDictionary, NSHashTable, SBExternalDisplayDefaults, NSObject, SBSConnectedDisplayInfoFactory;
@protocol _SBExternalDisplayServiceConnectionListening, OS_dispatch_queue;

@interface SBEXBExternalDisplayService : NSObject <_SBExternalDisplayServiceConnectionListenerDelegate> {
    id<_SBExternalDisplayServiceConnectionListening> _serviceConnectionListener;
    SBSConnectedDisplayInfoFactory *_connectedDisplayInfoFactory;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    SBExternalDisplayDefaults *_defaults;
    NSMutableDictionary *_rootToConnectedParticipants;
    NSHashTable *_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)activate;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)_extendedModeDisplayConfigurationForHardwareIdentifier:(id)a0 error:(out id *)a1;
- (void)_notifyOfPropertyChangesForDisplayConfiguration:(id)a0 requestingClient:(id)a1;
- (void)client:(id)a0 getConnectedDisplayInfoWithCompletion:(id /* block */)a1;
- (void)client:(id)a0 setDisplayArrangement:(id)a1 forDisplay:(id)a2;
- (void)client:(id)a0 setDisplayMirroringEnabled:(id)a1 forDisplay:(id)a2;
- (void)client:(id)a0 setDisplayModeSettings:(id)a1 forDisplay:(id)a2 options:(id)a3 completionHandler:(id /* block */)a4;
- (void)didConnectParticipant:(id)a0;
- (void)didUpdateParticipant:(id)a0;
- (id)initWithServiceListenerFactory:(id)a0 connectedDisplayInfoFactory:(id)a1 defaults:(id)a2;
- (void)willDisconnectParticipant:(id)a0;

@end
