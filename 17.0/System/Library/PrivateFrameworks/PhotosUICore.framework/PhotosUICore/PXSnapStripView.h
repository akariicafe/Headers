@class NSArray, UIImageView;

@interface PXSnapStripView : UIView {
    UIImageView *_stripImageView;
}

@property (copy, nonatomic) NSArray *indicatorInfos;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateSnapStripImage;
- (void)_updateStripView:(BOOL)a0;
- (id)cubeGlyph;
- (void)setIndicatorInfos:(id)a0 animated:(BOOL)a1;

@end
