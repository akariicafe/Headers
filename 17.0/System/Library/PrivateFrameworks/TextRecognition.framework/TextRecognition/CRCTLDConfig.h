@interface CRCTLDConfig : NSObject

@property float allowedOverlap;
@property float minWhitespaceWidth;
@property float minWhitespaceHeight;
@property float qualityHeightFactor;
@property float qualityWidthFactor;
@property float minSubRectangleSize;
@property float minQuadrilateralRotation;
@property float minWhitespaceHeightForReadingOrder;
@property int maxRegions;
@property int maxQueueCapacity;
@property int numLookupElements;
@property int numPointsForSegmentsIntersection;
@property BOOL flatMergeJumps;
@property float angleThresholdForRotationCorrection;

@end
