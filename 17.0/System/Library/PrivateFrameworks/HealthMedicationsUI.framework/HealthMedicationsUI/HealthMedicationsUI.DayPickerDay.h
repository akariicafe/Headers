@interface HealthMedicationsUI.DayPickerDay : UIControl {
    void /* unknown type, empty encoding */ day;
    void /* unknown type, empty encoding */ formatter;
    void /* unknown type, empty encoding */ background;
    void /* unknown type, empty encoding */ dayLabel;
}

@property (nonatomic) BOOL selected;

- (BOOL)isSelected;
- (void)traitCollectionDidChange:(id)a0;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;

@end
