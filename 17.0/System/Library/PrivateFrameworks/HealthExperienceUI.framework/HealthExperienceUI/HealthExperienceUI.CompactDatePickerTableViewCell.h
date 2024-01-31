@interface HealthExperienceUI.CompactDatePickerTableViewCell : UITableViewCell <HKOnboardingCompactDatePickerViewDelegate> {
    void /* unknown type, empty encoding */ item;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_compactPicker;
}

@property (nonatomic) struct CGPoint { double x0; double x1; } accessibilityActivationPoint;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)compactDatePickerView:(id)a0 didChangeValue:(id)a1;

@end
