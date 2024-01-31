@interface HealthExperienceUI.ResettableCalendarDateDisplayCell : UICollectionViewListCell {
    void /* unknown type, empty encoding */ item;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ dateLabel;
    void /* unknown type, empty encoding */ clearButton;
    void /* unknown type, empty encoding */ titleAndValueFieldSideBySideConstraints;
    void /* unknown type, empty encoding */ titleAndValueFieldStackedConstraints;
    void /* unknown type, empty encoding */ clearButtonWidthConstraint;
}

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didTapClear;

@end
