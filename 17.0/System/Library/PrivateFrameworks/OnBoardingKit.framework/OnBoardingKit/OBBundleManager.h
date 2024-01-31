@class NSString;

@interface OBBundleManager : NSObject

@property (retain, nonatomic) NSString *overrideBundleSearchPath;

+ (id)sharedManager;

- (id)bundleWithIdentifier:(id)a0 usingSearchPath:(id)a1 includePlaceholder:(BOOL)a2 isLinkBundle:(BOOL)a3;
- (id)orderedPrivacyBundles;
- (id)_allPrivacyBundles;
- (id)allBundles;
- (id)bundlesWithIdentifiers:(id)a0;
- (void).cxx_destruct;
- (id)bundleWithIdentifier:(id)a0;
- (id)privacyLinkBundleForBundles:(id)a0;
- (id)_providersByBundleNames;
- (id)orderedPrivacyBundlesWithPrivacyPaneBundle:(BOOL)a0;
- (id)_bundleSearchPath;

@end
