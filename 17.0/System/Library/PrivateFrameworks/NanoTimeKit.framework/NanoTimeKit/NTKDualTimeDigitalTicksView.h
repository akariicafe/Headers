@class UIColor, NSCalendar, CLKClockTimer, NSArray, NSDate, CLKClockTimerToken;
@protocol NTKDualTimeDigitalTicksViewPaletteDelegate;

@interface NTKDualTimeDigitalTicksView : UIView {
    NSCalendar *_calendar;
    CLKClockTimerToken *_clockTimerToken;
    CLKClockTimer *_timer;
    struct { struct CGSize { double width; double height; } tickSize; struct CGSize { double width; double height; } cardinalTickSize; double tickInset; double cardinalTickInset; } _configuration;
    NSArray *_digitalTicks;
    struct CGSize { double width; double height; } _lastSize;
}

@property (weak, nonatomic) id<NTKDualTimeDigitalTicksViewPaletteDelegate> delegate;
@property (nonatomic, getter=isFrozen) BOOL frozen;
@property (nonatomic) BOOL editing;
@property (retain, nonatomic) UIColor *activeTickColor;
@property (retain, nonatomic) UIColor *inactiveTickColor;
@property (retain, nonatomic) NSDate *overrideDate;
@property (nonatomic) BOOL hideActiveTicks;

+ (struct CGSize { double x0; double x1; })_sizeFromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)layoutSubviews;
- (void)_configureTicks;
- (void)_colorizeDigitalTicksWithActiveColor:(id)a0 inactiveColor:(id)a1 now:(id)a2 secondFraction:(double)a3;
- (void)_refreshDigitalTicksWithNow:(id)a0 secondFraction:(double)a1;
- (id)initWithConfiguration:(struct { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; double x2; double x3; })a0 timer:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(struct { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; double x2; double x3; })a1 timer:(id)a2;
- (void)refreshTicks;

@end
