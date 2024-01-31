@class NSString, NSDateInterval;

@interface HDCloudSyncStateDoseEventUpdater : NSObject

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, copy, nonatomic) NSString *key;
@property (nonatomic) struct { int minimum; int current; } supportedSyncVersionRange;
@property (retain, nonatomic) NSDateInterval *timeWindow;

+ (id)_sampleType;
+ (id)_codableSyncStateFromExistingSyncState:(id)a0 forDomain:(id)a1 key:(id)a2;
+ (BOOL)_fetchPersistedDeletedSamples:(id *)a0 withSampleUUIDs:(id)a1 transaction:(id)a2 timeWindow:(id)a3 error:(id *)a4;
+ (BOOL)_fetchPersistedDoseEvents:(id *)a0 transaction:(id)a1 timeWindow:(id)a2 error:(id *)a3;
+ (id)_flattenCodableCollectionByProvenance:(id)a0;
+ (BOOL)_generateSyncCodableContributors:(id *)a0 fromCollectionByProvenance:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)_generateSyncCodableDevices:(id *)a0 fromCollectionByProvenance:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)_persistSampleOriginsFromCodableCollection:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)_sampleUUIDsFromCodableCollection:(id)a0;

- (void).cxx_destruct;
- (BOOL)updateDataWithStateStorage:(id)a0 transaction:(id)a1 error:(id *)a2;
- (long long)_decodeCloudData:(id)a0 ofClass:(Class)a1 forKey:(id)a2 version:(long long)a3 codableSyncState:(id *)a4 codableCollection:(id *)a5 error:(id *)a6;
- (long long)_decodeData:(id)a0 forKey:(id)a1 decodedCodableSyncState:(id *)a2 error:(id *)a3;
- (id)_healthObjectUUIDsFromMergedStateSyncCollection:(id)a0;
- (id)_orderCollectionsByOldestCreationDate:(id)a0;
- (id)_orderDeletedCollectionsByOldestCreationDate:(id)a0;
- (id)initWithDomain:(id)a0 key:(id)a1 timeWindow:(id)a2;

@end
