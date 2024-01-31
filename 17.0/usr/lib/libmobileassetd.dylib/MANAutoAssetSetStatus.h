@class NSDate, NSString, NSArray, MANAutoAssetSetPolicy, NSURL, NSError, NSDictionary, MANAutoAssetSetNotifications, MANAutoAssetSetProgress;

@interface MANAutoAssetSetStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *clientDomainName;
@property (retain, nonatomic) NSString *assetSetIdentifier;
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
@property (retain, nonatomic) MANAutoAssetSetNotifications *currentNotifications;
@property (retain, nonatomic) MANAutoAssetSetPolicy *currentNeedPolicy;
@property (retain, nonatomic) MANAutoAssetSetPolicy *schedulerPolicy;
@property (retain, nonatomic) MANAutoAssetSetPolicy *stagerPolicy;
@property (nonatomic) BOOL downloadUserInitiated;
@property (retain, nonatomic) MANAutoAssetSetProgress *downloadProgress;
@property (nonatomic) long long downloadedNetworkBytes;
@property (nonatomic) long long downloadedFilesystemBytes;
@property (retain, nonatomic) NSDictionary *currentLockUsage;
@property (retain, nonatomic) NSDictionary *selectorsForStaging;
@property (retain, nonatomic) NSError *availableForUseError;
@property (retain, nonatomic) NSError *newerVersionError;

+ (id)newCurrentLockUsageSummary:(id)a0;
+ (id)newCurrentLockUsageDetailed:(id)a0;
+ (id)newSelectorsForStagingSummary:(id)a0;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initStatusForClientDomain:(id)a0 forAssetSetIdentifier:(id)a1 withConfiguredAssetEntries:(id)a2 withAtomicInstancesDownloaded:(id)a3 withCatalogCachedAssetSetID:(id)a4 withCatalogDownloadedFromLive:(id)a5 withCatalogLastTimeChecked:(id)a6 withCatalogPostedDate:(id)a7 withNewerAtomicInstanceDiscovered:(id)a8 withNewerDiscoveredAtomicEntries:(id)a9 withLatestDownloadedAtomicInstance:(id)a10 withLatestDowloadedAtomicInstanceEntries:(id)a11 withCurrentNotifications:(id)a12 withCurrentNeedPolicy:(id)a13 withSchedulerPolicy:(id)a14 withStagerPolicy:(id)a15 withDownloadUserInitiated:(BOOL)a16 withDownloadProgress:(id)a17 withDownloadedNetworkBytes:(long long)a18 withDownloadedFilesystemBytes:(long long)a19 withCurrentLockUsage:(id)a20 withSelectorsForStaging:(id)a21 withAvailableForUseError:(id)a22 withNewerVersionError:(id)a23;
- (id)initStatusForClientDomain:(id)a0 forAssetSetIdentifier:(id)a1 withConfiguredAssetEntries:(id)a2 withAtomicInstancesDownloaded:(id)a3 withCatalogCachedAssetSetID:(id)a4 withCatalogDownloadedFromLive:(id)a5 withCatalogLastTimeChecked:(id)a6 withCatalogPostedDate:(id)a7 withNewerAtomicInstanceDiscovered:(id)a8 withNewerDiscoveredAtomicEntries:(id)a9 withLatestDownloadedAtomicInstance:(id)a10 withLatestDowloadedAtomicInstanceEntries:(id)a11 withDownloadedCatalogCachedAssetSetID:(id)a12 withDownloadedCatalogDownloadedFromLive:(id)a13 withDownloadedCatalogLastTimeChecked:(id)a14 withDownloadedCatalogPostedDate:(id)a15 withCurrentNotifications:(id)a16 withCurrentNeedPolicy:(id)a17 withSchedulerPolicy:(id)a18 withStagerPolicy:(id)a19 withDownloadUserInitiated:(BOOL)a20 withDownloadProgress:(id)a21 withDownloadedNetworkBytes:(long long)a22 withDownloadedFilesystemBytes:(long long)a23 withCurrentLockUsage:(id)a24 withSelectorsForStaging:(id)a25 withAvailableForUseError:(id)a26 withNewerVersionError:(id)a27;
- (id)initStatusForClientDomain:(id)a0 forAssetSetIdentifier:(id)a1 withConfiguredAssetEntries:(id)a2 withAtomicInstancesDownloaded:(id)a3 withNewerAtomicInstanceDiscovered:(id)a4 withNewerDiscoveredAtomicEntries:(id)a5 withLatestDownloadedAtomicInstance:(id)a6 withLatestDowloadedAtomicInstanceEntries:(id)a7 withAllDownloadedAtomicInstanceEntries:(id)a8 withCurrentNotifications:(id)a9 withCurrentNeedPolicy:(id)a10 withSchedulerPolicy:(id)a11 withStagerPolicy:(id)a12 withDownloadUserInitiated:(BOOL)a13 withDownloadProgress:(id)a14 withDownloadedNetworkBytes:(long long)a15 withDownloadedFilesystemBytes:(long long)a16 withCurrentLockUsage:(id)a17 withSelectorsForStaging:(id)a18 withAvailableForUseError:(id)a19 withNewerVersionError:(id)a20;

@end
