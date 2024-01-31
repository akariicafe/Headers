@class MADownloadOptions, NSString, NSArray, NSData, NSDictionary, MADownloadConfig, MAAbsoluteAssetId, MAAssetDiff;

@interface MADActivityCommandRequest : NSObject

@property (retain, nonatomic) NSString *assetType;
@property (retain, nonatomic) NSString *assetId;
@property (nonatomic) long long returnTypes;
@property (nonatomic) BOOL doNotBlockBeforeFirstUnlock;
@property (nonatomic) BOOL doNotBlockOnNetworkStatus;
@property (retain, nonatomic) NSDictionary *queryParams;
@property (retain, nonatomic) NSString *relativeUrl;
@property (retain, nonatomic) MADownloadOptions *downloadOptions;
@property (nonatomic) unsigned long long downloadSize;
@property (nonatomic) unsigned long long notificationInterval;
@property (retain, nonatomic) MADownloadConfig *downloadConfig;
@property (retain, nonatomic) NSArray *assetTypesList;
@property (nonatomic) long long assetState;
@property (retain, nonatomic) NSDictionary *assetIdsToPreserve;
@property (nonatomic) BOOL pallasEnabled;
@property (retain, nonatomic) NSString *serverUrl;
@property (retain, nonatomic) NSString *pallasUrl;
@property (retain, nonatomic) NSString *pallasAudience;
@property (retain, nonatomic) MAAbsoluteAssetId *absoluteId;
@property (nonatomic) long long unarchiveSize;
@property (nonatomic) unsigned long long gcOverrideDays;
@property (nonatomic) BOOL cleanupInFlightDownloads;
@property (retain, nonatomic) NSString *connectionIdentifier;
@property (retain, nonatomic) NSString *purpose;
@property (retain, nonatomic) NSString *baseUrl;
@property (retain, nonatomic) NSData *clientExtractorData;
@property (nonatomic) unsigned long long clientExtractorLen;
@property (retain, nonatomic) MAAssetDiff *allowDifferences;
@property (readonly, nonatomic) NSString *clientName;
@property (readonly, nonatomic) NSString *action;

- (void).cxx_destruct;
- (id)initForClient:(id)a0 requestingAction:(id)a1;
- (void)associateAbsoluteId:(id)a0;
- (void)associateAllowDifferences:(id)a0;
- (void)associateAssetId:(id)a0;
- (void)associateAssetIdsToPreserve:(id)a0;
- (void)associateAssetState:(long long)a0;
- (void)associateAssetType:(id)a0;
- (void)associateAssetTypesList:(id)a0;
- (void)associateBaseUrl:(id)a0;
- (void)associateCleanupInFlightDownloads:(BOOL)a0;
- (void)associateClientExtractorData:(id)a0 ofLength:(unsigned long long)a1;
- (void)associateConnectionIdentifier:(id)a0;
- (void)associateDoNotBlockBeforeFirstUnlock:(BOOL)a0;
- (void)associateDoNotBlockOnNetworkStatus:(BOOL)a0;
- (void)associateDownloadConfig:(id)a0;
- (void)associateDownloadOptions:(id)a0;
- (void)associateDownloadSize:(unsigned long long)a0;
- (void)associateGCOverrideDays:(unsigned long long)a0;
- (void)associateNotificationInterval:(unsigned long long)a0;
- (void)associatePallasAudience:(id)a0;
- (void)associatePallasEnabled:(BOOL)a0;
- (void)associatePallasUrl:(id)a0;
- (void)associatePurpose:(id)a0;
- (void)associateQueryParams:(id)a0;
- (void)associateRelativeUrl:(id)a0;
- (void)associateReturnTypes:(long long)a0;
- (void)associateServerUrl:(id)a0;
- (void)associateUnarchiveSize:(long long)a0;

@end
