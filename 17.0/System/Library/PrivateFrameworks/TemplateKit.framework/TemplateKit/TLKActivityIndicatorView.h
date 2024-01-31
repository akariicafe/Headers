@class TLKLabel, TLKMultilineText, UIActivityIndicatorView;

@interface TLKActivityIndicatorView : TLKView

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) TLKLabel *subtitleLabel;
@property (retain, nonatomic) TLKMultilineText *subtitle;

- (void)tlk_updateForAppearance:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)observedPropertiesChanged;
- (id)setupContentView;
- (id)subtitleLabelText;
- (BOOL)usesDefaultLayoutMargins;

@end
