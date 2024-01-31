@interface SleepHealthUI.SleepScheduleComponentsEditView : UIView {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ componentsHeader;
    void /* unknown type, empty encoding */ clock;
    void /* unknown type, empty encoding */ timeInBed;
    void /* unknown type, empty encoding */ clockCaption;
    void /* unknown type, empty encoding */ clockWidthConstraint;
    void /* unknown type, empty encoding */ captionTopConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_formatter;
}

- (void)willMoveToWindow:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (id)accessibilityClockCaption;
- (id)accessibilityComponentsHeader;
- (void)clockDidChange:(id)a0;
- (id)accessibilityClock;
- (id)accessibilityTimeInBedLabel;

@end
