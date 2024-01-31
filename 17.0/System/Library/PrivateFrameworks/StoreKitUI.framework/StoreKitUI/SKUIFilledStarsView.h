@class NSMutableArray;

@interface SKUIFilledStarsView : UIView {
    NSMutableArray *_starViews;
}

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_starImageViewWithImage:(id)a0;
- (void)_setupStars;

@end
