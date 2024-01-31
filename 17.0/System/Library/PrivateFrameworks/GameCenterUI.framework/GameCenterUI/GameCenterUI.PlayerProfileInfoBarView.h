@class NSArray;

@interface GameCenterUI.PlayerProfileInfoBarView : UIView <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ centerContentInScrollView;
    void /* unknown type, empty encoding */ infoItemPairs;
    void /* unknown type, empty encoding */ separators;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ gradient;
}

@property (nonatomic, readonly) NSArray *accessibilityInfoItemPairs;

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end
