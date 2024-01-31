@class StocksTapDragGestureRecognizer, StockGraphView, NSMutableSet, UILabel, PricePopoverBar, StockChartView;

@interface ChartHUDView : UIView {
    UILabel *_leftDateLabel;
    UILabel *_centeredLabel;
    UILabel *_rightDateLabel;
    long long _interval;
    NSMutableSet *_inactiveTouchInfoSet;
    NSMutableSet *_touchInfoSet;
    BOOL _forceTouchUpdate;
    PricePopoverBar *_pricePopoverBar;
    StocksTapDragGestureRecognizer *_tapDragGesture;
}

@property (weak, nonatomic) StockChartView *chartView;
@property (retain, nonatomic) StockGraphView *graphView;
@property (nonatomic) BOOL enabled;
@property (nonatomic, getter=isOverlayHidden) BOOL overlayHidden;
@property (nonatomic) double barHeight;

+ (id)_dateRangeSeparatorString;
+ (void)initializeDateFormattersIfNeededForInterval:(long long)a0 withTimeZone:(id)a1;
+ (id)monoSpacedFontWithFont:(id)a0;
+ (id)newHUDLabel;
+ (id)stringForTimeIntervalSince1970:(double)a0 withInterval:(long long)a1 isDouble:(BOOL)a2 isLeft:(BOOL)a3;

- (void)resetLocale;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)isTrackingTouches;
- (void)resizeSelectedClipViewsIfNeeded;
- (void)_showHUD;
- (void)setSelectedInterval:(long long)a0 timeZone:(id)a1;
- (void)setShowingTracking:(BOOL)a0 withTouchInfo:(id)a1 animated:(BOOL)a2;
- (void)tapDragGestureChanged:(id)a0;

@end
