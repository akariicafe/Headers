@class NSString, NSArray, NSURL, PRPosterAmbientConfiguration, PRPosterDescriptorGalleryOptions, PRPosterPathModelObjectCache, PRPosterDescriptorHomeScreenConfiguration, PRSPosterPath;
@protocol BSInvalidatable;

@interface PRPosterDescriptor : NSObject <PRPosterContentsInternal, PRPosterContents> {
    id<BSInvalidatable> _pathValidityExtension;
    PRPosterPathModelObjectCache *_cache;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *displayNameLocalizationKey;
@property (readonly, copy, nonatomic) NSArray *preferredTimeFontConfigurations;
@property (readonly, copy, nonatomic) NSArray *preferredTitleColors;
@property (readonly, nonatomic) double luminance;
@property (readonly, copy, nonatomic) PRPosterDescriptorHomeScreenConfiguration *preferredHomeScreenConfiguration;
@property (readonly, copy, nonatomic) PRPosterDescriptorGalleryOptions *preferredGalleryOptions;
@property (readonly, copy, nonatomic) PRPosterAmbientConfiguration *ambientConfiguration;
@property (readonly, nonatomic) long long ambientSupportedDataLayout;
@property (readonly, nonatomic) PRSPosterPath *_path;
@property (readonly, copy, nonatomic) NSString *descriptorIdentifier;
@property (readonly, copy, nonatomic) NSString *role;
@property (readonly, copy, nonatomic) NSURL *assetDirectory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_initWithPath:(id)a0;
- (id)init;
- (void)dealloc;
- (id)objectForUserInfoKey:(id)a0;
- (id)role;
- (id)preferredGalleryOptions;
- (void)_swapOutPathForPath:(id)a0;
- (id)descriptorIdentifier;
- (id)identifier;
- (id)loadUserInfoWithError:(out id *)a0;
- (id)loadGalleryOptionsWithError:(out id *)a0;
- (void).cxx_destruct;
- (id)preferredTimeFontConfigurationsWithExtensionBundleURL:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)assetDirectory;
- (id)loadConfigurableOptionsWithError:(out id *)a0;

@end
