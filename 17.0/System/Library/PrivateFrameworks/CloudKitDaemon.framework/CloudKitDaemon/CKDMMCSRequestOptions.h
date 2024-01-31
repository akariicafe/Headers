@class CKContainerID, NSString, NSArray, NSData, NSDictionary, CKOperationMMCSRequestOptions, NSNumber, C2MetricOptions;
@protocol C2NetworkingDelegate;

@interface CKDMMCSRequestOptions : NSObject

@property (nonatomic) long long databaseScope;
@property (retain, nonatomic) CKContainerID *containerID;
@property (retain, nonatomic) NSString *topmostParentOperationID;
@property (retain, nonatomic) NSString *topmostParentOperationGroupID;
@property (retain, nonatomic) NSString *applicationBundleIdentifierForContainerAccess;
@property (retain, nonatomic) NSString *applicationBundleIdentifierForNetworkAttribution;
@property (retain, nonatomic) NSString *applicationSecondaryID;
@property (retain, nonatomic) NSArray *zoneNames;
@property (retain, nonatomic) NSString *deviceHardwareID;
@property (retain, nonatomic) NSData *authPutResponse;
@property (retain, nonatomic) NSDictionary *authPutResponseHeaders;
@property (nonatomic) BOOL allowsCellularAccess;
@property (nonatomic) BOOL allowsExpensiveNetworkAccess;
@property (nonatomic) BOOL allowsPowerNapScheduling;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) long long clientQueuePriority;
@property (nonatomic) BOOL resolvedAutomaticallyRetryNetworkFailures;
@property (nonatomic) unsigned long long resolvedDiscretionaryNetworkBehavior;
@property (nonatomic) unsigned long long duetPreClearedMode;
@property (retain, nonatomic) C2MetricOptions *metricOptions;
@property (nonatomic) BOOL isCrossOwner;
@property (retain, nonatomic) NSNumber *cacheDeleteAvailableSpaceClass;
@property (nonatomic) BOOL shouldCloneFileInAssetCache;
@property (retain, nonatomic) id<C2NetworkingDelegate> networkingDelegate;
@property (nonatomic) unsigned long long networkServiceType;
@property (retain, nonatomic) CKOperationMMCSRequestOptions *MMCSRequestOptions;

- (id)initWithOperation:(id)a0;
- (BOOL)usesBackgroundSession;
- (id)CKPropertiesDescription;
- (id)description;
- (void).cxx_destruct;
- (id)MMCSOptions;

@end
