@interface GameCenterUI.GKAddFriendsLockupView : UIView {
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ textLabel;
    void /* unknown type, empty encoding */ button;
    void /* unknown type, empty encoding */ metricsPageId;
    void /* unknown type, empty encoding */ metricsPageType;
    void /* unknown type, empty encoding */ addFriendsHandler;
}

@property (nonatomic, copy) id /* block */ addFriendsHandler;

- (void)didTapButton:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 friendState:(long long)a1 metricsPageId:(id)a2 metricsPageType:(id)a3;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end
