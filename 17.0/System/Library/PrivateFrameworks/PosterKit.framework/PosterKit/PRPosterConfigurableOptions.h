@class NSString, NSArray, PRPosterDescriptorHomeScreenConfiguration;

@interface PRPosterConfigurableOptions : NSObject <BSDescriptionStreamable, NSSecureCoding, BSXPCSecureCoding, NSMutableCopying, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *displayNameLocalizationKey;
@property (copy, nonatomic) NSString *role;
@property (nonatomic) long long ambientSupportedDataLayout;
@property (copy, nonatomic) NSArray *preferredTimeFontConfigurations;
@property (copy, nonatomic) NSArray *preferredTitleColors;
@property (nonatomic) double luminance;
@property (copy, nonatomic) PRPosterDescriptorHomeScreenConfiguration *preferredHomeScreenConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)_initWithDisplayNameLocalizationKey:(id)a0 role:(id)a1 ambientSupportedDataLayout:(long long)a2 preferredTimeFontConfigurations:(id)a3 preferredTitleColors:(id)a4 luminance:(double)a5 preferredHomeScreenConfiguration:(id)a6;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (id)initWithDisplayNameLocalizationKey:(id)a0 ambientSupportedDataLayout:(long long)a1 preferredTimeFontConfigurations:(id)a2 preferredTitleColors:(id)a3 luminance:(double)a4 preferredHomeScreenConfiguration:(id)a5;
- (BOOL)isEqualToConfigurableOptions:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithDisplayNameLocalizationKey:(id)a0 role:(id)a1 ambientSupportedDataLayout:(long long)a2 preferredTimeFontConfigurations:(id)a3 preferredTitleColors:(id)a4 preferredHomeScreenConfiguration:(id)a5;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
