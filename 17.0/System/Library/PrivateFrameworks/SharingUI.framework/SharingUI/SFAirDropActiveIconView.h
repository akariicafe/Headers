@class UIView;

@interface SFAirDropActiveIconView : UIImageView {
    UIView *_circleMaskView;
}

@property (nonatomic, getter=isMasked) BOOL masked;

+ (id)baseImage;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 grayscale:(BOOL)a1;

@end
