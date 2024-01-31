@class NSString, _UIVisualEffectBackdropView, UIAction, UIVisualEffectView, UIButton;

@interface SFStartPageFooterCell : UICollectionViewCell {
    UIButton *_button;
    UIVisualEffectView *_buttonBackgroundView;
}

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (retain, nonatomic) UIAction *action;
@property (retain, nonatomic) _UIVisualEffectBackdropView *backdropCaptureView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)primaryActionTriggered:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateVibrancy;

@end
