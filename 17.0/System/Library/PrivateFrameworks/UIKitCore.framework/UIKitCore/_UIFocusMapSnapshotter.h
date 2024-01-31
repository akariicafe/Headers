@class _UIFocusRegionContentAttributes, UIFocusSystem, _UIFocusSearchInfo, _UIFocusRegion, _UIFocusMovementInfo;
@protocol UICoordinateSpace, _UIFocusRegionContainer;

@interface _UIFocusMapSnapshotter : NSObject {
    BOOL _snapshotFrameIsEmpty;
}

@property (retain, nonatomic) _UIFocusSearchInfo *searchInfo;
@property (readonly, weak, nonatomic) UIFocusSystem *focusSystem;
@property (readonly, weak, nonatomic) id<_UIFocusRegionContainer> rootContainer;
@property (readonly, weak, nonatomic) id<UICoordinateSpace> coordinateSpace;
@property (readonly, copy, nonatomic) _UIFocusRegionContentAttributes *contentAttributes;
@property (retain, nonatomic) _UIFocusRegion *focusedRegion;
@property (weak, nonatomic) id<_UIFocusRegionContainer> regionsContainer;
@property (retain, nonatomic) _UIFocusMovementInfo *movementInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } snapshotFrame;
@property (nonatomic) BOOL clipToSnapshotRect;
@property (nonatomic) BOOL ignoresRootContainerClippingRect;

- (id)init;
- (void).cxx_destruct;
- (id)captureSnapshot;
- (id)_searchAreaForContainerSearchRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFocusSystem:(id)a0 rootContainer:(id)a1 coordinateSpace:(id)a2 searchInfo:(id)a3 ignoresRootContainerClippingRect:(BOOL)a4;

@end
