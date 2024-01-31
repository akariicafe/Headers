@class OFUIViewController, NSMutableArray;

@interface OFViewProxy : UIView {
    NSMutableArray *_layoutSteps;
    struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; } *_layoutInfo;
}

@property (nonatomic) OFUIViewController *viewControllerProxy;
@property (nonatomic, getter=isMagicLayoutEnabled) BOOL magicLayoutEnabled;

- (void)commonInit;
- (void)dealloc;
- (void)setAnchorPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)addLayoutSteps:(id)a0;
- (void)addLayoutStep:(id)a0;
- (void)runMagicLayout;

@end
