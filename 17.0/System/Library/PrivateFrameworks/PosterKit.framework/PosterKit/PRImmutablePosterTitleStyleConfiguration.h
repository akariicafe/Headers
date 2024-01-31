@class PRPosterColor, NSString, PRPosterTimeFontConfiguration;

@interface PRImmutablePosterTitleStyleConfiguration : PRPosterTitleStyleConfiguration {
    BOOL _userConfigured;
    BOOL _alternateDateEnabled;
    PRPosterTimeFontConfiguration *_timeFontConfiguration;
    unsigned long long _preferredTitleAlignment;
    unsigned long long _preferredTitleLayout;
    PRPosterColor *_titleColor;
    NSString *_timeNumberingSystem;
    double _contentsLuminance;
    NSString *_groupName;
}

- (double)contentsLuminance;
- (id)titleColor;
- (id)initWithTimeFontConfiguration:(id)a0 preferredTitleAlignment:(unsigned long long)a1 preferredTitleLayout:(unsigned long long)a2 titleColor:(id)a3 timeNumberingSystem:(id)a4 userConfigured:(BOOL)a5 contentsLuminance:(double)a6 alternateDateEnabled:(BOOL)a7 groupName:(id)a8;
- (id)timeFontConfiguration;
- (unsigned long long)preferredTitleLayout;
- (id)groupName;
- (void).cxx_destruct;
- (id)timeNumberingSystem;
- (BOOL)isAlternateDateEnabled;
- (unsigned long long)preferredTitleAlignment;
- (BOOL)isUserConfigured;

@end
