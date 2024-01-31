@class PRPosterGradientHomeScreenAppearance, PRPosterSolidColorHomeScreenAppearance, PRPosterLockPosterHomeScreenAppearance, PRPosterHomePosterHomeScreenAppearance;

@interface PRMutablePosterHomeScreenConfiguration : PRPosterHomeScreenConfiguration

@property (nonatomic) unsigned long long selectedAppearanceType;
@property (copy, nonatomic) PRPosterLockPosterHomeScreenAppearance *lockPosterAppearance;
@property (copy, nonatomic) PRPosterSolidColorHomeScreenAppearance *solidColorAppearance;
@property (copy, nonatomic) PRPosterGradientHomeScreenAppearance *gradientAppearance;
@property (copy, nonatomic) PRPosterHomePosterHomeScreenAppearance *homePosterAppearance;

- (id)initWithSelectedAppearanceType:(unsigned long long)a0 lockPosterAppearance:(id)a1 solidColorAppearance:(id)a2 gradientAppearance:(id)a3 homePosterAppearance:(id)a4;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
