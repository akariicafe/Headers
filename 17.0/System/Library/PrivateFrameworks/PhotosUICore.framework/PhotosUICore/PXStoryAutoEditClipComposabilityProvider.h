@class NSError, NSObject;
@protocol PXStoryAutoEditComposabilityScorer, PXStoryComposabilityResults, OS_os_log, PXStoryChapterCollection, PXDisplayAssetFetchResult;

@interface PXStoryAutoEditClipComposabilityProvider : NSObject {
    id<PXStoryComposabilityResults> _similarityScoreResults;
    id<PXStoryComposabilityResults> _cropScoreResults;
    id<PXStoryComposabilityResults> _composabilityResults;
    NSObject<OS_os_log> *_log;
}

@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> displayAssets;
@property (readonly, nonatomic) id<PXStoryChapterCollection> chapterCollection;
@property (readonly, nonatomic) id<PXStoryAutoEditComposabilityScorer> cropQualityScorer;
@property (retain, nonatomic) id<PXStoryAutoEditComposabilityScorer> similarityScorer;
@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) NSError *error;

- (id)diagnosticDescription;
- (id)results;
- (void).cxx_destruct;
- (void)_computeComposabilityScores;
- (struct { float x0; float x1; })composabilityScoresForDisplayAssetIndex:(unsigned long long)a0;
- (id)initWithDisplayAssets:(id)a0 chapterCollection:(id)a1;

@end
