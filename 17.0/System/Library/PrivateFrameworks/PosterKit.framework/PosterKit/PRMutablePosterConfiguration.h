@class NSString;

@interface PRMutablePosterConfiguration : PRPosterConfiguration

@property (copy, nonatomic) NSString *displayNameLocalizationKey;

+ (id)mutableConfigurationWithRole:(id)a0;
+ (id)mutableConfiguration;

- (void)setDisplayNameLocalizationKey:(id)a0;
- (BOOL)setObject:(id)a0 forUserInfoKey:(id)a1;
- (BOOL)storeConfigurableOptions:(id)a0 error:(out id *)a1;
- (BOOL)copyContentsOfPath:(id)a0 error:(out id *)a1;
- (BOOL)storeUserInfo:(id)a0 error:(out id *)a1;
- (BOOL)copyContentsOfConfiguration:(id)a0 error:(out id *)a1;
- (BOOL)storeAmbientConfiguration:(id)a0 error:(out id *)a1;
- (BOOL)storeComplicationLayout:(id)a0 error:(out id *)a1;
- (BOOL)storeConfiguredProperties:(id)a0 error:(out id *)a1;
- (BOOL)storeFocusConfiguration:(id)a0 error:(out id *)a1;
- (BOOL)storeHomeScreenConfiguration:(id)a0 error:(out id *)a1;
- (BOOL)storeOtherMetadata:(id)a0 error:(out id *)a1;
- (BOOL)storeSuggestionMetadata:(id)a0 error:(out id *)a1;
- (BOOL)storeTitleStyleConfiguration:(id)a0 error:(out id *)a1;

@end
