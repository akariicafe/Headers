@class NSString, UIImage, LSApplicationWorkspace, NSURL, VSAppDescription, VSPrivacyFacade, VSOptional, VSRestrictionsCenter;

@interface VSAppSettingsViewModel : NSObject <LSApplicationWorkspaceObserverProtocol>

@property (nonatomic) long long installState;
@property (nonatomic) long long privacyState;
@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) VSPrivacyFacade *privacyFacade;
@property (retain, nonatomic) LSApplicationWorkspace *workspace;
@property (nonatomic) int registrationToken;
@property (retain, nonatomic) VSRestrictionsCenter *restrictionsCenter;
@property (nonatomic) struct __CFBundle { } *bundle;
@property (retain, nonatomic) VSAppDescription *appDescription;
@property (copy, nonatomic) NSString *buyParams;
@property (retain, nonatomic) VSOptional *voucher;
@property (readonly, nonatomic) long long installSource;
@property (retain, nonatomic) NSString *artistName;
@property (readonly, copy, nonatomic) NSString *adamID;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSURL *appStoreURL;
@property (nonatomic) BOOL forceDSIDlessInstall;
@property (readonly, copy, nonatomic) NSString *storeName;
@property (readonly, nonatomic) BOOL canChangePrivacyAccess;
@property (nonatomic, getter=isAccessGranted) BOOL accessGranted;
@property (readonly, nonatomic) BOOL canRevokeVoucher;
@property (readonly, nonatomic, getter=isDecided) BOOL decided;
@property (readonly, nonatomic) NSString *decidedLockupSubtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingAccessGranted;

- (void)applicationsDidInstall:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (id)init;
- (void)dealloc;
- (id)appBundleIDs;
- (void)applicationsWillInstall:(id)a0;
- (void)applicationsWillUninstall:(id)a0;
- (void).cxx_destruct;
- (void)applicationsDidFailToUninstall:(id)a0;
- (id)name;
- (void)applicationsDidFailToInstall:(id)a0;
- (id)initWithApplicationWorkspace:(id)a0;
- (void)launchApp;
- (id)appAdamIDs;
- (id)appIconURLForSize:(struct CGSize { double x0; double x1; })a0;
- (id)iconURLForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_denyPrivacyAccess;
- (void)_grantPrivacyAccess;
- (void)_updatePrivacyState;
- (id)initWithAppDescription:(id)a0 privacyVoucher:(id)a1 restrictionsCenter:(id)a2 privacyFacade:(id)a3;
- (id)initWithBundle:(struct __CFBundle { } *)a0 restrictionsCenter:(id)a1 privacyFacade:(id)a2;
- (id)initWithBundle:(struct __CFBundle { } *)a0 restrictionsCenter:(id)a1 privacyFacade:(id)a2 adamID:(id)a3;
- (void)installApp;
- (void)revokeVoucher;

@end
