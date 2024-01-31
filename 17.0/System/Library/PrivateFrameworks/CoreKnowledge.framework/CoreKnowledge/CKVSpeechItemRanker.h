@class NSMutableArray, NSObject;
@protocol CKVDatabaseReadOnlyAccess;

@interface CKVSpeechItemRanker : NSObject {
    NSMutableArray *_datasets;
    long long _enumeratedItemCount;
}

@property (readonly, nonatomic) NSObject<CKVDatabaseReadOnlyAccess> *database;

+ (id)rankersForGroup:(id)a0 database:(id)a1 outOriginAppIds:(id *)a2 rankedItemCacheDirectory:(id)a3 error:(id *)a4;

- (id)initWithDatabase:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)addDataset:(id)a0;
- (unsigned int)calculateItemLimit;
- (id)datasets;
- (BOOL)enumerateRankedItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (long long)enumeratedItemCount;
- (id)getActiveTrialExperimentIds;
- (BOOL)hasDatasets;
- (BOOL)refreshRankedItemCacheWithDataProtectionClass:(int)a0;
- (BOOL)trialTreatmentApplied;

@end
