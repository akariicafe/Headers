@class AKPageController, NSString, PKCanvasView, NSHashTable, UIGestureRecognizer, PKInk;
@protocol AKInkOverlayViewDelegate, PKRulerHostingDelegate;

@interface AKInkOverlayView : UIView <PKCanvasViewDelegate> {
    PKInk *_ink;
    NSHashTable *_reportedStrokes;
}

@property (weak) id drawingUndoTarget;
@property struct CGSize { double width; double height; } canvasSizeInPKDrawingSpace;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previousPageRectInAKModel;
@property (weak) AKPageController *pageController;
@property (retain) PKCanvasView *canvasView;
@property (weak) id<AKInkOverlayViewDelegate> delegate;
@property (copy) PKInk *ink;
@property (readonly, nonatomic) UIGestureRecognizer *drawingGestureRecognizer;
@property (readonly, nonatomic) UIGestureRecognizer *pinchGestureRecognizer;
@property (weak, nonatomic) id<PKRulerHostingDelegate> rulerHostingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromPageControllerModelSpace:(id)a1 toDrawingInCanvasViewSpace:(id)a2;
+ (id)newAKInkOverlayViewForCurrentPlatformWithPageController:(id)a0 drawingUndoTarget:(id)a1;
+ (id)newDrawingUndoTargetWithPageController:(id)a0;

- (void)willMoveToSuperview:(id)a0;
- (void)commonInit;
- (void)teardown;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (void)_canvasView:(id)a0 beganStroke:(id)a1;
- (void)_canvasView:(id)a0 cancelledStroke:(id)a1;
- (void)_canvasView:(id)a0 endedStroke:(id)a1;
- (BOOL)_canvasView:(id)a0 shouldBeginDrawingWithTouch:(id)a1;
- (void)canvasViewDidBeginDrawing:(id)a0;
- (void)canvasViewDidEndDrawing:(id)a0;
- (void)canvasViewDrawingDidChange:(id)a0;
- (id)updatedDrawingForPageRectUpdate;
- (void)_calculateFixedPixelSize:(struct CGSize { double x0; double x1; } *)a0 drawingScale:(double *)a1;
- (void)_updateCanvasViewInk;
- (void)_updatedSelectedStrokesWithColor:(id)a0;
- (BOOL)canvasNeedsUpdate;
- (void)commonPostInit;
- (id)initWithPageController:(id)a0 drawingUndoTarget:(id)a1;
- (void)removeStrokesFromDrawing:(id)a0;
- (void)setupInkView;

@end
