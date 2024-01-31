@interface CRLatinLowConfidenceTextFeatureFilterV2 : NSObject <CRSingleTextFeatureFiltering>

- (BOOL)shouldFilterRegion:(id)a0;
- (BOOL)shouldFilterRegionBasedOnGeometry:(id)a0 closestDistance:(double)a1;

@end
