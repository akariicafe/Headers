@class NSArray;

@interface TSCHChartPieLabelPlacement : NSObject {
    NSArray *_allWedgeLayoutInfos;
    NSArray *_allWedgeLayoutInfosSortedBySeriesIndex;
}

@property (readonly, nonatomic) NSArray *allWedgeLayoutInfos;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } titleRect;
@property (readonly, nonatomic) BOOL shouldPreventOverlapWithTitle;

- (void).cxx_destruct;
- (BOOL)calloutLineEndsOutsidePieWedge:(id)a0;
- (struct CGPoint { double x0; double x1; })calloutLineEndpointForWedgeLayoutInfo:(id)a0;
- (BOOL)calloutLineEndpointPastStartpoint:(id)a0;
- (long long)calloutLineRenderAmount:(id)a0 startLineEnd:(id)a1 endLineEnd:(id)a2 stroke:(id)a3;
- (struct CGPoint { double x0; double x1; })calloutLineStartpointForWedgeLayoutInfo:(id)a0;
- (double)distanceFromCenterToChordOfLength:(double)a0 wedgeAngle:(double)a1;
- (id)initWithArrayOfWedgeLayoutInfos:(id)a0;
- (id)initWithArrayOfWedgeLayoutInfos:(id)a0 titleRectInWedgeElementSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)lineEndLength:(id)a0 stroke:(id)a1;
- (double)minimumNecessaryDistanceFromWedgeTipForWedgeLayoutInfo:(id)a0;
- (double)minimumNecessaryDistanceFromWedgeTipToWedgeLabelToPreventOverlapForWedgeLayoutInfo:(id)a0 adjacentWedgeLayoutInfo:(id)a1;
- (id)newCalloutLinePaths:(id)a0 startLineEnd:(id)a1 outStartLineEndPath:(id *)a2 endLineEnd:(id)a3 outEndLineEndPath:(id *)a4 stroke:(id)a5 outStroke:(id *)a6 context:(struct CGContext { } *)a7 contextScale:(float)a8;
- (id)newPathForLineEnd:(id)a0 startPoint:(struct CGPoint { double x0; double x1; })a1 angle:(double)a2 stroke:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })paddedLabelRectWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })paddedTitleRectWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformOutwardsAlongWedgeBisectionForWedgeLayoutInfo:(id)a0 withMinimumNecessaryDistance:(double)a1;
- (id)updateLabelTransformsToPreventOverlap;

@end
