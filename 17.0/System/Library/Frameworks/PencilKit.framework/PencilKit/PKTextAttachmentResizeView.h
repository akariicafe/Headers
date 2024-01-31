@class PKDrawingAdjustmentKnob, UIView;
@protocol PKTextAttachmentResizeViewDelegate;

@interface PKTextAttachmentResizeView : UIView

@property (class, readonly, nonatomic) double resizeHitSize;

@property (retain, nonatomic) PKDrawingAdjustmentKnob *knobView;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UIView *separatorHighlightedView;
@property (weak, nonatomic) id<PKTextAttachmentResizeViewDelegate> delegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalDrawingBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalViewBounds;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } originalContentInset;
@property (readonly, nonatomic) BOOL top;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) BOOL shown;
@property (readonly, nonatomic) double resizeContentInset;

- (void)handleGesture:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)drawingScrollViewDidScroll:(id)a0;
- (id)initAtTop:(BOOL)a0 delegate:(id)a1;
- (void)layoutInsideSuperview;
- (void)show:(BOOL)a0 enabled:(BOOL)a1 animated:(BOOL)a2;

@end
