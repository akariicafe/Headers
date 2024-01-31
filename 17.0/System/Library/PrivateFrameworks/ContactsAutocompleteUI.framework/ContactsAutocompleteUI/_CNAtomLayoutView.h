@class UIView;
@protocol CNAtomTextViewAtomLayout;

@interface _CNAtomLayoutView : UIView

@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } atomInsets;
@property (retain, nonatomic) UIView<CNAtomTextViewAtomLayout> *delegateView;

+ (id)layoutViewWithDelegateView:(id)a0;

- (id)viewForLastBaselineLayout;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionBounds;
- (id)initWithDelegateView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (void)setMaskBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
