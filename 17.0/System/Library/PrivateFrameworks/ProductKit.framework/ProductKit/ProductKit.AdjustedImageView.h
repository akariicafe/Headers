@interface ProductKit.AdjustedImageView : UIImageView {
    void /* unknown type, empty encoding */ startedHandler;
    void /* unknown type, empty encoding */ completedHandler;
    void /* unknown type, empty encoding */ adjustments;
}

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithImage:(id)a0 highlightedImage:(id)a1;

@end
