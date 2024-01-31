@class UIColor, UILabel, UIActivityIndicatorView;

@interface SULoadingView : UIView {
    UILabel *_label;
    UIActivityIndicatorView *_progressIndicator;
    unsigned long long _style;
}

@property (nonatomic) long long activityIndicatorStyle;
@property (retain, nonatomic) UIColor *activityIndicatorColor;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *textShadowColor;

- (void)dealloc;
- (void)sizeToFit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setStyle:(unsigned long long)a0;
- (void)layoutSubviews;
- (void)_setupSubviews;
- (id)newProgressIndicator;
- (id)newTextLabel;

@end
