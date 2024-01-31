@class NSArray, NSString, CRNormalizedQuad, NSUUID;

@interface CRBlockOutputRegion : CRCompositeOutputRegion <CRLayoutBlockRegion>

@property BOOL canWrapToNextBlock;
@property (readonly) NSArray *layoutLines;
@property (readonly) unsigned long long layoutDirection;
@property (readonly) CRNormalizedQuad *boundingQuad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSUUID *uuid;

+ (id)blockWithBlock:(id)a0 children:(id)a1;
+ (id)blockWithLines:(id)a0 confidence:(int)a1 quad:(id)a2 baselineAngle:(double)a3;

- (unsigned long long)type;
- (void)removeLine:(id)a0;
- (BOOL)computesNumberOfLinesFromChildren;
- (id)joiningDelimiter;
- (id)regionsSuitableForDataDetectorOutput;

@end
