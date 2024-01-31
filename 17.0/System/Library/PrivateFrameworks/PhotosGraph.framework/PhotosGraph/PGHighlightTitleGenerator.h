@class PGGraphMomentNodeCollection, PGTitleGenerationContext, PHAsset, PHAssetCollection, PGTitleTuple;
@protocol PGEventEnrichment;

@interface PGHighlightTitleGenerator : NSObject {
    PGTitleGenerationContext *_titleGenerationContext;
}

@property (retain, nonatomic) id<PGEventEnrichment> collection;
@property (retain, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (retain, nonatomic) PHAssetCollection *curatedAssetCollection;
@property (retain, nonatomic) PHAsset *keyAsset;
@property (nonatomic) BOOL createVerboseTitle;
@property (retain, nonatomic) PGTitleTuple *titleTuple;

+ (id)commonMeaningLabelForTitleUsingMomentNodes:(id)a0;
+ (id)meaningLabelsSortedByPriority;

- (void).cxx_destruct;
- (void)_generateTitleTuples;
- (id)initWithCollection:(id)a0 curatedAssetCollection:(id)a1 keyAsset:(id)a2 createVerboseTitle:(BOOL)a3 titleGenerationContext:(id)a4;
- (id)initWithCollection:(id)a0 filteredMomentNodes:(id)a1 curatedAssetCollection:(id)a2 keyAsset:(id)a3 createVerboseTitle:(BOOL)a4 titleGenerationContext:(id)a5;

@end
