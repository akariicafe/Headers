@class FCPersonalizationTreatment, NSString, NSDictionary, NSData, NSMutableDictionary, CKRecord, NSObject;
@protocol OS_dispatch_queue, FCOperationThrottler;

@interface FCPersonalizationData : FCPrivateDataController <FCOperationThrottlerDelegate, FCCoreConfigurationObserving, FCDerivedPersonalizationData, FCPersonalizationDataSource, FCPersonalizationDataGeneratorType, FCReadonlyAggregateStoreProviderType> {
    BOOL _attemptingUpload;
    NSMutableDictionary *_aggregates;
    CKRecord *_remoteRecord;
    NSObject<OS_dispatch_queue> *_accessQueue;
    FCPersonalizationTreatment *_treatment;
    id<FCOperationThrottler> _saveThrottler;
}

@property (readonly, nonatomic) NSData *pbData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long scoringType;
@property (readonly, nonatomic) double decayRate;
@property (readonly, nonatomic) NSDictionary *allAggregates;

+ (id)desiredKeys;
+ (unsigned long long)localStoreVersion;
+ (BOOL)requiresPushNotificationSupport;
+ (id)backingRecordZoneIDs;
+ (long long)commandQueueUrgency;
+ (void)configureKeyValueStoreForJSONHandling:(id)a0;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (id)backingRecordIDs;
+ (id)commandStoreFileName;
+ (id)localStoreFilename;
+ (BOOL)requiresHighPriorityFirstSync;
+ (BOOL)requiresBatchedSync;

- (void)configurationManager:(id)a0 configurationDidChange:(id)a1;
- (id)generateDerivedData;
- (id)init;
- (id)d_allGlobalAggregates;
- (void)operationThrottler:(id)a0 performAsyncOperationWithCompletion:(id /* block */)a1;
- (id)baselineAggregateWithConfigurableValues:(id)a0;
- (void)prepareAggregatesForUseWithCompletionHandler:(id /* block */)a0;
- (id)lookupAggregatesWith:(id)a0 creationBlock:(id /* block */)a1;
- (id)createAggregateWith:(id)a0 clicks:(double)a1 impressions:(double)a2;
- (void)loadLocalCachesFromStore;
- (id)initWithAggregates:(id)a0;
- (BOOL)canHelpRestoreZoneName:(id)a0;
- (void)syncWithCompletion:(id /* block */)a0;
- (void)activityObservingApplicationWillTerminate;
- (void)enumerateAggregatesUsingBlock:(id /* block */)a0;
- (id)localStoreMigrator;
- (void)clearPersonalizationData;
- (void)activityObservingApplicationWindowDidBecomeBackground;
- (id)aggregateForFeatureKey:(id)a0;
- (void)updateAggregatesWith:(id)a0 creationBlock:(id /* block */)a1 updateBlock:(id /* block */)a2;
- (id)aggregateStore;
- (id)recordsForRestoringZoneName:(id)a0;
- (void).cxx_destruct;
- (void)updateFeatures:(id)a0 withAction:(unsigned long long)a1 displayRank:(long long)a2 groupRank:(long long)a3 groupType:(long long)a4 individually:(BOOL)a5 configurableValues:(id)a6;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (id)aggregatesForFeatures:(id)a0;
- (id)aggregatesForFeatureKeys:(id)a0;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void)activityObservingApplicationWindowDidBecomeForeground;
- (void)d_allResults:(id /* block */)a0 completion:(id /* block */)a1;
- (void)modifyLocalAggregatesForFeatureKeys:(id)a0 withAction:(unsigned long long)a1 actionCount:(unsigned long long)a2 defaultClicks:(double)a3 defaultImpressions:(double)a4 impressionBias:(double)a5 groupBias:(double)a6;

@end
