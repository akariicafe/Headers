@class NSString, NSNumber;

@interface AXAssetPolicy : NSObject

@property (readonly, nonatomic) NSString *assetType;
@property (nonatomic) BOOL daemonShouldDownloadInBackgroundIfNeeded;
@property (retain, nonatomic) NSNumber *minSupportedFormatVersion;
@property (retain, nonatomic) NSNumber *maxSupportedFormatVersion;
@property (retain, nonatomic) NSNumber *compatibilityVersion;
@property (nonatomic) double downloadResourceTimeout;
@property (nonatomic) double updateCatalogTimeout;
@property (nonatomic) double refreshRetryInterval;
@property (nonatomic) double downloadRetryInterval;
@property (readonly, nonatomic) BOOL shouldCopyLocally;
@property (readonly, nonatomic) BOOL shouldUseProductionServerForInternalBuilds;
@property (retain, nonatomic) NSString *launchActivityIdentifier;
@property (nonatomic) double updateInterval;
@property (readonly, nonatomic) NSString *assetTypeSuffix;

+ (id)policy;

- (id)init;
- (unsigned long long)hash;
- (id)assetsToPurgeFromInstalledAssets:(id)a0;
- (id)description;
- (BOOL)shouldDownloadAsset:(id)a0 withInstalledAssets:(id)a1;
- (void).cxx_destruct;
- (id)assetsToPurgeFromInstalledAssets:(id)a0 withRefreshedAssets:(id)a1;
- (id)assetsToDownloadFromRefreshedAssets:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)downloadOptionsForOperation:(unsigned long long)a0 userInitiated:(BOOL)a1;
- (BOOL)_isAssetSupportedBasedOnCompatibilityVersion:(id)a0;
- (BOOL)_isAssetSupportedBasedOnMinMaxFormatVersion:(id)a0;
- (BOOL)isAssetContentVersion:(id)a0 greatherThanInstalledAssets:(id)a1;
- (BOOL)isAssetSupported:(id)a0;
- (id)newAssetQuery;

@end
