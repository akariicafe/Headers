@interface PaperKit.CompactTextStyleView : UIControl <UIPopoverPresentationControllerDelegate> {
    void /* unknown type, empty encoding */ viewControllerProvider;
    void /* unknown type, empty encoding */ textStyleView;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ image;
}

@property (nonatomic) BOOL highlighted;

- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)isHighlighted;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)didTapSelf;

@end
