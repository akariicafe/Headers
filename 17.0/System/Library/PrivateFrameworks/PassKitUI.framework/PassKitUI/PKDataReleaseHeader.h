@class UIImageView, UIVisualEffectView, UILabel, UIView, UIButton;
@protocol PKDataReleaseHeaderDelegate;

@interface PKDataReleaseHeader : UIView {
    id<PKDataReleaseHeaderDelegate> _delegate;
    UILabel *_label;
    UIButton *_dismissButton;
    UIImageView *_logo;
    UIVisualEffectView *_headerMaterial;
    UIView *_separator;
}

@property (nonatomic) double backgroundViewAlpha;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)layoutSubviews;
- (void)_dismiss;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
