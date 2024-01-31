@class UIButton, NSString, UILayoutGuide, MUPunchoutViewModel, UIView, UILabel, UIActivityIndicatorView;
@protocol MULabelViewProtocol;

@interface MUPunchoutView : UIView <MUActivityObserving> {
    UIView<MULabelViewProtocol> *_moreOnLabel;
    UILabel *_vendorNameLabel;
    UILayoutGuide *_layoutGuide;
    UIActivityIndicatorView *_spinner;
    UIButton *_menuButton;
}

@property (retain, nonatomic) MUPunchoutViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferredWidth;
+ (double)_intrinsicWidth;

- (void)_setupConstraints;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (void)beginAnimatingActivityIndicator;
- (void)endAnimatingActivityIndicatorWithError:(id)a0;
- (id)_attributedStringFromSymbol;
- (void)_updateLabelsWithAlpha:(double)a0;

@end
