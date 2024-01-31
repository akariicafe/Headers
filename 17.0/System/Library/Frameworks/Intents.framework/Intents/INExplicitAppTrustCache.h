@class NSArray, NSSet;

@interface INExplicitAppTrustCache : NSObject {
    BOOL _loadedManagedBundleIdentifiers;
    BOOL _loadedTrustedCodeSigningIdentities;
    BOOL _enterpriseAppTrustAllowedLoaded;
}

@property (nonatomic) BOOL enterpriseAppTrustAllowed;
@property (retain, nonatomic) NSArray *managedBundleIdentifiers;
@property (retain, nonatomic) NSArray *trustedCodeSigningIdentities;
@property (retain, nonatomic) NSSet *signingIdentitiesRequiringExplicitTrust;

- (void).cxx_destruct;

@end
