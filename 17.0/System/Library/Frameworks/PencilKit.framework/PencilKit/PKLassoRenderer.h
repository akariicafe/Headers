@class NSString, UIBezierPath, CAShapeLayer, PKStrokeSelection;
@protocol PKSelectionRenderingDelegate;

@interface PKLassoRenderer : NSObject <PKSelectionRendering> {
    CAShapeLayer *_lassoLayer;
    CAShapeLayer *_whiteLassoLayer;
    struct CGPoint { double x; double y; } _editMenuLocation;
    UIBezierPath *_lassoPath;
    PKStrokeSelection *_strokeSelection;
    id<PKSelectionRenderingDelegate> _renderingDelegate;
    id /* block */ _calculateSelectionHullBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)_accessibilityUserTestingChildren;
- (void).cxx_destruct;
- (void)_renderLiveSelectionPath:(struct CGPath { } *)a0 forStrokes:(id)a1 inDrawing:(id)a2 liveScrollOffset:(struct CGPoint { double x0; double x1; })a3;
- (void)_didBeginDraggingSelection;
- (void)_didEndDraggingSelection;
- (void)_setupSelectionAdornment;
- (void)_updateLassoForAccessibility:(id)a0;
- (id)adornmentLayer;
- (struct CGPoint { double x0; double x1; })editMenuLocation;
- (id)initForLiveSelectionWithRenderingDelegate:(id)a0;
- (id)initWithStrokeSelection:(id)a0 renderingDelegate:(id)a1;
- (id)lassoPath;

@end
