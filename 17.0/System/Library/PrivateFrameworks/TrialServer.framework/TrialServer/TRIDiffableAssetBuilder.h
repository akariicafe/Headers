@interface TRIDiffableAssetBuilder : NSObject

+ (id)buildAndSaveDiffableAssetsWithAssetIds:(id)a0 metadataForAssetId:(id)a1 artifactProvider:(id)a2 options:(id)a3 paths:(id)a4 assetsDownloadSize:(unsigned long long *)a5 perAssetIdCompletionBlockOnSuccess:(id /* block */)a6 perAssetIdCompletionBlockOnError:(id /* block */)a7 retryAfter:(id *)a8 error:(id *)a9;

@end
