@class UILabel, UIActivityIndicatorView;

@interface PKPGSVSectionHeader_BackgroundProvisioningHintView : UIView {
    UILabel *_backgroundProvisioningIndicatorLabel;
    UIActivityIndicatorView *_backgroundProvisioningActivityIndicator;
}

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_layoutSubviewsInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;

@end
