@class NSUserDefaults;

@interface VKCInternalSettings : NSObject

@property (class, readonly, nonatomic) NSUserDefaults *defaults;
@property (class, readonly, nonatomic) BOOL isCGImageForMadEnabled;
@property (class, readonly, nonatomic) BOOL debugMenuEnabled;
@property (class, readonly, nonatomic) double extraWindowPointTouchOffset;
@property (class, readonly, nonatomic) double visibleTextAreaButtonThreshold;
@property (class, readonly, nonatomic) BOOL overrideDeviceAvailability;
@property (class, readonly, nonatomic) BOOL addRandomArtificalAnalysisDelay;
@property (class, readonly, nonatomic) double randomDelayStartValue;
@property (class, readonly, nonatomic) double randomDelayEndValue;
@property (class, readonly, nonatomic) BOOL isPerformingAutomatedTest;
@property (class, readonly, nonatomic) BOOL addSubjectCropRectToPasteboard;
@property (class, readonly, nonatomic) BOOL alwaysShowTextSelectionBorders;
@property (class, readonly, nonatomic) double subjectAutomaticAnalysisDelay;
@property (class, readonly, nonatomic) double subjectDragCancellationDelay;
@property (class, readonly, nonatomic) double subjectDragLiftDelay;
@property (class, readonly, nonatomic) BOOL isOpticalFlowForTextEnabled;
@property (class, readonly, nonatomic) double scaleMultiplier;
@property (class, readonly, nonatomic) double sharpMinOpacity;
@property (class, readonly, nonatomic) double sharpMaxThickness;
@property (class, readonly, nonatomic) double sharpBlurRadius;
@property (class, readonly, nonatomic) double blurMinOpacity;
@property (class, readonly, nonatomic) double blurMaxThickness;
@property (class, readonly, nonatomic) double blurBlurRadius;

+ (id)alwaysShowTextSelectionBordersSettingsValue;
+ (id)isCGImageForMadEnabledSettingsValue;
+ (id)settingsValueForKey:(id)a0;
+ (id)defaultsKeyForKey:(id)a0;
+ (id)subjectAutomaticAnalysisDelaySettingsValue;
+ (id)isOpticalFlowForTextEnabledSettingsValue;
+ (BOOL)boolForKey:(id)a0 withDefaultValue:(BOOL)a1;
+ (id)blurMaxThicknessSettingsValue;
+ (id)randomDelayStartValueSettingsValue;
+ (id)subjectDragCancellationDelaySettingsValue;
+ (double)floatForKey:(id)a0 withDefaultValue:(double)a1;
+ (id)scaleMultiplierSettingsValue;
+ (id)sharpBlurRadiusSettingsValue;
+ (id)debugMenuEnabledSettingsValue;
+ (id)randomDelayEndValueSettingsValue;
+ (id)extraWindowPointTouchOffsetSettingsValue;
+ (id)isPerformingAutomatedTestSettingsValue;
+ (id)addRandomArtificalAnalysisDelaySettingsValue;
+ (id)blurBlurRadiusSettingsValue;
+ (id)sharpMinOpacitySettingsValue;
+ (id)visibleTextAreaButtonThresholdSettingsValue;
+ (id)blurMinOpacitySettingsValue;
+ (id)overrideDeviceAvailabilitySettingsValue;
+ (id)addSubjectCropRectToPasteboardSettingsValue;
+ (id)subjectDragLiftDelaySettingsValue;
+ (id)sharpMaxThicknessSettingsValue;

@end
