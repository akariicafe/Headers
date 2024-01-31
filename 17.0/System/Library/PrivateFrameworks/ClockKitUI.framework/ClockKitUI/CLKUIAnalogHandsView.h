@class NSTimeZone, NSCalendar, UIColor, NSTimer, UIView, CLKUIHandView, CLKDevice;
@protocol CLKUIAnalogHandsViewDelegate;

@interface CLKUIAnalogHandsView : UIView {
    NSTimer *_animationUpdateTimer;
    BOOL _useDirectionalShadows;
    UIView *_directionalShadowContainerView;
}

@property (retain, nonatomic) CLKUIHandView *hourHandView;
@property (retain, nonatomic) CLKUIHandView *minuteHandView;
@property (retain, nonatomic) CLKUIHandView *secondHandView;
@property (readonly, nonatomic) UIView *directionalShadowContainerView;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) CLKDevice *device;
@property (readonly, nonatomic) NSCalendar *calendar;
@property (nonatomic, getter=isFrozen) BOOL frozen;
@property (nonatomic, getter=isSecondHandDisabled) BOOL secondHandDisabled;
@property (readonly, nonatomic) UIView *secondHandDot;
@property (readonly, nonatomic) UIView *minuteHandDot;
@property (nonatomic) double secondHandDotDiameter;
@property (nonatomic) double minuteHandDotDiameter;
@property (retain, nonatomic) UIColor *inlayColor;
@property (weak, nonatomic) id<CLKUIAnalogHandsViewDelegate> delegate;

+ (Class)handViewClass;
+ (double)hourHandAngleForDate:(id)a0;
+ (double)minuteHandAngleForDate:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)displayTime;
- (void)layoutHandViews;
- (BOOL)_canRunTimeAnimation;
- (void)_enumerateHourHandViewsWithBlock:(id /* block */)a0;
- (void)_enumerateMinuteHandViewsWithBlock:(id /* block */)a0;
- (void)_enumerateSecondHandViewsWithBlock:(id /* block */)a0;
- (void)_significantTimeChanged;
- (void)_startNewTimeAnimation;
- (void)_stopTimeAnimation;
- (double)_timeAnimationFramesPerSecondForDevice:(id)a0;
- (void)applyHourMinuteHandsStrokeColor:(id)a0 fillColor:(id)a1;
- (void)applySecondHandColor:(id)a0;
- (id)createHourHandView;
- (id)createMinuteHandView;
- (id)createSecondHandView;
- (id)hourHandConfiguration;
- (id)initForDevice:(id)a0;
- (id)minuteHandConfiguration;
- (id)secondHandConfiguration;
- (BOOL)useDirectionalShadows;
- (void)_enumerateHandViews:(id /* block */)a0;
- (void)_enumerateShadowViews:(id /* block */)a0;
- (void)layoutShadowViews;
- (void)setUseDirectionalShadows:(BOOL)a0;

@end
