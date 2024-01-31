@class CKVIndexManager;

@interface CKVDatabaseSearcher : NSObject {
    CKVIndexManager *_idxMgr;
}

+ (id)_datasetRowIdToRecordMap:(id)a0 error:(id *)a1;
+ (BOOL)enumerateAllItemsOfDataset:(id)a0 database:(id)a1 batchSize:(unsigned long long)a2 error:(id *)a3 usingBlock:(id /* block */)a4;
+ (id)_datasetRecordForOriginAppId:(id)a0 itemType:(long long)a1 database:(id)a2 error:(id *)a3;
+ (id)_datasetRowIdToDatasetHashMap:(id)a0;
+ (BOOL)_enumerateLocalItemsWithBatchSize:(unsigned long long)a0 offset:(unsigned long long)a1 enumerateAll:(BOOL)a2 database:(id)a3 error:(id *)a4 usingBlock:(id /* block */)a5;
+ (BOOL)_selectContentAndProduceItem:(id *)a0 withProvenanceRecord:(id)a1 database:(id)a2 error:(id *)a3;
+ (BOOL)_selectContentRecord:(id *)a0 withDatasetRowId:(id)a1 withContentHash:(id)a2 database:(id)a3 error:(id *)a4;
+ (id)_selectItemForLocalInstance:(id)a0 outInstanceHash:(id *)a1 database:(id)a2 error:(id *)a3;
+ (BOOL)_selectProvenanceRecord:(id *)a0 withProvenanceRowId:(id)a1 database:(id)a2 error:(id *)a3;
+ (id)countDatasetItems:(id)a0 database:(id)a1 error:(id *)a2;
+ (BOOL)enumerateAllLocalItemsWithBatchSize:(unsigned long long)a0 database:(id)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
+ (BOOL)enumerateLocalItemsOfDataset:(id)a0 database:(id)a1 batchSize:(unsigned long long)a2 uptoRank:(id)a3 error:(id *)a4 usingBlock:(id /* block */)a5;
+ (id)selectAllDatasets:(id)a0 error:(id *)a1;
+ (id)selectAllDatasetsFromDatabases:(id)a0 outDatasetCount:(unsigned int *)a1 error:(id *)a2;
+ (id)selectDatasetsWithItemTypes:(id)a0 database:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (BOOL)_enumerateResultsOfFTSSearch:(id)a0 searchCriteria:(id)a1 sortByRelevance:(BOOL)a2 error:(id *)a3 usingBlock:(id /* block */)a4;
- (id)_selectItemsWithRecordIds:(id)a0 databaseConnection:(id)a1 error:(id *)a2;
- (id)computeAllDatasetStatistics;
- (BOOL)enumerateLocalItemsBatchWithSize:(unsigned long long)a0 offset:(unsigned long long)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (BOOL)enumerateLocalItemsLastModifiedForOriginAppId:(id)a0 itemType:(long long)a1 batchSize:(unsigned long long)a2 error:(id *)a3 usingBlock:(id /* block */)a4;
- (id)initWithIndexManager:(id)a0;
- (id)searchLocalFTSWithCriteria:(id)a0 sortByRelevance:(BOOL)a1 error:(id *)a2;
- (id)selectLocalDeletedAppSpecificDatasetOriginAppIdsWithItemType:(long long)a0 batchSize:(unsigned long long)a1 error:(id *)a2;

@end
