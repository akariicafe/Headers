@class NSDate;

@interface MedicationsHealthAppPlugin.InteractiveTimelineDayCell : UICollectionViewCell <CAAnimationDelegate> {
    void /* unknown type, empty encoding */ gregorianCalendar;
    void /* unknown type, empty encoding */ timelineDay;
    void /* unknown type, empty encoding */ startDate;
    void /* unknown type, empty encoding */ didUpdateFromTimelineDay;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dayOfWeekLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_formatter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_logIndicator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pill;
    void /* unknown type, empty encoding */ zoomLevel;
    void /* unknown type, empty encoding */ configuration;
}

@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic, readonly) NSDate *axTimelineDay;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)applyLayoutAttributes:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;

@end
