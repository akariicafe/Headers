@class UIImage;

@interface UIShadowView : UIView {
    UIImage *_image;
}

+ (id)topShadowImage;
+ (id)bottomShadowImage;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setShadowImage:(id)a0 forEdge:(unsigned long long)a1 inside:(BOOL)a2;

@end
