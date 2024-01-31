@class _UIImpactFeedbackGeneratorConfiguration;

@interface UIImpactFeedbackGenerator : UIFeedbackGenerator {
    long long _style;
}

@property (readonly, nonatomic, getter=_impactConfiguration) _UIImpactFeedbackGeneratorConfiguration *impactConfiguration;

+ (Class)_configurationClass;

- (void)impactOccurredWithIntensity:(double)a0;
- (id)initWithStyle:(long long)a0;
- (id)_ui_descriptionBuilder;
- (void)impactOccurred;
- (id)initWithStyle:(long long)a0 coordinateSpace:(id)a1;
- (void)_impactOccurredWithIntensity:(double)a0;
- (id)_stats_key;
- (id)_styleString;

@end
