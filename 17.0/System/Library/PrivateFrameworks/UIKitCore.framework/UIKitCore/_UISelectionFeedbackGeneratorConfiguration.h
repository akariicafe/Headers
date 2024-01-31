@class _UIFeedback;
@protocol _UIFeedbackDiscretePlayable;

@interface _UISelectionFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration

@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *feedback;
@property (nonatomic) double minimumInterval;
@property (nonatomic) double maxSpeed;
@property (nonatomic) double slowAudioVolume;
@property (nonatomic) double fastAudioVolume;
@property (nonatomic) double slowHapticVolume;
@property (nonatomic) double fastHapticVolume;

+ (id)pickerConfiguration;
+ (id)strongConfiguration;
+ (id)defaultConfiguration;
+ (id)lightConfiguration;

- (id)feedbackKeyPaths;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
