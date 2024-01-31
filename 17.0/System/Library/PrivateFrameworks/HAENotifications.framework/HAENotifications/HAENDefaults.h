@class NSUserDefaults, NSMutableDictionary;

@interface HAENDefaults : NSObject {
    NSUserDefaults *_userDefaults;
    NSMutableDictionary *_domainSettings;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _EUVolumeLimitFlag;
    BOOL _SKVolumeLimitFlag;
}

+ (id)sharedInstance;
+ (BOOL)isRunningCITests;
+ (BOOL)HAENSupportedForCurrentDeviceClass;
+ (BOOL)isCurrentProcessMediaserverd;

- (double)volumeReductionDelta;
- (double)getLiveMonitoringThreshold;
- (int)getReduceLoudSoundThreshold;
- (id)init;
- (BOOL)isHAENFeatureOptedIn;
- (void)updateAudioAccessoryIsConnectedToHeadphones:(long long)a0 WithKey:(id)a1;
- (void)updateUserVolumeForVolumeLimit;
- (BOOL)softwareVersionEnabled;
- (void)setAudioAccessoryIsConnectedToHeadphones:(long long)a0 withKey:(id)a1 name:(id)a2;
- (void)setUserVolumeWithValue:(float)a0 mininum:(float)a1;
- (void)removeAllAdapters;
- (void)wiredDeviceStatusDidChange;
- (void)_updateSetting:(id)a0 value:(id)a1 notify:(BOOL)a2;
- (void)updateRLSSettings;
- (long long)getAudioAccessoryConnectionInfoWithKey:(id)a0;
- (void)setAudioAccessoryIsConnectedToHeadphones:(long long)a0 withName:(id)a1;
- (BOOL)isHAENFeatureEnabled;
- (BOOL)isReduceLoudSoundEnabled;
- (id)_generateAccessoryKeyWithManufacture:(id)a0 andSerialNumber:(id)a1;
- (BOOL)isCurrentAudioAccessoryHeadphone;
- (BOOL)_shouldRepromptSinceDate:(id)a0;
- (BOOL)isHAEOtherDevicesEnabled;
- (BOOL)isCurrentAudioAccessoryHeadphoneWithKey:(id)a0;
- (BOOL)isHKWriteEnabled;
- (void)updateAudioAccessoryIsConnectedToHeadphones:(long long)a0;
- (double)getLiveMonitorTimeWindowInSeconds;
- (void).cxx_destruct;
- (BOOL)isEUVolumeLimitOn;
- (void)_registerNotification:(id)a0;
- (void)forceReadDefaults;
- (long long)getAudioAccessoryConnectionInfo;
- (BOOL)isSKVolumeLimitOn;
- (BOOL)isConnectedUnknownWiredDeviceHeadphone;
- (BOOL)isHAENFeatureMandatory;

@end
