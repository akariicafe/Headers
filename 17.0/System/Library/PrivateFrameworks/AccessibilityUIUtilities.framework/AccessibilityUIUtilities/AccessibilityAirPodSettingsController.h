@class PSSpecifier, BluetoothDevice, UISlider, UIImpactFeedbackGenerator;

@interface AccessibilityAirPodSettingsController : AXUISettingsBaseListController {
    PSSpecifier *_doubleTapGroup;
    PSSpecifier *_holdGroup;
    BluetoothDevice *_btDevice;
    UISlider *_toneVolumeSlider;
    UIImpactFeedbackGenerator *_hapticGenerator;
    BOOL _hapticPlayedValue;
}

@property (retain, nonatomic) BluetoothDevice *bluetoothDevice;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)specifiers;
- (void)setSpecifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)supportsSpatialAudio;
- (void)setNoiseCancellation:(id)a0 specifier:(id)a1;
- (double)toneVolumeValue;
- (id)_btDeviceAddress;
- (void)_updateToneVolumeFooter:(float)a0;
- (void)applyHapticIfNecessary:(id)a0;
- (double)defaultToneVolumeValue;
- (double)displayedMaxValue;
- (double)holdSpeedValue;
- (BOOL)isBeatsProduct;
- (BOOL)isInWatchSettings;
- (void)jumpToAVSettings:(id)a0;
- (id)noiseCancellation:(id)a0;
- (void)setSpatialAudioLock:(id)a0 specifier:(id)a1;
- (void)setToneVolume:(id)a0 specifier:(id)a1;
- (void)setVolumeSwipeEnabled:(id)a0 specifier:(id)a1;
- (id)spatialAudioLock:(id)a0;
- (double)tapSpeedValue;
- (id)toneVolume:(id)a0;
- (double)volumeSwipeDurationValue;
- (id)volumeSwipeEnabled:(id)a0;

@end
