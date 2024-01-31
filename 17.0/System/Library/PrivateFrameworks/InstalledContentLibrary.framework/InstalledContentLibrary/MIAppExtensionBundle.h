@class NSDictionary, NSString;

@interface MIAppExtensionBundle : MIExecutableBundle

@property (copy, nonatomic) NSDictionary *extensionCacheEntry;
@property (readonly, copy, nonatomic) NSString *extensionPointIdentifier;
@property (readonly, nonatomic) BOOL targetsAppleExtensionPoint;
@property (copy, nonatomic) NSString *validationOverrideParentBundleID;

- (id)initForTesting;
- (Class)dataContainerClass;
- (void).cxx_destruct;
- (id)minimumOSVersion;
- (id)dataContainerCreatingIfNeeded:(BOOL)a0 forPersona:(id)a1 makeLive:(BOOL)a2 created:(BOOL *)a3 error:(id *)a4;
- (id)dataContainerForPersona:(id)a0 error:(id *)a1;
- (id)extensionCacheEntryWithError:(id *)a0;
- (void)setBundleParentDirectoryURL:(id)a0;
- (BOOL)validateBundleMetadataWithError:(id *)a0;
- (BOOL)validateHasNoDotInBundleIDSuffix:(id *)a0;

@end
