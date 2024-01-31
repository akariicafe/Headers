@class NSString, NSData, LSApplicationProxy, NSNumber;

@interface DMCApplicationProxy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) LSApplicationProxy *lsApp;
@property (retain, nonatomic) NSString *cachedManagedAppConfigurationInfo;
@property (nonatomic) unsigned long long dataSource;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *bundlePath;
@property (readonly, nonatomic) NSString *signerID;
@property (readonly, nonatomic) NSString *appIDEntitlement;
@property (readonly, nonatomic) BOOL isInstalled;
@property (readonly, nonatomic) BOOL isBetaApp;
@property (readonly, nonatomic) BOOL isUserApp;
@property (readonly, nonatomic) BOOL isBlocked;
@property (readonly, nonatomic) NSData *misCDHash;
@property (readonly, nonatomic) NSNumber *misHashType;

+ (id)blockedApplications;
+ (id)userApplications;
+ (id)_bundlePathsForApplications:(id)a0;
+ (id)bookIconForVariant:(unsigned long long)a0;
+ (id)_allApplications;

- (void)setBlockedInfo:(id)a0;
- (BOOL)_hasAppRelay;
- (id)managedAppConfigurationInfo;
- (BOOL)_hasAppCellularSlice;
- (BOOL)_isUnableToExportToUnmanaged;
- (BOOL)_hasManagedRestrictions;
- (id)initWithLSApplicationProxy:(id)a0 dataSource:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_hasAssociatedDomains;
- (BOOL)_isTapToPayScreenLock;
- (id)misStateString;
- (BOOL)_isExcludedFromBackup;
- (BOOL)_isUnableToUseCellData;
- (BOOL)checkIsBlocked;
- (BOOL)_hasAppVPN;
- (id)_bridgeIconForVariant:(unsigned long long)a0;
- (id)_managedAppAttribute:(id)a0;
- (BOOL)_hasAppContentFilter;
- (id)_circularImageFromImage:(id)a0 variant:(int)a1;
- (id)initWithLSApplicationRecord:(id)a0 dataSource:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)iconForVariant:(unsigned long long)a0;
- (unsigned long long)misStateIncludingPending:(BOOL)a0;
- (BOOL)_isUninstalledOnMDMRemoval;
- (BOOL)_hasAppDNSProxy;
- (BOOL)_isUnableToImportFromUnmanaged;
- (id)_lsIconDataForVariant:(unsigned long long)a0 scale:(double)a1;
- (BOOL)_isNotRemovable;
- (BOOL)_isUnableToUseRoamingCellData;
- (BOOL)_isExcludedFromCloudSync;
- (id)initWithBundleID:(id)a0 dataSource:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;

@end
