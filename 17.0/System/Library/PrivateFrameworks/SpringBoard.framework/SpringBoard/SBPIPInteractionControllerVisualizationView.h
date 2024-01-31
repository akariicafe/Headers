@class _UIHyperregionUnion, NSMutableArray, UIView;

@interface SBPIPInteractionControllerVisualizationView : UIView {
    UIView *_containerView;
    UIView *_unionView;
    UIView *_mainGeometryView;
    UIView *_extendedGeometryView;
    UIView *_insetsGeometryView;
    UIView *_fakePIPView;
    NSMutableArray *_regionViews;
}

@property (retain, nonatomic) _UIHyperregionUnion *regionUnion;
@property (nonatomic) struct SBPIPPositionGeometryContext { struct CGSize { double width; double height; } pipCurrentSize; struct CGSize { double width; double height; } pipLastSteadySize; struct CGSize { double width; double height; } pipStashedSize; struct CGPoint { double x; double y; } pipAnchorPointOffset; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerBounds; struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets; struct UIEdgeInsets { double top; double left; double bottom; double right; } minimumPadding; struct UIEdgeInsets { double top; double left; double bottom; double right; } stashedMinimumPadding; unsigned long long offscreenCorners; long long orientation; } mainGeometryContext;
@property (nonatomic) struct SBPIPPositionGeometryContext { struct CGSize { double width; double height; } pipCurrentSize; struct CGSize { double width; double height; } pipLastSteadySize; struct CGSize { double width; double height; } pipStashedSize; struct CGPoint { double x; double y; } pipAnchorPointOffset; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerBounds; struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets; struct UIEdgeInsets { double top; double left; double bottom; double right; } minimumPadding; struct UIEdgeInsets { double top; double left; double bottom; double right; } stashedMinimumPadding; unsigned long long offscreenCorners; long long orientation; } extendedGeometryContext;
@property (nonatomic) struct SBPIPPositionInteractionStateContext { BOOL isStashed; BOOL isInteractive; BOOL hasActiveGesture; BOOL isFreelyPositionable; struct CGPoint { double x; double y; } projectedPosition; struct CGPoint { double x; double y; } initialPosition; struct CGPoint { double x; double y; } currentPosition; double currentPositionStashProgress; double projectedPositionStashProgress; } interactionContext;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_backgroundFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_unionFrame;

@end
