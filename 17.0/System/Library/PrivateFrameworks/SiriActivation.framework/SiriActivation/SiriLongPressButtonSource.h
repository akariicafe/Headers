@class SiriLongPressButtonConfiguration, SiriLongPressButtonConfigurationUpdateManager, NSString, SiriLongPressButtonContext, NSMutableArray;
@protocol SiriLongPressButtonSourceDelegate;

@interface SiriLongPressButtonSource : SiriActivationSource <SiriLongPressButtonConfigurationUpdateDelegate, SiriButtonSource>

@property (nonatomic) long long buttonIdentifier;
@property (retain, nonatomic) NSMutableArray *lock_activityAssertions;
@property (retain, nonatomic) SiriLongPressButtonContext *context;
@property (copy, nonatomic) id /* block */ currentTimeGenerator;
@property (copy, nonatomic) SiriLongPressButtonConfiguration *configuration;
@property (retain, nonatomic) SiriLongPressButtonConfigurationUpdateManager *updateManager;
@property (weak, nonatomic) id<SiriLongPressButtonSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)longPressButtonForIdentifier:(long long)a0;

- (id)init;
- (id)speechInteractionActivityWithTimestamp:(double)a0;
- (id)prepareForActivationWithTimestamp:(double)a0;
- (void)requestConfigurationUpdatesBasedOnDeviceSettings;
- (void)didRecognizeLongPressInteraction:(id)a0;
- (double)longPressInterval;
- (void)stopConfigurationUpdates;
- (double)_timestampForSpeechInteractionActivityWithTimestamp:(double)a0;
- (long long)longPressBehavior;
- (void)configureConnection;
- (void).cxx_destruct;
- (id)prepareForActivation;
- (id)_deviceIdentifier;
- (id)_initWithButtonIdentifier:(long long)a0;
- (void)didRecognizeButtonSinglePressUp;
- (BOOL)_shouldReplaceSpeechInteractionActivityTimestampWithPrewarmTimestamp;
- (void)didRecognizeLongPress;
- (BOOL)_sourceSupportsAutomaticConfigurationUpdates;
- (void)configurationUpdateManager:(id)a0 configurationDidUpdateForLongPressSource:(id)a1;

@end
