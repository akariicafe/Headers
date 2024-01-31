@class TLKLabel, TLKMultilineText;

@interface TLKEnlargedTitleView : TLKView

@property (retain, nonatomic) TLKLabel *titleLabel;
@property (retain, nonatomic) TLKLabel *subtitleLabel;
@property (retain, nonatomic) TLKMultilineText *title;
@property (retain, nonatomic) TLKMultilineText *subtitle;

- (void).cxx_destruct;
- (id)titleLabelText;
- (void)observedPropertiesChanged;
- (id)setupContentView;
- (id)subtitleLabelText;

@end
