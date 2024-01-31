@class NSString;

@interface PXStoryPhotoAnalysisComposabilityScorer : NSObject <PXStoryAutoEditComposabilityScorer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)computeComposabilityScoresForDisplayAssets:(id)a0 error:(id *)a1;

@end
