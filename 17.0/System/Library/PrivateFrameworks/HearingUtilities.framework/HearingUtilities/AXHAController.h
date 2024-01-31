@class HCXPCMessage, NSString, NSDictionary, AXAudioHalController, AXDispatchTimer, NSObject;
@protocol OS_os_transaction;

@interface AXHAController : NSObject <HUNearbyHearingAidControllerDelegate, AXHALiveListenDelegate> {
    BOOL _isListening;
    AXDispatchTimer *_liveListenLevelsTimer;
}

@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (retain, nonatomic) NSString *pairedDeviceUUID;
@property (retain, nonatomic) AXAudioHalController *audioHalController;
@property (retain, nonatomic) NSDictionary *availableDevicesDescription;
@property (retain, nonatomic) NSDictionary *availableControllersPayload;
@property (retain, nonatomic) HCXPCMessage *liveListenMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;
+ (id)descriptionForHandoffReason:(long long)a0;

- (id)init;
- (void)dealloc;
- (void)willSwitchUser;
- (void).cxx_destruct;
- (void)cleanUp;
- (id)_liveListenPayloadWithState:(long long)a0 audioLevel:(float)a1;
- (id)_registerForLiveListenUpdates_boolValue:(id)a0;
- (id)_registerForLiveListenUpdates_enumValue:(id)a0;
- (id)_toggleLiveListen_boolValue:(id)a0;
- (id)_toggleLiveListen_enumValue:(id)a0;
- (void)availableRemoteControllersDidChange;
- (id)connectToControllerWithID:(id)a0;
- (void)connectToPairedDevice;
- (id)currentDeviceController;
- (id)disconnectAndForceClient:(id)a0;
- (BOOL)hearingAidsIsLEA2:(id)a0;
- (BOOL)hearingAidsPaired;
- (id)liveListenController;
- (void)liveListenControllerStateDidChange;
- (id)readAvailableControllers:(id)a0;
- (id)readAvailableDevices:(id)a0;
- (id)readDeviceProperty:(id)a0;
- (void)readLiveListenLevels;
- (id)registerForAvailableDevicesUpdates:(id)a0;
- (id)registerForControlMessageUpdates:(id)a0;
- (id)registerForDeviceUpdates:(id)a0;
- (id)registerForLiveListenUpdates:(id)a0;
- (void)sendAvailabilityDidChangeNotification;
- (void)sendUpdatesForProperties:(id)a0 excludingClient:(id)a1;
- (void)setListenForAvailableDeviceUpdates:(BOOL)a0;
- (void)setPairedHearingAidID:(id)a0;
- (id)toggleLiveListen:(id)a0;
- (void)transitionToPeer;
- (void)updateNearbyDeviceAvailabilityWithForce:(BOOL)a0;
- (id)writeDeviceProperty:(id)a0;

@end
