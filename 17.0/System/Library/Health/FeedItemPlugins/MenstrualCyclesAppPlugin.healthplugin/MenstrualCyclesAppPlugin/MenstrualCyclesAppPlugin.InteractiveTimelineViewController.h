@interface MenstrualCyclesAppPlugin.InteractiveTimelineViewController : UIViewController {
    void /* unknown type, empty encoding */ $__lazy_storage_$_dateIndicator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_downArrow;
    void /* unknown type, empty encoding */ $__lazy_storage_$_timeline;
    void /* unknown type, empty encoding */ $__lazy_storage_$_legend;
    void /* unknown type, empty encoding */ timelineHeight;
    void /* unknown type, empty encoding */ dataProvider;
    void /* unknown type, empty encoding */ supplementaryDisplayTypes;
}

- (void)updateConstraintConstants;
- (void)respondToHorizontalSizeChanges;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)scrollToCurrentDay;

@end
