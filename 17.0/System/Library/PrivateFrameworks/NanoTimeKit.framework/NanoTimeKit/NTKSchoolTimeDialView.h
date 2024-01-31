@class NSDictionary;

@interface NTKSchoolTimeDialView : UIView {
    unsigned long long _activeHour;
    double _ringWidth;
    NSDictionary *_hourLabels;
}

- (void).cxx_destruct;
- (id)_activeHourColor;
- (id)_inactiveHourColor;
- (void)_setupUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ringWidth:(double)a1;
- (void)setActiveHour:(unsigned long long)a0 animated:(BOOL)a1;

@end
