@interface ClockPoster.ClockLabel : CLKUITimeLabel {
    void /* unknown type, empty encoding */ observingOverrideDate;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (id)initWithTimeLabelOptions:(unsigned long long)a0 forDevice:(id)a1;
- (id)initWithTimeLabelOptions:(unsigned long long)a0 forDevice:(id)a1 clockTimer:(id)a2;
- (id)initWithTimeLabelOptions:(unsigned long long)a0;

@end
