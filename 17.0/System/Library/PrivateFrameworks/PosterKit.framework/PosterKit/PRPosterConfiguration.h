@class NSString, PRSPosterPath, NSURL, PRPosterPathModelObjectCache;
@protocol BSInvalidatable;

@interface PRPosterConfiguration : NSObject <PRPosterContentsInternal, PRPosterContents> {
    id<BSInvalidatable> _pathValidityExtension;
    PRPosterPathModelObjectCache *_cache;
}

@property (readonly, copy, nonatomic) NSString *displayNameLocalizationKey;
@property (readonly, copy, nonatomic) NSString *role;
@property (readonly, nonatomic) PRSPosterPath *_path;
@property (readonly, copy, nonatomic) NSString *descriptorIdentifier;
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
- (void)_invalidate;
- (id)descriptorIdentifier;
- (id)loadUserInfoWithError:(out id *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)assetDirectory;
- (id)loadConfigurableOptionsWithError:(out id *)a0;
- (id)loadAmbientConfigurationWithError:(out id *)a0;
- (id)loadComplicationLayoutWithError:(out id *)a0;
- (id)loadConfiguredPropertiesWithError:(out id *)a0;
- (id)loadFocusConfigurationWithError:(out id *)a0;
- (id)loadHomeScreenConfigurationWithError:(out id *)a0;
- (id)loadOtherMetadataWithError:(out id *)a0;
- (id)loadSuggestionMetadataWithError:(out id *)a0;
- (id)loadTitleStyleConfigurationWithError:(out id *)a0;

@end
