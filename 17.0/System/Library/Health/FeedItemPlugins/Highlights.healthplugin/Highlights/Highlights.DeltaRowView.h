@interface Highlights.DeltaRowView : UIView {
    void /* unknown type, empty encoding */ shouldForceStackLayout;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_leftGuide;
    void /* unknown type, empty encoding */ $__lazy_storage_$_leftValueLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_leftDateLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_rightGuide;
    void /* unknown type, empty encoding */ $__lazy_storage_$_rightValueLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_rightDateLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerLayoutGuide;
    void /* unknown type, empty encoding */ $__lazy_storage_$_currentLayout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cachedConstraintsByLayout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_deltaImageFont;
    void /* unknown type, empty encoding */ $__lazy_storage_$_deltaImageView;
}

- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;

@end
