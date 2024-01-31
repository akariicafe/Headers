@class NSArray, CRDetectedLineRegion;

@interface CRDetectedRecognizedRegionPair : NSObject

@property (retain) CRDetectedLineRegion *detectedLineRegion;
@property (retain) NSArray *recognizedTextRegions;

- (void).cxx_destruct;
- (id)initWithDetectedRegion:(id)a0 recognizedRegions:(id)a1;

@end
