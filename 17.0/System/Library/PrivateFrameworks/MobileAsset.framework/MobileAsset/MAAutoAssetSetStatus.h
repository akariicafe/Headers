@class NSDate, NSString, NSArray, NSURL, MAAutoAssetSetNotifications, NSError, NSDictionary, MAAutoAssetSetProgress, MAAutoAssetSetPolicy;

@interface MAAutoAssetSetStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *configuredAssetEntries;
@property (retain, nonatomic) NSArray *atomicInstancesDownloaded;
@property (retain, nonatomic) NSString *catalogCachedAssetSetID;
@property (retain, nonatomic) NSURL *catalogDownloadedFromLive;
@property (retain, nonatomic) NSDate *catalogLastTimeChecked;
@property (retain, nonatomic) NSDate *catalogPostedDate;
@property (retain, nonatomic) NSString *newerAtomicInstanceDiscovered;
@property (retain, nonatomic) NSArray *newerDiscoveredAtomicEntries;
@property (retain, nonatomic) NSString *latestDownloadedAtomicInstance;
@property (retain, nonatomic) NSArray *latestDowloadedAtomicInstanceEntries;
@property (retain, nonatomic) NSDictionary *allDownloadedAtomicInstanceEntries;
@property (retain, nonatomic) NSString *downloadedCatalogCachedAssetSetID;
@property (retain, nonatomic) NSURL *downloadedCatalogDownloadedFromLive;
@property (retain, nonatomic) NSDate *downloadedCatalogLastTimeChecked;
@property (retain, nonatomic) NSDate *downloadedCatalogPostedDate;
@property (retain, nonatomic) MAAutoAssetSetNotifications *currentNotifications;
@property (retain, nonatomic) MAAutoAssetSetPolicy *currentNeedPolicy;
@property (retain, nonatomic) MAAutoAssetSetPolicy *schedulerPolicy;
@property (retain, nonatomic) MAAutoAssetSetPolicy *stagerPolicy;
@property (nonatomic) BOOL downloadUserInitiated;
@property (retain, nonatomic) MAAutoAssetSetProgress *downloadProgress;
@property (nonatomic) long long downloadedNetworkBytes;
@property (nonatomic) long long downloadedFilesystemBytes;
@property (retain, nonatomic) NSDictionary *currentLockUsage;
@property (retain, nonatomic) NSDictionary *selectorsForStaging;
@property (retain, nonatomic) NSError *availableForUseError;
@property (retain, nonatomic) NSError *newerVersionError;
@property (readonly, retain, nonatomic) NSString *clientDomainName;
@property (readonly, retain, nonatomic) NSString *assetSetIdentifier;

+ (id)newCurrentLockUsageSummary:(id)a0;
+ (id)newCurrentLockUsageDetailed:(id)a0;
+ (id)newSelectorsForStagingSummary:(id)a0;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initStatusForClientDomain:(id)a0 forAssetSetIdentifier:(id)a1 withAtomicInstancesDownloaded:(id)a2 withNewerAtomicInstanceDiscovered:(id)a3 withNewerDiscoveredAtomicEntries:(id)a4 withLatestDownloadedAtomicInstance:(id)a5 withLatestDowloadedAtomicInstanceEntries:(id)a6 withAllDownloadedAtomicInstanceEntries:(id)a7 withCurrentNotifications:(id)a8 withCurrentNeedPolicy:(id)a9 withSchedulerPolicy:(id)a10 withStagerPolicy:(id)a11 withDownloadUserInitiated:(BOOL)a12 withDownloadProgress:(id)a13 withDownloadedNetworkBytes:(long long)a14 withDownloadedFilesystemBytes:(long long)a15 withCurrentLockUsage:(id)a16 withSelectorsForStaging:(id)a17 withAvailableForUseError:(id)a18 withNewerVersionError:(id)a19;
- (id)initStatusForClientDomain:(id)a0 forAssetSetIdentifier:(id)a1 withConfiguredAssetEntries:(id)a2 withAtomicInstancesDownloaded:(id)a3 withCatalogCachedAssetSetID:(id)a4 withCatalogDownloadedFromLive:(id)a5 withCatalogLastTimeChecked:(id)a6 withCatalogPostedDate:(id)a7 withNewerAtomicInstanceDiscovered:(id)a8 withNewerDiscoveredAtomicEntries:(id)a9 withLatestDownloadedAtomicInstance:(id)a10 withLatestDowloadedAtomicInstanceEntries:(id)a11 withCurrentNotifications:(id)a12 withCurrentNeedPolicy:(id)a13 withSchedulerPolicy:(id)a14 withStagerPolicy:(id)a15 withDownloadUserInitiated:(BOOL)a16 withDownloadProgress:(id)a17 withDownloadedNetworkBytes:(long long)a18 withDownloadedFilesystemBytes:(long long)a19 withCurrentLockUsage:(id)a20 withSelectorsForStaging:(id)a21 withAvailableForUseError:(id)a22 withNewerVersionError:(id)a23;
- (id)initStatusForClientDomain:(id)a0 forAssetSetIdentifier:(id)a1 withConfiguredAssetEntries:(id)a2 withAtomicInstancesDownloaded:(id)a3 withCatalogCachedAssetSetID:(id)a4 withCatalogDownloadedFromLive:(id)a5 withCatalogLastTimeChecked:(id)a6 withCatalogPostedDate:(id)a7 withNewerAtomicInstanceDiscovered:(id)a8 withNewerDiscoveredAtomicEntries:(id)a9 withLatestDownloadedAtomicInstance:(id)a10 withLatestDowloadedAtomicInstanceEntries:(id)a11 withDownloadedCatalogCachedAssetSetID:(id)a12 withDownloadedCatalogDownloadedFromLive:(id)a13 withDownloadedCatalogLastTimeChecked:(id)a14 withDownloadedCatalogPostedDate:(id)a15 withCurrentNotifications:(id)a16 withCurrentNeedPolicy:(id)a17 withSchedulerPolicy:(id)a18 withStagerPolicy:(id)a19 withDownloadUserInitiated:(BOOL)a20 withDownloadProgress:(id)a21 withDownloadedNetworkBytes:(long long)a22 withDownloadedFilesystemBytes:(long long)a23 withCurrentLockUsage:(id)a24 withSelectorsForStaging:(id)a25 withAvailableForUseError:(id)a26 withNewerVersionError:(id)a27;
- (id)initStatusForClientDomain:(id)a0 forAssetSetIdentifier:(id)a1 withConfiguredAssetEntries:(id)a2 withAtomicInstancesDownloaded:(id)a3 withNewerAtomicInstanceDiscovered:(id)a4 withNewerDiscoveredAtomicEntries:(id)a5 withLatestDownloadedAtomicInstance:(id)a6 withLatestDowloadedAtomicInstanceEntries:(id)a7 withAllDownloadedAtomicInstanceEntries:(id)a8 withCurrentNotifications:(id)a9 withCurrentNeedPolicy:(id)a10 withSchedulerPolicy:(id)a11 withStagerPolicy:(id)a12 withDownloadUserInitiated:(BOOL)a13 withDownloadProgress:(id)a14 withDownloadedNetworkBytes:(long long)a15 withDownloadedFilesystemBytes:(long long)a16 withCurrentLockUsage:(id)a17 withSelectorsForStaging:(id)a18 withAvailableForUseError:(id)a19 withNewerVersionError:(id)a20;

@end
