@class NSString;

@interface UIKeyboardCandidateInlineFloatingView : UIView

@property (copy, nonatomic) NSString *inlineText;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inlineRect;
@property (nonatomic) BOOL inlineRectIsVertical;
@property (nonatomic) double maxX;
@property (nonatomic) double extendedStateAdditionalHeight;
@property (nonatomic) struct CGSize { double width; double height; } preferredSize;
@property (readonly, nonatomic, getter=isReducedWidth) BOOL reducedWidth;
@property (nonatomic) int position;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previousCollapsedFrame;
@property (nonatomic) int adjustMode;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } extraInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } cellPadding;

- (id)traitCollection;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)adjustFrameForInlineText:(id)a0 inlineRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 maxX:(double)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedFrameFromDesiredFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textHeight:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedFrameFromDesiredFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textWidth:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustedInlineRectFromInlineText:(id)a0 inlineRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)isAcceptableFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 afterScrollBy:(double)a1;
- (void)setInlineText:(id)a0 inlineRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 maxX:(double)a2 layout:(BOOL)a3;
- (BOOL)shouldExtendUpwards;

@end
