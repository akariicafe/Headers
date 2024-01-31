@class NSString, NSArray, PRPosterDescriptorHomeScreenConfiguration;

@interface PRPosterMutableConfigurableOptions : PRPosterConfigurableOptions

@property (copy, nonatomic) NSString *displayNameLocalizationKey;
@property (copy, nonatomic) NSString *role;
@property (nonatomic) long long ambientSupportedDataLayout;
@property (copy, nonatomic) NSArray *preferredTimeFontConfigurations;
@property (copy, nonatomic) NSArray *preferredTitleColors;
@property (nonatomic) double luminance;
@property (copy, nonatomic) PRPosterDescriptorHomeScreenConfiguration *preferredHomeScreenConfiguration;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;

@end
