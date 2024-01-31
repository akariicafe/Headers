@class NSArray, UIView;

@interface CKNicknameBannerView : UIView

@property (retain, nonatomic) UIView *swiftBanner;
@property (retain, nonatomic) NSArray *nicknameUpdates;
@property (nonatomic) unsigned long long style;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithStyle:(unsigned long long)a0 updates:(id)a1 useNamedTitles:(BOOL)a2 avatarImages:(id)a3 contacts:(id)a4 customImage:(id)a5 titleString:(id)a6 subtitleString:(id)a7 actionButtonTitle:(id)a8 actionButtonHandler:(id /* block */)a9 actionButtonMenuItems:(id)a10 xButtonHandler:(id /* block */)a11;

@end
