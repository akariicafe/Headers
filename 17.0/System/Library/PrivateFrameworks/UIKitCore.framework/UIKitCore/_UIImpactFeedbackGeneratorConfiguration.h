@class _UIFeedback;
@protocol _UIFeedbackDiscretePlayable;

@interface _UIImpactFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration

@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *feedback;
@property (copy, nonatomic) id /* block */ feedbackUpdateBlock;
@property (nonatomic) double minimumInterval;

+ (id)softConfiguration;
+ (id)strongConfiguration;
+ (id)defaultConfiguration;
+ (id)rigidConfiguration;
+ (id)lightConfiguration;

- (id)feedbackKeyPaths;
- (void).cxx_destruct;
- (long long)requiredSupportLevel;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
