@class NSString, NSArray, UILabel, SFBannerBackgroundView, UIButton;

@interface SFBannerCell : UICollectionViewCell {
    SFBannerBackgroundView *_backgroundView;
    UIButton *_dismissButton;
    UILabel *_messageLabel;
    NSArray *_minimalLayoutConstraints;
    NSArray *_prominentLayoutConstraints;
    UILabel *_titleLabel;
}

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (nonatomic) long long bannerStyle;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void)configureUsingBanner:(id)a0;
- (id)focusEffect;
- (id)initWithStyle:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateStyle;
- (void)layoutSubviews;
- (void)_dismiss:(id)a0;
- (id)initWithCoder:(id)a0;

@end
