@class NSString, NSArray, NSDictionary;

@interface PGCLIPQueryAssetFilter : NSObject <PGAssetFilter>

@property (class, readonly, nonatomic) NSString *name;

@property (readonly, nonatomic) NSArray *positiveQueryEmbeddings;
@property (readonly, nonatomic) NSDictionary *cosineSimilarityThresholdByVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (double)cosineSimilarityBetweenQueryEmbedding:(id)a0 assetEmbedding:(id)a1;
- (id)filteredAssetsFromAssets:(id)a0;
- (id)initWithPositiveQueryEmbeddings:(id)a0 cosineSimilarityThresholdByVersion:(id)a1;
- (BOOL)passesWithAsset:(id)a0;

@end
