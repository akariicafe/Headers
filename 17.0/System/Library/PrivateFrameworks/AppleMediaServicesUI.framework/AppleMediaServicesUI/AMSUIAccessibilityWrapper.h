@interface AMSUIAccessibilityWrapper : NSObject

@property (class, readonly, nonatomic) BOOL buttonShapesEnabled;
@property (class, readonly, nonatomic) BOOL isAssistiveTouchRunning;
@property (class, readonly, nonatomic) BOOL isBoldTextEnabled;
@property (class, readonly, nonatomic) BOOL isClosedCaptioningEnabled;
@property (class, readonly, nonatomic) BOOL isDarkerSystemColorsEnabled;
@property (class, readonly, nonatomic) BOOL isGrayscaleEnabled;
@property (class, readonly, nonatomic) BOOL isGuidedAccessEnabled;
@property (class, readonly, nonatomic) BOOL isInvertColorsEnabled;
@property (class, readonly, nonatomic) BOOL isMonoAudioEnabled;
@property (class, readonly, nonatomic) BOOL isOnOffSwitchLabelsEnabled;
@property (class, readonly, nonatomic) BOOL isReduceMotionEnabled;
@property (class, readonly, nonatomic) BOOL isReduceTransparencyEnabled;
@property (class, readonly, nonatomic) BOOL isShakeToUndoEnabled;
@property (class, readonly, nonatomic) BOOL isSpeakScreenEnabled;
@property (class, readonly, nonatomic) BOOL isSpeakSelectionEnabled;
@property (class, readonly, nonatomic) BOOL isSwitchControlRunning;
@property (class, readonly, nonatomic) BOOL isVideoAutoplayEnabled;
@property (class, readonly, nonatomic) BOOL isVoiceOverRunning;
@property (class, readonly, nonatomic) BOOL prefersCrossFadeTransitions;
@property (class, readonly, nonatomic) BOOL shouldDifferentiateWithoutColor;

@end
