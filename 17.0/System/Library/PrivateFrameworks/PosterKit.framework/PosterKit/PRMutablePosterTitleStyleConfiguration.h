@class PRPosterColor, NSString, PRPosterTimeFontConfiguration;

@interface PRMutablePosterTitleStyleConfiguration : PRPosterTitleStyleConfiguration

@property (copy, nonatomic) PRPosterTimeFontConfiguration *timeFontConfiguration;
@property (nonatomic) unsigned long long preferredTitleAlignment;
@property (nonatomic) unsigned long long preferredTitleLayout;
@property (copy, nonatomic) PRPosterColor *titleColor;
@property (copy, nonatomic) NSString *timeNumberingSystem;
@property (nonatomic) double contentsLuminance;
@property (copy, nonatomic) NSString *groupName;
@property (nonatomic, getter=isUserConfigured) BOOL userConfigured;
@property (nonatomic, getter=isAlternateDateEnabled) BOOL alternateDateEnabled;

- (id)initWithTimeFontConfiguration:(id)a0 preferredTitleAlignment:(unsigned long long)a1 preferredTitleLayout:(unsigned long long)a2 titleColor:(id)a3 timeNumberingSystem:(id)a4 userConfigured:(BOOL)a5 contentsLuminance:(double)a6 alternateDateEnabled:(BOOL)a7 groupName:(id)a8;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
