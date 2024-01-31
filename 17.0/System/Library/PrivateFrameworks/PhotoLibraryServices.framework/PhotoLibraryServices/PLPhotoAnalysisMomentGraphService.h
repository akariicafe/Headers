@protocol PLPhotoAnalysisServiceProvider;

@interface PLPhotoAnalysisMomentGraphService : NSObject {
    id<PLPhotoAnalysisServiceProvider> _serviceProvider;
}

- (id)initWithServiceProvider:(id)a0;
- (void).cxx_destruct;
- (id)requestSearchIndexKeywordsForAssetCollectionUUIDs:(id)a0 ofType:(unsigned long long)a1 error:(id *)a2;
- (id)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)a0 ofType:(unsigned long long)a1 error:(id *)a2;
- (id)graphStatusWithError:(id *)a0;
- (void)performGraphIncrementalUpdateWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)performGraphRebuildWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)performMemoryNodesRebuildForCategory:(unsigned long long)a0 reply:(id /* block */)a1;
- (id)requestGraphSearchMetadataWithOptions:(id)a0 error:(id *)a1;
- (id)requestSearchableAssetUUIDsBySocialGroupForAssetCollectionUUIDs:(id)a0 ofType:(unsigned long long)a1 isFullAnalysis:(BOOL)a2 error:(id *)a3;
- (id)requestSynonymsDictionariesWithError:(id *)a0;
- (id)requestZeroKeywordsWithOptions:(id)a0 error:(id *)a1;

@end
