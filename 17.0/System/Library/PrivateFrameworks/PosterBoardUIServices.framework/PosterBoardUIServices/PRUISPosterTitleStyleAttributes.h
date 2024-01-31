@class BSUIVibrancyConfiguration, UIColor, UIFont;

@interface PRUISPosterTitleStyleAttributes : NSObject

@property (retain, nonatomic) BSUIVibrancyConfiguration *vibrancyConfiguration;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (nonatomic) unsigned long long preferredTitleAlignment;
@property (nonatomic) unsigned long long preferredTitleLayout;

- (void).cxx_destruct;
- (id)initWithPRPosterTitleStyleConfiguration:(id)a0 extensionBundleURL:(id)a1 role:(id)a2;
- (id)initWithTitleColor:(id)a0 titleFont:(id)a1 preferredTitleAlignment:(unsigned long long)a2 preferredTitleLayout:(unsigned long long)a3 vibrancyConfiguration:(id)a4;

@end
