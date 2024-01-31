@class NSString, AMSPromise;

@interface ASKClient : NSObject <ASKClientExports>

@property (retain) AMSPromise *storefrontIdentifierPromise;
@property long long currentNotificationAuthorizationStatus;
@property (readonly) struct CGSize { double x0; double x1; } screenSize;
@property (readonly) double screenCornerRadius;
@property (readonly, copy) NSString *guid;
@property (readonly, copy) NSString *thinnedApplicationVariantIdentifier;
@property (readonly) BOOL newPaymentMethodEnabled;
@property (readonly, copy) NSString *storefrontIdentifier;
@property (readonly) NSString *deviceType;
@property (readonly) NSString *buildType;
@property (readonly) BOOL isActivityAvailable;
@property (readonly) BOOL isElectrocardiogramInstallationAllowed;
@property (readonly) BOOL isSidepackingEnabled;
@property (readonly) BOOL isTinkerWatch;
@property (readonly) BOOL isCharonSupported;
@property (readonly) BOOL isMandrakeSupported;
@property (readonly) BOOL supportsHEIF;
@property (readonly, copy) NSString *activePairedWatchSystemVersion;

+ (id)getStorefrontIdentifierPromise:(id)a0;

- (void)accountStoreDidChange:(id)a0;
- (id)init;
- (void)dealloc;
- (BOOL)deviceHasCapabilitiesIncludingCompatibilityCheck:(id)a0 isVisionOSCompatibleIOSApp:(BOOL)a1;
- (void)updateNotificationAuthorisationStatus;
- (id)isPairedSystemVersionAtLeast:(id)a0;
- (void)applicationDidForeground:(id)a0;
- (BOOL)canUpdateNotificationAuthorizationStatus;
- (void).cxx_destruct;
- (BOOL)isActivePairedWatchSystemVersionAtLeastMajorVersion:(id)a0 minorVersion:(id)a1 patchVersion:(id)a2;
- (BOOL)deletableSystemAppCanBeInstalledOnWatchWithBundleID:(id)a0;
- (BOOL)deviceHasCapabilities:(id)a0;
- (BOOL)isAutomaticDownloadingEnabled;
- (BOOL)isAuthorizedForUserNotifications;

@end
