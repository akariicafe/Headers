@class NSMutableArray, PKCanvasView, UIGestureRecognizer, PKInk;
@protocol PKCanvasViewDelegate;

@interface PNPWizardScratchpadCanvasView : UIView {
    NSMutableArray *_snapshotImageViews;
    PKInk *_ink;
    id<PKCanvasViewDelegate> _canvasViewDelegate;
}

@property (nonatomic) BOOL showingSnapshot;
@property (weak, nonatomic) id<PKCanvasViewDelegate> delegate;
@property (readonly, nonatomic) PKCanvasView *canvasView;
@property (retain, nonatomic) PKInk *ink;
@property (readonly, nonatomic) UIGestureRecognizer *drawingGestureRecognizer;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_playClearAnimationWithImage:(id)a0;
- (void)clearDrawingAnimated;
- (void)prepareCanvasView;

@end
