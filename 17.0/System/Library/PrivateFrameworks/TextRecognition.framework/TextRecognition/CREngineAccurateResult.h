@class NSArray, CRRecognizedTextRegion;

@interface CREngineAccurateResult : NSObject

@property (readonly) NSArray *lines;
@property (retain) NSArray *blocks;
@property (retain) CRRecognizedTextRegion *titleRegion;
@property long long filteredFeatureCount;
@property (retain) NSArray *cachedLines;

- (void).cxx_destruct;

@end
