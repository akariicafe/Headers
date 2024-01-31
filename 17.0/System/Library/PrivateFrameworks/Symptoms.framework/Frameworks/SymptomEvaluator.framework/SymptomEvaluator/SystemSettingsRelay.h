@class NSDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SystemSettingsRelay : NSObject <CoreTelephonyShimDelegate> {
    BOOL _cellOutrankFeatureFlagEnabled;
    BOOL _cellOutrankEnabledOverride;
    BOOL _cellSupports5G;
    BOOL _cellSupportsPrivateNetwork;
    struct __CTServerConnection { } *_serverConnection;
}

@property (retain, nonatomic) NSDictionary *autoBugCaptureConfiguration;
@property (nonatomic) BOOL registeredForAutoBugCaptureChangeNotifications;
@property (nonatomic) BOOL autoFeedbackAssistantInitialized;
@property (nonatomic) BOOL smartDataModeEnabled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) BOOL wifiEnabled;
@property (readonly) BOOL airplaneModeSwitchEnabled;
@property (readonly) BOOL cellDataSwitchEnabled;
@property (readonly) BOOL rnfEnabled;
@property (readonly) BOOL noBackhaulEnabled;
@property (readonly) BOOL cellOutrankEnabled;
@property (readonly) BOOL geoIPTrackingFeatureFlagEnabled;
@property (readonly) BOOL autoBugCaptureEnabled;
@property (readonly) BOOL autoFeedbackAssistantEnable;
@property (readonly) BOOL autoBugCaptureAvailable;
@property (readonly) int autoBugCaptureEnhancedBetaFeedbackState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)defaultRelay;

- (void)_setCellOutrankEnabled:(BOOL)a0;
- (id)init;
- (void)_setAirplaneModeSwitchEnabled:(BOOL)a0;
- (void)dealloc;
- (void)smartDataModeChangedToUserEnabled:(BOOL)a0;
- (void)_setNoBackhaulEnabled:(BOOL)a0;
- (void)supports5GChangedTo:(BOOL)a0;
- (void)ctServerConnectionNotification:(struct __CFString { } *)a0 notificationInfo:(struct __CFDictionary { } *)a1;
- (void)rnfSettingChangedToFeatureEnabled:(BOOL)a0 userEnabled:(BOOL)a1;
- (void)_setAutoBugCaptureAvailable:(BOOL)a0;
- (void)_setAutoFeedbackAssistantEnable:(BOOL)a0;
- (void)registerForAutoBugCaptureChangeNotifications;
- (void)setGeoIPTrackingFeatureFlagEnabled:(BOOL)a0;
- (void)_setSmartDataModeEnabled:(BOOL)a0;
- (void)_setAutoBugCaptureEnabled:(BOOL)a0;
- (void)getAutoBugCaptureConfiguration;
- (void)recalculateAndSetCellOutrankEnabled;
- (void).cxx_destruct;
- (void)_setCellDataSwitchEnabled:(BOOL)a0;
- (void)supportsPrivateNetworkChangedTo:(BOOL)a0;
- (void)_setWifiEnabled:(BOOL)a0;
- (void)_setRnfEnabled:(BOOL)a0;

@end
