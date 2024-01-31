@class NSString, NSCalendar;

@interface HKDateGraphViewController : HKGraphViewController <HKGraphViewDelegate> {
    BOOL _hasSetVisibleDateRange;
}

@property (retain, nonatomic) NSCalendar *currentCalendar;
@property (nonatomic) struct CGSize { double width; double height; } minimumSize;
@property (nonatomic) BOOL disableXAxis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setDetailView:(id)a0;
- (id)_xAxisLabelFont;
- (id)_createGraphViewWithDateZoom:(long long)a0 previousDateZoom:(long long)a1 previousXAxisSpace:(double)a2 currentCalendar:(id)a3 customDateAxis:(id)a4;
- (id)_dateAxisStyle;
- (void)_marginStyleChangeForContext:(long long)a0 graphView:(id)a1;
- (void)_setupGraphViewSelectionStyle;
- (long long)defaultAlignmentForTimeScope:(long long)a0;
- (void)graphView:(id)a0 didFinishUserScrollingToValueRange:(id)a1;
- (void)graphView:(id)a0 didUpdateVisibleValueRange:(id)a1 changeContext:(long long)a2;
- (id)initWithDateZoom:(long long)a0 previousDateZoom:(long long)a1 previousXAxisSpace:(double)a2 currentCalendar:(id)a3;
- (id)initWithDateZoom:(long long)a0 previousDateZoom:(long long)a1 previousXAxisSpace:(double)a2 currentCalendar:(id)a3 customDateAxis:(id)a4;

@end
