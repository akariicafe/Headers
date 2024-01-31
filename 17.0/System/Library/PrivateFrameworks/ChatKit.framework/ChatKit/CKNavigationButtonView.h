@class UIVisualEffect, NSString, UIImageView, UIImage, UILabel, UIVisualEffectView, UIButton;

@interface CKNavigationButtonView : UIButton

@property (nonatomic) BOOL wantsLongPress;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *defaultImage;
@property (retain, nonatomic) UIImage *disabledImage;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIVisualEffectView *vibrancyView;
@property (retain, nonatomic) UIVisualEffect *vibrancyEffect;
@property (retain, nonatomic) UIVisualEffect *disabledVibrancyEffect;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long joinButtonStyle;
@property (nonatomic) BOOL wantsVibrancy;
@property (readonly, nonatomic) UIButton *imageButton;

- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_imageForCurrentState;
- (void)_setupIconImageView;
- (id)initWithImage:(id)a0 disabledImage:(id)a1 text:(id)a2 wantsLongPress:(BOOL)a3;
- (id)initWithImage:(id)a0 text:(id)a1 wantsLongPress:(BOOL)a2;

@end
