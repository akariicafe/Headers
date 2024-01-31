@class UIKBScreenTraits, UIKBTree;

@interface UIKBDimmingView : UIView {
    UIKBTree *_keyplane;
}

@property (retain, nonatomic) UIKBScreenTraits *screenTraits;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)refreshStyleForKeyplane:(id)a0;

@end
