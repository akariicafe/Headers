@class PRPosterGradientHomeScreenAppearance, PRPosterSolidColorHomeScreenAppearance, PRPosterLockPosterHomeScreenAppearance, PRPosterHomePosterHomeScreenAppearance;

@interface PRImmutableHomeScreenConfiguration : PRPosterHomeScreenConfiguration {
    unsigned long long _selectedAppearanceType;
    PRPosterLockPosterHomeScreenAppearance *_lockPosterAppearance;
    PRPosterSolidColorHomeScreenAppearance *_solidColorAppearance;
    PRPosterGradientHomeScreenAppearance *_gradientAppearance;
    PRPosterHomePosterHomeScreenAppearance *_homePosterAppearance;
}

- (unsigned long long)selectedAppearanceType;
- (id)homePosterAppearance;
- (id)initWithSelectedAppearanceType:(unsigned long long)a0 lockPosterAppearance:(id)a1 solidColorAppearance:(id)a2 gradientAppearance:(id)a3 homePosterAppearance:(id)a4;
- (void).cxx_destruct;
- (id)lockPosterAppearance;
- (id)solidColorAppearance;
- (id)gradientAppearance;

@end
