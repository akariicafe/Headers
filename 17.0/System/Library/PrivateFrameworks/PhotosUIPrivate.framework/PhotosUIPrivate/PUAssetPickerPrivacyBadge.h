@class UIFont, NSString, UILabel, PUAssetPickerBadgeIconView;

@interface PUAssetPickerPrivacyBadge : UIVisualEffectView

@property (readonly, nonatomic) PUAssetPickerBadgeIconView *iconView;
@property (readonly, nonatomic) UILabel *label;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imageFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } labelFrame;
@property (readonly, nonatomic) UIFont *labelFont;
@property (readonly, nonatomic) NSString *labelText;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)flipToPrivacyIconAndDismissAfterDelay:(double)a0 completion:(id /* block */)a1;

@end
