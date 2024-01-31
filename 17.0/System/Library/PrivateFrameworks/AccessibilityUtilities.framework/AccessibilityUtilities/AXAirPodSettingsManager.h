@class NSArray, NSPointerArray, AXDispatchTimer, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface AXAirPodSettingsManager : NSObject {
    NSPointerArray *_deviceListeners;
    struct BTSessionImpl { } *_session;
    struct BTLocalDeviceImpl { } *_localDevice;
    struct BTAccessoryManagerImpl { } *_accessoryManager;
    NSObject<OS_dispatch_queue> *_queue;
    AXDispatchTimer *_delayTimer;
    NSMutableSet *_deviceMap;
}

@property (copy, nonatomic) id /* block */ readyBlock;
@property (nonatomic) BOOL ignoreSettingNotifications;
@property (readonly, nonatomic) NSArray *pairedAirPods;
@property (readonly, nonatomic) BOOL isConnectedToBluetoothSystem;

+ (id)sharedInstance;

- (id)accessibilityDomainAccessor;
- (unsigned int)nps_defaultToneVolumeForDeviceAddress:(id)a0;
- (BOOL)nps_volumeSwipeEnabledForDeviceAddress:(id)a0;
- (void)dealloc;
- (float)nps_tapSpeedForDeviceAddress:(id)a0;
- (BOOL)volumeSwipeEnabledForDeviceAddress:(id)a0;
- (void)_accessoryEventForManager:(struct BTAccessoryManagerImpl { } *)a0 event:(int)a1 device:(struct BTDeviceImpl { } *)a2 state:(int)a3;
- (void)start;
- (unsigned int)defaultToneVolumeForDeviceAddress:(id)a0;
- (BOOL)supportsVolumeSwipeForDeviceAddress:(id)a0;
- (void)nps_setVolumeSwipeDuration:(float)a0 forDeviceAddress:(id)a1;
- (BOOL)nps_noiseCancellationEnabledWithOneUnitForDeviceAddress:(id)a0;
- (float)nps_toneVolumeForDeviceAddress:(id)a0;
- (id)titleForSettings;
- (void)setVolumeSwipeDuration:(float)a0 forDeviceAddress:(id)a1;
- (void)_serviceEventForDevice:(struct BTDeviceImpl { } *)a0 serviceMask:(unsigned int)a1 eventType:(int)a2 specificEvent:(unsigned int)a3 result:(int)a4;
- (void)_beginDetach;
- (void)nps_setVolumeSwipeEnabled:(BOOL)a0 forDeviceAddress:(id)a1;
- (void)nps_setNoiseCancellationEnabledWithOneUnit:(BOOL)a0 forDeviceAddress:(id)a1;
- (BOOL)isAirPodProduct:(id)a0;
- (void)_applySettingsForAddress:(id)a0;
- (BOOL)isBeatsProduct:(id)a0;
- (BOOL)supportsTapSpeedForDeviceAddress:(id)a0;
- (float)volumeSwipeDurationForDeviceAddress:(id)a0;
- (id)_productIdentifierForBTDevice:(id)a0;
- (void)nps_setToneVolume:(float)a0 forDeviceAddress:(id)a1;
- (float)holdDurationForDeviceAddress:(id)a0;
- (void)setToneVolume:(unsigned int)a0 forDeviceAddress:(id)a1;
- (void)_didDisconnect;
- (void)_sessionEventForSession:(struct BTSessionImpl { } *)a0 event:(int)a1 result:(int)a2;
- (float)tapSpeedForDeviceAddress:(id)a0;
- (void)_applySettings;
- (void)nps_setHoldDuration:(float)a0 forDeviceAddress:(id)a1;
- (BOOL)supportsNoiseCancellationEnabledForDeviceAddress:(id)a0;
- (void)_probeAccessories;
- (void)nps_setTapSpeed:(float)a0 forDeviceAddress:(id)a1;
- (void).cxx_destruct;
- (id)disambiguationString;
- (float)nps_volumeSwipeDurationForDeviceAddress:(id)a0;
- (float)nps_holdDurationForDeviceAddress:(id)a0;
- (id)initSharedInstance;
- (void)_didConnectWithSession:(struct BTSessionImpl { } *)a0;
- (void)_nps_updateAirPodsDictionaryForPreference:(id)a0 deviceAddress:(id)a1 value:(id)a2;
- (void)setVolumeSwipeEnabled:(BOOL)a0 forDeviceAddress:(id)a1;
- (id)_deviceWithDeviceAddress:(id)a0;
- (BOOL)supportsHoldDurationForDeviceAddress:(id)a0;
- (void)_retrieveSettingsForAddress:(id)a0;
- (BOOL)supportsToneVolumeForDeviceAddress:(id)a0;
- (void)setNoiseCancellationEnabledWithOneUnit:(BOOL)a0 forDeviceAddress:(id)a1;
- (BOOL)supportsSpatialAudioForDeviceAddress:(id)a0;
- (BOOL)noiseCancellationEnabledWithOneUnitForDeviceAddress:(id)a0;
- (id)_nps_airPodsDictionaryForPreference:(id)a0;
- (unsigned int)toneVolumeForDeviceAddress:(id)a0;
- (void)_retrieveSettingsFromDevices:(id)a0;
- (void)startWithCallback:(id /* block */)a0;
- (void)setHoldDuration:(float)a0 forDeviceAddress:(id)a1;
- (void)setTapSpeed:(float)a0 forDeviceAddress:(id)a1;

@end
