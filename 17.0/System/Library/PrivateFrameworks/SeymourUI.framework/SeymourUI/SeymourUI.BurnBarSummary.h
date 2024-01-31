@interface SeymourUI.BurnBarSummary : UIView {
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ burnBar;
    void /* unknown type, empty encoding */ scoreLabel;
    void /* unknown type, empty encoding */ tickLabels;
    void /* unknown type, empty encoding */ tickBars;
    void /* unknown type, empty encoding */ stringBuilder;
    void /* unknown type, empty encoding */ circleCenterXSubscription;
    void /* unknown type, empty encoding */ scoreMetric;
    void /* unknown type, empty encoding */ burnBarHeightConstraint;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
