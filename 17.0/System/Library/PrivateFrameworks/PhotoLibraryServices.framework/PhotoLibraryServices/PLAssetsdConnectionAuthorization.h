@class NSString, NSSet, NSNumber, PLSandboxedURL;

@interface PLAssetsdConnectionAuthorization : NSObject <PLClientAuthorization> {
    struct { unsigned int val[8]; } _auditToken;
    NSSet *_photoKitEntitlements;
    NSNumber *_photosAccessAllowed;
    NSNumber *_photosAddAccessAllowed;
    BOOL _libraryUpgradeAuthorized;
    BOOL _directDatabaseAccessAuthorized;
    BOOL _directDatabaseWriteAuthorized;
    BOOL _isEntitledForPhotoKitOrPrivatePhotosTCC;
    PLSandboxedURL *_clientMainBundleSandboxedURL;
}

@property (readonly, nonatomic) NSString *fetchFilterIdentifier;
@property (readonly, nonatomic) NSString *trustedCallerDisplayName;
@property (readonly, nonatomic) NSString *trustedCallerPhotoLibraryUsageDescription;
@property (readonly, nonatomic) BOOL photoKitEntitled;
@property (readonly, nonatomic) BOOL directDatabaseAccessAuthorized;
@property (readonly, nonatomic) BOOL directDatabaseWriteAuthorized;
@property (readonly, nonatomic) BOOL cloudInternalEntitled;
@property (readonly, nonatomic) BOOL analyticsCacheReadEntitled;
@property (readonly, nonatomic) BOOL analyticsCacheWriteEntitled;
@property (readonly, nonatomic) BOOL smartSharingCacheReadEntitled;
@property (readonly, nonatomic) BOOL smartSharingCacheWriteEntitled;
@property (readonly, nonatomic) BOOL limitedLibraryMode;
@property (readonly, nonatomic, getter=isClientLimitedLibraryCapable) BOOL clientLimitedLibraryCapable;
@property (readonly, nonatomic) BOOL clientIsSandboxed;
@property (readonly, nonatomic) BOOL photosDataVaultEntitled;
@property (readonly, nonatomic) BOOL internalDataReadWriteAuthorized;
@property (readonly, nonatomic, getter=isClientAuthorizedForTCCServicePhotos) BOOL clientAuthorizedForTCCServicePhotos;
@property (readonly, nonatomic, getter=isClientAuthorizedForTCCServicePhotosAdd) BOOL clientAuthorizedForTCCServicePhotosAdd;
@property (readonly, nonatomic) struct { unsigned int x0[8]; } clientAuditToken;
@property (readonly, nonatomic) int clientProcessIdentifier;
@property (readonly, nonatomic) NSString *trustedCallerBundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setClientMainBundleSandboxedURL:(id)a0;
- (BOOL)isPhotosClient;
- (BOOL)photoKitEntitledFor:(id)a0;
- (id)initWithConnection:(id)a0;
- (void)invalidateClientAuthorizationCache;
- (BOOL)isClientInLimitedLibraryMode;
- (BOOL)isClientEntitledForPhotoKitOrPrivatePhotosTCC;
- (void)setClientLimitedLibraryCapable:(BOOL)a0;
- (BOOL)isClientAuthorizedForLibraryUpgrade;
- (void).cxx_destruct;
- (void)_trackCAConnectionEvent;
- (BOOL)_shouldTrackEventForBundle:(id)a0;
- (BOOL)isClientAuthorizedForSandboxExtensions;
- (void)setupFromConnection:(id)a0;
- (BOOL)isClientInRestrictedMode;
- (BOOL)isClientInFullLibraryMode;

@end
