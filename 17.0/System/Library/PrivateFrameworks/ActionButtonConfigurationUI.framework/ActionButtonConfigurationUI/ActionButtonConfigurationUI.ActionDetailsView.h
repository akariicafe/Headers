@interface ActionButtonConfigurationUI.ActionDetailsView : UIView <ABActionSelectorContent> {
    void /* unknown type, empty encoding */ selectionHandler;
    void /* unknown type, empty encoding */ actions;
    void /* unknown type, empty encoding */ initialIndex;
    void /* unknown type, empty encoding */ primaryButtonViewModel;
    void /* unknown type, empty encoding */ emptyStateConfigureButtonViewModel;
    void /* unknown type, empty encoding */ configureButtonViewModel;
    void /* unknown type, empty encoding */ pageControl;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ emptyStateConfigureButton;
    void /* unknown type, empty encoding */ configureButton;
    void /* unknown type, empty encoding */ stackView;
    void /* unknown type, empty encoding */ stackViewScrollContainer;
    void /* unknown type, empty encoding */ primaryButton;
    void /* unknown type, empty encoding */ cancellableBag;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)pageControlValueChanged;

@end
