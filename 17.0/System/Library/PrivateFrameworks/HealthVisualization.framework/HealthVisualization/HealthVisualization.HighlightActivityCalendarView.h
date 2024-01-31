@interface HealthVisualization.HighlightActivityCalendarView : NUIContainerGridView <_HKWheelchairUseCharacteristicCacheObserver> {
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ longWeekdayStrings;
    void /* unknown type, empty encoding */ shortWeekdayStrings;
    void /* unknown type, empty encoding */ currentWeekdayStringLength;
    void /* unknown type, empty encoding */ currentLabelMaximumContentSizeCategory;
    void /* unknown type, empty encoding */ $__lazy_storage_$_ringsRenderer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_unitPreferenceController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_displayTypeController;
}

- (void)wheelchairUseCharacteristicCache:(id)a0 wheelchairUsageDidChange:(BOOL)a1;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (id)initWithArrangedSubviewRows:(id)a0;

@end
