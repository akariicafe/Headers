@class MRUListeningModeController, NSString, MRUSpatialAudioController, MRUConversationAwarenessController, NSHashTable, MRUSystemVolumeController, MRUSystemOutputDeviceRouteController;

@interface MRUAudioModuleController : NSObject <MRUSystemOutputDeviceRouteControllerObserver, MRUConversationAwarenessControllerDelegate, MRUListeningModeControllerDelegate, MRUSpatialAudioControllerDelegate, MRUSystemVolumeControllerDelegate>

@property (retain, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) MRUSystemOutputDeviceRouteController *outputDeviceRouteController;
@property (readonly, nonatomic) MRUConversationAwarenessController *conversationAwarenessController;
@property (readonly, nonatomic) MRUListeningModeController *listeningModeController;
@property (readonly, nonatomic) MRUSpatialAudioController *spatialAudioController;
@property (readonly, nonatomic) MRUSystemVolumeController *volumeController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)removeObserver:(id)a0;
- (id)initWithOutputDeviceRouteController:(id)a0;
- (void).cxx_destruct;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDeviceProperties:(id)a0;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDevices:(id)a0;
- (void)addObserver:(id)a0;
- (void)listeningModeController:(id)a0 didChangeAvailablePrimaryListeningMode:(id)a1;
- (void)conversationAwarenessController:(id)a0 didChangeConversationAwarenessEnabled:(BOOL)a1;
- (void)conversationAwarenessController:(id)a0 didChangeConversationAwarenessSupported:(BOOL)a1;
- (void)listeningModeController:(id)a0 didChangeAvailableSecondaryListeningModes:(id)a1;
- (void)listeningModeController:(id)a0 didChangePrimaryListeningMode:(id)a1;
- (void)listeningModeController:(id)a0 didChangeSecondaryListeningMode:(id)a1;
- (void)spatialAudioController:(id)a0 didChangeAvailableSpatialModes:(id)a1;
- (void)spatialAudioController:(id)a0 didChangeNowPlayingInfo:(id)a1;
- (void)spatialAudioController:(id)a0 didChangeSelectedSpatialMode:(id)a1;
- (void)systemVolumeController:(id)a0 didChangeVolumeControlCapabilities:(unsigned int)a1 effectiveVolumeValue:(float)a2 forType:(long long)a3;

@end
