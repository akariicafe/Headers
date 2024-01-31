@class PLCFNotificationOperatorComposition;

@interface PLAccessibilityAgent : PLAgent

@property (readonly) PLCFNotificationOperatorComposition *notificationReduceMotionChanged;
@property (readonly) PLCFNotificationOperatorComposition *notificationBackgroundContrastChanged;
@property (readonly) PLCFNotificationOperatorComposition *notificationVoiceControlChanged;
@property (readonly) PLCFNotificationOperatorComposition *notificationBackTapChanged;
@property (readonly) PLCFNotificationOperatorComposition *notificationSpeakSelectionChanged;
@property (readonly) PLCFNotificationOperatorComposition *notificationSpeakScreenChanged;
@property (readonly) PLCFNotificationOperatorComposition *notificationSoundRecognitionChanged;
@property (readonly) PLCFNotificationOperatorComposition *notificationSystemCaptioningChanged;
@property (readonly) PLCFNotificationOperatorComposition *notificationFacetimeCaptioningChanged;
@property (readonly) PLCFNotificationOperatorComposition *notificationZoomChanged;

+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitions;
+ (void)load;
+ (id)entryEventForwardNameAssistiveTouch;
+ (id)entryEventForwardNameFacetimeCaptioning;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventForwardNameReduceMotion;
+ (id)entryEventForwardNameBackgroundContrast;
+ (id)entryEventForwardNameHandGestures;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardNameBackTap;
+ (id)entryEventForwardNameVoiceControl;
+ (id)entryEventForwardNameSpeakScreen;
+ (id)entryEventForwardNameSystemCaptioning;
+ (id)entryEventForwardNameSpeakSelection;
+ (id)entryEventForwardNameSoundRecognition;

- (void)logEventForwardSystemCaptioning;
- (id)init;
- (void)log;
- (void)initTaskOperatorDependancies;
- (void)initOperatorDependancies;
- (void)logEventForwardBackTap;
- (void)logEventForwardBackgroundContrast;
- (void)logEventForwardZoom;
- (void)logEventForwardVoiceControl;
- (void)logEventForwardReduceMotion;
- (void).cxx_destruct;
- (void)logEventForwardSoundRecognition;
- (void)logEventForwardSpeakSelection;
- (void)logEventForwardSpeakScreen;
- (void)logEventForwardFacetimeCaptioning;

@end
