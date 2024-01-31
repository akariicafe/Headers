@interface CRTextFeatureOrderV1 : NSObject <CRTextFeatureOrdering>

@property double angleThresholdForRotatedCrops;

+ (id)_sortedTextRegions:(id)a0;

- (id)initWithAngleThresholdForRotatedCrops:(double)a0;
- (id)orderAndGroupRegions:(id)a0;

@end
