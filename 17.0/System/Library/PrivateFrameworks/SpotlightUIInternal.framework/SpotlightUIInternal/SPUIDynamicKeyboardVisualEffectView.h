@class MTMaterialView, UIView;

@interface SPUIDynamicKeyboardVisualEffectView : UIView

@property (retain) UIView *keyboardVisualEffectView;
@property (retain) UIView *colorView;
@property (retain) MTMaterialView *featheredBlur;
@property (retain) UIView *gaussianBlurView;
@property (retain) UIView *gradientView;
@property (nonatomic) BOOL hideFeatheredBlur;
@property (nonatomic) BOOL hideVisualEffectView;
@property (nonatomic) double searchFieldHeight;

- (void)tlk_updateForAppearance:(id)a0;
- (id)init;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;

@end
