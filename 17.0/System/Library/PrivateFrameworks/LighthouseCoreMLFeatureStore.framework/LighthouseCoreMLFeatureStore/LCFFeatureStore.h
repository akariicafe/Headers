@class LCFDatabaseConnection, NSString, LCFBiomeManager;

@interface LCFFeatureStore : NSObject

@property (readonly, nonatomic) LCFBiomeManager *biomeManagerLabeledDataStore;
@property (readonly, nonatomic) LCFDatabaseConnection *dbFeatureStore;
@property (readonly, nonatomic) BOOL useSqlite;
@property (readonly, nonatomic) NSString *featureStoreKey;

- (void).cxx_destruct;
- (id)init:(id)a0 url:(id)a1 useSqlite:(BOOL)a2;
- (id)getFeatureVector:(id)a0 atTime:(id)a1 option:(unsigned long long)a2;
- (id)featureProviderFromfeatureSet:(id)a0 featureNames:(id)a1;
- (id)getFeatureSets:(id)a0 startDate:(id)a1 endDate:(id)a2 option:(unsigned long long)a3;
- (id)getFeatureVector:(id)a0 option:(unsigned long long)a1;
- (id)getFeatureVectorTimestamps;
- (id)getFeatureVectorWithStoreEvents:(id)a0 storeEventsInReversedOrder:(id)a1 option:(unsigned long long)a2;
- (id)getFeatureVectors:(id)a0 option:(unsigned long long)a1;
- (id)getFeatureVectors:(id)a0 startDate:(id)a1 endDate:(id)a2 option:(unsigned long long)a3;
- (id)getMultiArrayFeatureVectors:(id)a0 vectorName:(id)a1 srcLabelName:(id)a2 destLabelName:(id)a3 option:(unsigned long long)a4;
- (id)getMultiArrayFeatureVectors:(id)a0 vectorName:(id)a1 srcLabelName:(id)a2 destLabelName:(id)a3 startDate:(id)a4 endDate:(id)a5 option:(unsigned long long)a6;
- (BOOL)pruneFrom:(id)a0 endDate:(id)a1 option:(unsigned long long)a2;
- (BOOL)updateFeatureSet:(id)a0;
- (BOOL)updateFeatureSet:(id)a0 featureVestion:(id)a1 featureValues:(id)a2;

@end
