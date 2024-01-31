@interface MUAppleRatingRowSubtitleView : UIStackView {
    void /* unknown type, empty encoding */ $__lazy_storage_$_percentLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_rollingLabelsView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_ratingsLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lineTwoStackView;
    void /* unknown type, empty encoding */ usingTwoLineLayout;
    void /* unknown type, empty encoding */ isContentUpdateInProgress;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)contentSizeDidChange;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (id)initWithArrangedSubviews:(id)a0;
- (void)setPercentageString:(id)a0 ratingsValueString:(id)a1 ratingsValueAnimation:(long long)a2 ratingsString:(id)a3;
- (void)updateForSizeClassChange;

@end
