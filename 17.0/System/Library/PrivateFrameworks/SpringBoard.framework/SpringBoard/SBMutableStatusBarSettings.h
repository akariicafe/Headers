@class NSNumber, NSSet, _UILegibilitySettings;

@interface SBMutableStatusBarSettings : SBStatusBarSettings

@property (retain, nonatomic) NSNumber *alpha;
@property (nonatomic) long long style;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (copy, nonatomic) NSSet *backgroundActivitiesToSuppress;

- (id)init;
- (void)setLegibilitySettings:(id)a0;
- (void)setBackgroundActivitiesToSuppress:(id)a0;
- (void)setAlpha:(id)a0;
- (void)setStyle:(long long)a0;
- (void)applySettings:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
