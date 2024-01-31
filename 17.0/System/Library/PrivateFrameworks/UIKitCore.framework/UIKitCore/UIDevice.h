@class NSString, NSUUID;

@interface UIDevice : NSObject {
    long long _numDeviceOrientationObservers;
    float _batteryLevel;
    unsigned long long _remoteTouchSurfaceType;
    BOOL _remoteHasMicrophone;
    struct { unsigned char batteryMonitoringEnabled : 1; unsigned char proximityMonitoringEnabled : 1; unsigned char expectsFaceContactInLandscape : 1; unsigned char orientation : 3; unsigned char batteryState : 2; unsigned char proximityState : 1; unsigned char hasTouchPadOverride : 1; unsigned char hasTouchPad : 1; unsigned char isHardwareKeyboardAvailable : 1; } _deviceFlags;
}

@property (class, readonly, nonatomic) UIDevice *currentDevice;

@property (readonly, nonatomic) NSString *doc_symbolName;
@property (readonly, nonatomic, getter=_feedbackSupportLevel) long long feedbackSupportLevel;
@property (readonly, retain, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) BOOL _supportsPencil;
@property (nonatomic, setter=_setBacklightLevel:) float _backlightLevel;
@property (readonly, nonatomic, getter=_isHardwareKeyboardAvailable) BOOL _hardwareKeyboardAvailable;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *localizedModel;
@property (readonly, nonatomic) NSString *systemName;
@property (readonly, nonatomic) NSString *systemVersion;
@property (readonly, nonatomic) long long orientation;
@property (readonly, nonatomic) NSUUID *identifierForVendor;
@property (readonly, nonatomic, getter=isGeneratingDeviceOrientationNotifications) BOOL generatesDeviceOrientationNotifications;
@property (nonatomic, getter=isBatteryMonitoringEnabled) BOOL batteryMonitoringEnabled;
@property (readonly, nonatomic) long long batteryState;
@property (readonly, nonatomic) float batteryLevel;
@property (nonatomic, getter=isProximityMonitoringEnabled) BOOL proximityMonitoringEnabled;
@property (readonly, nonatomic) BOOL proximityState;
@property (readonly, nonatomic, getter=isMultitaskingSupported) BOOL multitaskingSupported;
@property (readonly, nonatomic) long long userInterfaceIdiom;

+ (BOOL)_hasHomeButton;
+ (BOOL)_isLowEnd;
+ (BOOL)_isWatch;
+ (BOOL)_isWatchCompanion;
+ (long long)currentDeviceOrientationAllowingAmbiguous:(BOOL)a0;
+ (id)modelSpecificLocalizedStringKeyForKey:(id)a0;

- (void)playInputClick;
- (id)init;
- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (void)setOrientation:(long long)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (void)_hardwareKeyboardAvailabilityChanged;
- (id)_deviceInfoForKey:(struct __CFString { } *)a0;
- (void)_playSystemSound:(unsigned int)a0;
- (void)_enableDeviceOrientationEvents:(BOOL)a0;
- (void)_updateSystemSoundActiveStatus:(id)a0;
- (void)_clearGraphicsQualityOverride;
- (long long)_graphicsQuality;
- (BOOL)_hasGraphicsQualityOverride;
- (BOOL)_hasTouchPad;
- (BOOL)_isSystemSoundEnabled;
- (long long)_keyboardGraphicsQuality;
- (void)_loadRemoteDeviceInfoIfNeeded;
- (long long)_nativeScreenGamut;
- (void)_performShimmedRequestIfPossibleForDeviceOrientation:(long long)a0;
- (void)_playInputDeleteSound;
- (void)_playInputSelectSound;
- (long long)_predictionGraphicsQuality;
- (void)_registerForSystemSounds:(id)a0;
- (BOOL)_remoteHasMicrophoneCapability;
- (unsigned long long)_remoteTouchSurfaceType;
- (void)_setActiveUserInterfaceIdiom:(long long)a0;
- (void)_setBatteryLevel:(float)a0;
- (void)_setBatteryState:(long long)a0;
- (void)_setExpectsFaceContactInLandscape:(BOOL)a0;
- (void)_setGraphicsQualityOverride:(long long)a0;
- (void)_setHasTouchPad:(BOOL)a0;
- (void)_setProximityState:(BOOL)a0;
- (float)_softwareDimmingAlpha;
- (BOOL)_supportsDeepColor;
- (BOOL)_supportsForceTouch;
- (id)_tapticEngine;
- (void)_unregisterForSystemSounds:(id)a0;
- (void)beginGeneratingDeviceOrientationNotifications;
- (void)endGeneratingDeviceOrientationNotifications;

@end
