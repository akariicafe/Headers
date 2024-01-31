@class PRPosterAmbientConfiguration, NSString, NSArray, PRPosterDescriptorHomeScreenConfiguration, PRPosterDescriptorGalleryOptions;

@interface PRMutablePosterDescriptor : PRPosterDescriptor

@property (copy, nonatomic) NSString *role;
@property (copy, nonatomic) NSString *displayNameLocalizationKey;
@property (copy, nonatomic) NSArray *preferredTimeFontConfigurations;
@property (copy, nonatomic) NSArray *preferredTitleColors;
@property (nonatomic) double luminance;
@property (copy, nonatomic) PRPosterDescriptorHomeScreenConfiguration *preferredHomeScreenConfiguration;
@property (copy, nonatomic) PRPosterDescriptorGalleryOptions *preferredGalleryOptions;
@property (copy, nonatomic) PRPosterAmbientConfiguration *ambientConfiguration;
@property (nonatomic) long long ambientSupportedDataLayout;

+ (id)mutableDescriptorWithIdentifier:(id)a0;
+ (id)mutableDescriptorWithIdentifier:(id)a0 role:(id)a1;

- (void)setLuminance:(double)a0;
- (void)setDisplayNameLocalizationKey:(id)a0;
- (BOOL)setObject:(id)a0 forUserInfoKey:(id)a1;
- (BOOL)storeGalleryOptions:(id)a0 error:(out id *)a1;
- (BOOL)storeConfigurableOptions:(id)a0 error:(out id *)a1;
- (void)setPreferredGalleryOptions:(id)a0;
- (void)setPreferredTitleColors:(id)a0;
- (void)setPreferredHomeScreenConfiguration:(id)a0;
- (void)setAmbientSupportedDataLayout:(long long)a0;
- (void)setRole:(id)a0;
- (BOOL)copyContentsOfPath:(id)a0 error:(out id *)a1;
- (void)setPreferredTimeFontConfigurations:(id)a0;
- (BOOL)storeUserInfo:(id)a0 error:(out id *)a1;
- (void)setAmbientConfiguration:(id)a0;

@end
