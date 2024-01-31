@class NSArray, NSDictionary, NSString, NSError;

@interface PhotoAnalysis.MomentGraphService : _TtCs12_SwiftObject <PLPhotoAnalysisGenericServiceProtocol, PLPhotoAnalysisMomentGraphServiceProtocol> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ worker;
    void /* unknown type, empty encoding */ taskScheduler;
    void /* unknown type, empty encoding */ requestOrigin;
    void /* unknown type, empty encoding */ stateHolder;
    void /* unknown type, empty encoding */ operationManager;
    void /* unknown type, empty encoding */ _operationID;
}

- (void)cancelOperationsWithIdentifiers:(id)a0 reply:(id /* block */)a1;
- (void)requestAssetSearchKeywordsForAssetCollectionUUIDs:(NSArray *)a0 ofType:(unsigned long long)a1 reply:(void (^)(NSDictionary *, NSError *))a2;
- (void)requestSearchIndexKeywordsForAssetCollectionUUIDs:(NSArray *)a0 ofType:(unsigned long long)a1 reply:(void (^)(NSDictionary *, NSError *))a2;
- (void)performGraphIncrementalUpdateWithOptions:(NSDictionary *)a0 reply:(void (^)(NSError *))a1;
- (void)performGraphRebuildWithOptions:(NSDictionary *)a0 reply:(void (^)(NSError *))a1;
- (void)performMemoryNodesRebuildForCategory:(long long)a0 reply:(void (^)(NSError *))a1;
- (void)requestGraphSearchMetadataWithOptions:(NSDictionary *)a0 reply:(void (^)(NSDictionary *, NSError *))a1;
- (void)requestGraphStatusWithReply:(void (^)(NSString *, NSError *))a0;
- (void)requestSearchableAssetUUIDsBySocialGroupForAssetCollectionUUIDs:(NSArray *)a0 ofType:(unsigned long long)a1 isFullAnalysis:(BOOL)a2 reply:(void (^)(NSDictionary *, NSError *))a3;
- (void)requestSynonymsDictionariesWithReply:(void (^)(NSDictionary *, NSError *))a0;
- (void)requestZeroKeywordsWithOptions:(NSDictionary *)a0 reply:(void (^)(NSDictionary *, NSError *))a1;

@end
