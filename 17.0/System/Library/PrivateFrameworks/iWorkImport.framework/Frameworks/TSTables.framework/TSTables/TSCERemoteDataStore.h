@class TSCERemoteDataValueMap, TSCECalculationEngine, NSMutableDictionary, TSCERemoteDataSpecifierSet, NSOperationQueue, NSMutableSet, TSCERemoteDataCoordinator, NSObject;
@protocol OS_dispatch_queue, TSCERemoteDataStoreDelegate, OS_dispatch_semaphore;

@interface TSCERemoteDataStore : TSPObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSOperationQueue *updateQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *tspSemaphore;
@property (readonly, nonatomic) TSCERemoteDataCoordinator *coordinator;
@property (readonly, nonatomic) TSCERemoteDataValueMap *remoteDataMap;
@property (readonly, nonatomic) NSMutableDictionary *cachedStocks;
@property (readonly, nonatomic) TSCERemoteDataSpecifierSet *interestingKeys;
@property (nonatomic) BOOL hasInterestingKeys;
@property (readonly, nonatomic) NSMutableDictionary *ownerMap;
@property (nonatomic) BOOL registeredWithCoordinator;
@property (nonatomic) double remoteDataSyncKey;
@property (retain, nonatomic) NSMutableSet *unSyncedStocks;
@property (readonly, nonatomic) BOOL hasArchivableState;
@property (readonly, nonatomic) BOOL hasFullyPopulatedCache;
@property (weak, nonatomic) id<TSCERemoteDataStoreDelegate> delegate;
@property (weak, nonatomic) TSCECalculationEngine *calculationEngine;

- (void)dealloc;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)unregisterWithCoordinator;
- (void)addRemoteDataInterest:(id)a0 forOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)allQuotes;
- (id)allRemoteData;
- (id)cachedQuoteForSymbol:(id)a0;
- (id)initWithContext:(id)a0 calculationEngine:(id)a1;
- (id)p_dictionaryForRemoteData:(id)a0;
- (void)p_initializeQueue;
- (BOOL)p_isInCollaborationMode;
- (void)p_recursiveWriteWillModify:(BOOL)a0 withBlock:(id /* block */)a1;
- (struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[32]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[11]; } x0; unsigned char x1; })p_tsceValueFromTsceCellValue:(id)a0;
- (id)p_updateCachesWithMap:(id)a0 quotes:(id)a1 overwriteValues:(BOOL)a2;
- (void)registerWithCoordinator;
- (void)remoteDataDidUpdateValues:(id)a0 quotes:(id)a1;
- (void)removeRemoteDataInterest:(id)a0 forOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)updateCachedStocksFromKnownStocks:(id)a0;
- (void)updateCachedStocksIntoStore:(id)a0;
- (void)updateWithRemoteDataMap:(id)a0 quotes:(id)a1 syncKey:(double)a2;
- (struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[32]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[11]; } x0; unsigned char x1; })valueForRemoteData:(id)a0;

@end
