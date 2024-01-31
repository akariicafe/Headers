@class MCProfileConnection, NSSet, NSMutableDictionary, ACAccount, NSObject, ACAccountStore;
@protocol OS_dispatch_queue;

@interface WFManagedConfigurationProfile : NSObject

@property (class, readonly) WFManagedConfigurationProfile *defaultProfile;

@property (readonly) BOOL isOpenInRestrictionInEffect;
@property (readonly) BOOL mayOpenFromUnmanagedToManaged;
@property (readonly) BOOL mayOpenFromManagedToUnmanaged;
@property (readonly, nonatomic) ACAccount *primaryAppleAccount;
@property (readonly) BOOL isWiFiPowerModificationAllowed;
@property (readonly) BOOL isBluetoothModificationAllowed;
@property (readonly) BOOL isWallpaperModificationAllowed;
@property (readonly) BOOL isScreenShotAllowed;
@property (readonly, copy, nonatomic) NSSet *managedAppBundleIDs;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *operatingQueue;
@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (readonly, nonatomic) ACAccount *primaryAppleAccount;
@property (readonly, nonatomic) NSMutableDictionary *accounts;
@property (readonly, nonatomic) NSMutableDictionary *accountIdentifiersByDataClass;
@property (readonly, copy, nonatomic) MCProfileConnection *profileConnection;

- (BOOL)isAppManaged:(id)a0;
- (id)init;
- (id)accountWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)allowedOpenInAppBundleIDsAfterApplyingFilterToAppBundleIDs:(id)a0 originatingAppBundleID:(id)a1 originatingAccountIsManaged:(BOOL)a2;
- (id)accountIdentifiersEnabledForDataclass:(id)a0;
- (void)handleAccountStoreDidChangeNotification:(id)a0;
- (void)handleManagedAppDidChangeNotification:(id)a0;
- (id)initWithProfileConnection:(id)a0 accountStore:(id)a1;
- (BOOL)isAccountBasedSourceApp:(id)a0;
- (BOOL)isAccountManaged:(id)a0;
- (unsigned long long)managedLevelForContentOfURL:(id)a0;
- (unsigned long long)managedLevelForContentOfURLs:(id)a0;
- (void)removeCachedChildrenAccountForAccount:(id)a0;

@end
