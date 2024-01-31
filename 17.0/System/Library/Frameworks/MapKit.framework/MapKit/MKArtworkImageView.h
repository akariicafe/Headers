@class UIImageView, UIColor;
@protocol MKArtworkImageSource;

@interface MKArtworkImageView : UIImageView {
    UIImageView *_cachedBadgeView;
}

@property (readonly, nonatomic) UIImageView *badgeView;
@property (retain, nonatomic) id<MKArtworkImageSource> imageSource;
@property (retain, nonatomic) UIColor *primaryTintColor;
@property (retain, nonatomic) UIColor *secondaryTintColor;

- (void)_updateImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (void)traitEnvironment:(id)a0 didChangeTraitCollection:(id)a1;

@end
