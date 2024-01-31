@class PHAsset, PHAssetCollection;
@protocol PGEventEnrichment;

@interface PGDefaultCollectionTitleGenerator : PGTitleGenerator

@property (readonly, nonatomic) PHAsset *keyAsset;
@property (readonly, nonatomic) PHAssetCollection *curatedAssetCollection;
@property (readonly, nonatomic) id<PGEventEnrichment> collection;
@property (nonatomic, getter=isDebug) BOOL debug;
@property (nonatomic) BOOL forDiagnostics;

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithManager:(id)a0 curationContext:(id)a1 result:(id /* block */)a2;
- (id)initWithCollection:(id)a0 keyAsset:(id)a1 curatedAssetCollection:(id)a2 titleGenerationContext:(id)a3;

@end
