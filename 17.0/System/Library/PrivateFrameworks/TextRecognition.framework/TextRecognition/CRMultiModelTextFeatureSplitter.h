@class CRRecognizerConfiguration;

@interface CRMultiModelTextFeatureSplitter : NSObject

@property (retain) CRRecognizerConfiguration *configuration;

+ (id)_legacySortTextRegions:(id)a0 point:(struct CGPoint { double x0; double x1; })a1 angle:(float)a2 sortingWithinLine:(BOOL)a3;
+ (id)_recognizerRegionsFromLineRegions:(id)a0;
+ (BOOL)_regionsAreLikelyStackedTextResults:(id)a0;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)combineRegions:(id)a0 lineRegion:(id)a1;
- (void)enumerateLineRegions:(id)a0 usingBlock:(id /* block */)a1;
- (id)groupLineRegions:(id)a0;
- (id)groupLineRegions:(id)a0 tableGroups:(id)a1;
- (id)pruneAndFilterLineRegions:(id)a0 recognitionResult:(id)a1;
- (id)pruneLineRegions:(id)a0 recognitionResult:(id)a1;

@end
