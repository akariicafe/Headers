@interface VCPAnalysisProgressQuery : NSObject

+ (int)queryProgress:(float *)a0 forPhotoLibrary:(id)a1 andTaskID:(unsigned long long)a2 withExtendTimeoutBlock:(id /* block */)a3;
+ (int)queryProgressDetail:(id *)a0 forPhotoLibrary:(id)a1 andTaskID:(unsigned long long)a2 withExtendTimeoutBlock:(id /* block */)a3;
+ (int)queryCachedFaceAnalysisProgress:(id *)a0 forPhotoLibrary:(id)a1 withExtendTimeoutBlock:(id /* block */)a2;
+ (BOOL)_screenProgress;
+ (unsigned long long)_countAnalysisWithAssetBatch:(id)a0 andDatabase:(id)a1 andTaskID:(unsigned long long)a2;
+ (unsigned long long)_countEmbeddingAnalysisWithAssetBatch:(id)a0;
+ (unsigned long long)_countFaceAnalysisWithAssetBatch:(id)a0;
+ (unsigned long long)_countFailuresWithAssetBatch:(id)a0 andDatabase:(id)a1 andTaskID:(unsigned long long)a2;
+ (void)_countMediaAnalysisWithAssetBatch:(id)a0 andDatabase:(id)a1 analyzedCount:(unsigned long long *)a2 completeAnalyzedCount:(unsigned long long *)a3 partialAnalyzedCount:(unsigned long long *)a4;
+ (unsigned long long)_countOCRAnalysisWithAssetBatch:(id)a0;
+ (unsigned long long)_countPECAnalysisWithAssetBatch:(id)a0;
+ (unsigned long long)_countSceneAnalysisWithAssetBatch:(id)a0;
+ (unsigned long long)_countVisualSearchAnalysisWithAssetBatch:(id)a0;
+ (id)_processedPredicateForTaskID:(unsigned long long)a0;
+ (int)_queryProgressDetailExpress:(id *)a0 forPhotoLibrary:(id)a1 andTaskID:(unsigned long long)a2;
+ (int)_queryProgressDetailExpressEmbeddingAnalysis:(id *)a0 forPhotoLibrary:(id)a1;
+ (int)_scanPhotoLibrary:(id)a0 withTaskID:(unsigned long long)a1 statistics:(id *)a2 andExtendTimeoutBlock:(id /* block */)a3;
+ (unsigned long long)_vipStatusForPhotoLibrary:(id)a0 andType:(unsigned long long)a1;
+ (void)reportProgressForPhotoLibrary:(id)a0 taskID:(unsigned long long)a1 logMessage:(id)a2 withExtendTimeoutBlock:(id /* block */)a3;

@end
