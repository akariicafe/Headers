@interface ClockPoster.WorldView : UIView {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ alarmComplicationLabel;
    void /* unknown type, empty encoding */ currentLocationClockLabel;
    void /* unknown type, empty encoding */ mapView;
    void /* unknown type, empty encoding */ dashboardView;
    void /* unknown type, empty encoding */ shouldHideClockComplication;
    void /* unknown type, empty encoding */ shouldHideAlarmComplication;
    void /* unknown type, empty encoding */ alarmTime;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;

@end
