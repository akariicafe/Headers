@class UIColor, UITableViewCell, UIImageView;

@interface UITableViewCellEditControl : UIControl {
    UITableViewCell *_cell;
    UIImageView *_imageView;
    UIImageView *_shadowView;
    double _focalY;
    double _focalHeight;
    unsigned char _style : 2;
    unsigned char _rotated : 1;
    unsigned char _rotating : 1;
    unsigned int _reserved : 27;
}

@property (nonatomic, getter=isRotated) BOOL rotated;
@property (readonly, nonatomic) BOOL wantsMaskingWhileAnimatingDisabled;
@property (readonly, nonatomic) BOOL wantsImageShadow;
@property (retain, nonatomic) UIColor *accessoryTintColor;
@property (retain, nonatomic) UIColor *accessoryBackgroundColor;

- (id)viewForLastBaselineLayout;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_updateImageView;
- (id)viewForFirstBaselineLayout;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)_imageView;
- (BOOL)isRotating;
- (id)initWithTableViewCell:(id)a0 editingStyle:(long long)a1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })defaultSize;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0;
- (id)_renderedImage;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_createImageViewIfNecessary;
- (id)_currentImage;
- (id)_deleteImage;
- (id)_insertImage;
- (id)_multiSelectNotSelectedImage;
- (id)_multiSelectSelectedImage;
- (void)_multiselectColorChanged;
- (id)_shadowImage;
- (void)_toggleRotate;
- (void)_toggleRotateAnimationDidStop;
- (void)adjustLayoutForFocalRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setRotated:(BOOL)a0 animated:(BOOL)a1;

@end
