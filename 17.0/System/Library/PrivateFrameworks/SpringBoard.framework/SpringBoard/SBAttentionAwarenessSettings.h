@class NSString;

@interface SBAttentionAwarenessSettings : SBUISettings <MCProfileConnectionObserver> {
    BOOL _allowsAttentionAwareAutoLock;
    BOOL _supportsAttentionSensor;
    BOOL _shouldUseAttentionSensor;
    BOOL _isObservingDataSources;
    struct AWNotification_s { } *_attentionAwarenessToken;
}

@property (class, readonly, nonatomic) BOOL attentionSensorSupported;

@property (nonatomic) BOOL shouldUseAttentionSensor;
@property (nonatomic) double sampleInterval;
@property (nonatomic) double dimInterval;
@property (nonatomic) double sleepInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void)dealloc;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;

@end
