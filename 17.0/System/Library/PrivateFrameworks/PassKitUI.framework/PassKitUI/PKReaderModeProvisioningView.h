@class UIProgressView, PKReaderModeHeaderView, NSString, PKReaderModeAnimationView, UIImage;

@interface PKReaderModeProvisioningView : UIView {
    PKReaderModeAnimationView *_animationView;
    PKReaderModeHeaderView *_headerView;
    UIProgressView *_progressView;
    BOOL _isProvisioningToWatch;
    NSString *_cardPlacement;
    UIImage *_plasticCardImage;
    UIImage *_digitalCardImage;
}

+ (id)watchImage:(BOOL)a0;

- (void)setState:(unsigned long long)a0 animated:(BOOL)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setDigitalCardImage:(id)a0;
- (void)setPlasticCardImage:(id)a0;
- (void)_loadAnimation;
- (id)initWithContext:(long long)a0 product:(id)a1 isWatch:(BOOL)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(long long)a1 product:(id)a2 isWatch:(BOOL)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 product:(id)a1;
- (void)setTransferringProgress:(double)a0 duration:(double)a1;

@end
