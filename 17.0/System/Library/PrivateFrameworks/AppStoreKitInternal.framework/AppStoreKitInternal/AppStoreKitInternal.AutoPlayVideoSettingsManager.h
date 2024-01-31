@interface AppStoreKitInternal.AutoPlayVideoSettingsManager : NSObject <AMSUIMediaContentDelegate> {
    void /* unknown type, empty encoding */ defaultAutoPlayVideoSetting;
    void /* unknown type, empty encoding */ motionAutoPlayVideoSetLastAutoPlayVideoValueKey;
    void /* unknown type, empty encoding */ lastMotionAutoPlayVideoValueKey;
    void /* unknown type, empty encoding */ lowPowerModeSetLastAutoPlayVideoValueKey;
    void /* unknown type, empty encoding */ lastLowPowerModeValueKey;
    void /* unknown type, empty encoding */ autoPlayVideoSettingKey;
    void /* unknown type, empty encoding */ userSetAutoPlayVideoSettingKey;
    void /* unknown type, empty encoding */ lastUserSetAutoPlayVideoValueKey;
    void /* unknown type, empty encoding */ autoPlayUserSetting;
    void /* unknown type, empty encoding */ networkIsConstrained;
    void /* unknown type, empty encoding */ networkInquiry;
    void /* unknown type, empty encoding */ networkObservation;
    void /* unknown type, empty encoding */ settingsChangeNotificationNeeded;
    void /* unknown type, empty encoding */ networkMayUseCellular;
    void /* unknown type, empty encoding */ fullScreenAudioSettingsTimeoutMinutes;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isAutoPlayAllowed;
- (BOOL)isVideoAudioEnabled;
- (void)restoreFullScreenAudioSettings;
- (void)saveFullScreenAudioSettings;
- (void)updateAutoPlayVideoSettings;

@end
