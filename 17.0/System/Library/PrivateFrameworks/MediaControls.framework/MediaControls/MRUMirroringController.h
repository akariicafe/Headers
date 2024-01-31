@class AVOutputDevice, NSArray, NSMutableSet, MRUMirroringDiscoverySessionController, MRUOutputContextController, NSString;
@protocol MRUMirroringControllerDelegate;

@interface MRUMirroringController : NSObject <MRUOutputContextControllerDelegate, MRUMirroringDiscoverySessionControllerDelegate>

@property (retain, nonatomic) MRUOutputContextController *outputContextController;
@property (retain, nonatomic) MRUMirroringDiscoverySessionController *outputDeviceDiscoverySessionController;
@property (retain, nonatomic) MRUOutputContextController *audioContextController;
@property (retain, nonatomic) MRUMirroringDiscoverySessionController *audioDiscoverySessionController;
@property (retain, nonatomic) NSMutableSet *busyIdentifiers;
@property (nonatomic) BOOL tetheredDisplayPortModeEnabled;
@property (weak, nonatomic) id<MRUMirroringControllerDelegate> delegate;
@property (readonly, nonatomic) AVOutputDevice *selectedOutputDevice;
@property (readonly, nonatomic) NSArray *availableOutputDevices;
@property (readonly, nonatomic) AVOutputDevice *selectedAudioOutputDevice;
@property (readonly, nonatomic) NSArray *availableAudioOutputDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)symbolNameForOutputDevice:(id)a0;
+ (id)mirroringControllerWithAudioRoutingSupport;

- (void)mirroringDiscoverySessionController:(id)a0 didChangeAvailableOutputDevices:(id)a1;
- (id)init;
- (void)updateAvailableOutputDevices;
- (id)outputDeviceForID:(id)a0;
- (void)updateSelectedAudioOutputDevice;
- (void)stopDetailedDiscovery;
- (void)updateAvailableAudioOutputDevices;
- (void)removeBusyIdentifier:(id)a0;
- (void)startMirroringToOutputDevice:(id)a0 completion:(id /* block */)a1;
- (void)outputContextController:(id)a0 didChangeOutputDevice:(id)a1;
- (void)selectAudioOutputDevice:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)pairingHandlerNotification:(id)a0;
- (void)mirrorToOutputDevice:(id)a0 completion:(id /* block */)a1;
- (void)updateSelectedOutputDevice;
- (void)addBusyIdentifier:(id)a0;
- (void)startDetailedDiscovery;
- (void)stopMirroringWithCompletion:(id /* block */)a0;

@end
