@class TSCHChartPieWedgeElement, NSArray, NSNumber;

@interface TSCHChartPieWedgeLayoutInfo : NSObject <NSCopying> {
    NSNumber *_enableCalloutLine;
}

@property (retain, nonatomic) TSCHChartPieWedgeElement *wedgeElement;
@property (copy, nonatomic) NSArray *pieLabels;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } combinedLabelRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } combinedLabelErasableFrame;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } combinedLabelTransformIntoPieChartCoordinateSpace;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } combinedLabelRectInChartCoordinateSpace;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } combinedLabelRectMidpointInChartCoordinateSpace;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } combinedLabelErasableFrameInChartCoordinateSpace;
@property (readonly, nonatomic) long long enableCalloutLineSetting;
@property (readonly, nonatomic) BOOL stackLabels;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGPoint { double x0; double x1; })pointAtLabelInChartCoordinateSpaceOnFarXSideTopYWithStartPoint:(struct CGPoint { double x0; double x1; })a0;
- (double)combinedLabelDistanceFromWedgeTip;
- (BOOL)combinedLabelIsOnLeftSide;
- (BOOL)combinedLabelOutsideWedge;
- (struct CGPoint { double x0; double x1; })combinedLabelRectBottomLeftCornerInChartCoordinateSpace;
- (struct CGPoint { double x0; double x1; })combinedLabelRectBottomRightCornerInChartCoordinateSpace;
- (struct CGPoint { double x0; double x1; })combinedLabelRectTopLeftCornerInChartCoordinateSpace;
- (struct CGPoint { double x0; double x1; })combinedLabelRectTopRightCornerInChartCoordinateSpace;
- (void)concatenateCombinedLabelTransformWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)initWithPieWedgeElement:(id)a0 pieLabels:(id)a1 combinedLabelTransformIntoPieChartCoordinateSpace:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (struct CGPoint { double x0; double x1; })pointAtLabelInChartCoordinateSpace;
- (struct CGPoint { double x0; double x1; })pointAtLabelInChartCoordinateSpaceOnCloseXSideBottomYWithStartPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })pointAtLabelInChartCoordinateSpaceOnCloseXSideMiddleY;
- (struct CGPoint { double x0; double x1; })pointAtLabelInChartCoordinateSpaceOnCloseXSideMiddleYWithStartPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })pointAtLabelInChartCoordinateSpaceOnCloseXSideTopYWithStartPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })pointAtLabelInChartCoordinateSpaceOnFarXSideBottomYWithStartPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })pointAtLabelInChartCoordinateSpaceOnFarXSideMiddleYWithStartPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)pointOutsidePieChart:(struct CGPoint { double x0; double x1; })a0;
- (void)realignPieLabels:(long long)a0;
- (void)updateToUseChartCoordinateSpaceWithChartBodyCenterPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })vectorFromWedgeTipToCombinedLabelRect;

@end
