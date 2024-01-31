@class PRPosterColor, PRTimeFontConfiguration;

@interface PRImmutableEditingLookProperties : PREditingLookProperties {
    PRTimeFontConfiguration *_timeFontConfiguration;
    PRPosterColor *_titlePosterColor;
}

- (id)timeFontConfiguration;
- (void).cxx_destruct;
- (id)initWithTimeFontConfiguration:(id)a0 titlePosterColor:(id)a1;
- (id)titlePosterColor;

@end
