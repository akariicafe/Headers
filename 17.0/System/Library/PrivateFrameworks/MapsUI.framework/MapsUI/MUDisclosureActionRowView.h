@class UILayoutGuide, UIImageView, UILabel, NSLayoutConstraint, UITapGestureRecognizer;
@protocol MUDisclosureActionViewModelProviding;

@interface MUDisclosureActionRowView : MUPlaceSectionRowView {
    UILayoutGuide *_titleValueLayoutGuide;
    UILabel *_titleLabel;
    UILabel *_valueLabel;
    UIImageView *_imageView;
    UIImageView *_disclosureView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSLayoutConstraint *_imageWidthConstraint;
}

@property (retain, nonatomic) id<MUDisclosureActionViewModelProviding> viewModel;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)_setupConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)_contentSizeDidChange;
- (double)_imageWidth;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (void)_buttonCellTapped;
- (void)_updateForPlatterAvailability;

@end
