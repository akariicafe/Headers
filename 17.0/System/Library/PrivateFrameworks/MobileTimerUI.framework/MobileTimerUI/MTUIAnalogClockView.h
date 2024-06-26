@class NSTimeZone, NSCalendar, UIImageView, UIImage, NSDate, UIView;

@interface MTUIAnalogClockView : UIView <MTClock> {
    UIImage *_faceDayImage;
    UIImage *_faceNightImage;
    UIView *_dayHands[3];
    UIView *_nightHands[3];
    UIImageView *_middleDotDay;
    UIImageView *_middleDotNight;
    UIImageView *_middleRedDot;
    double _seconds;
    int _flutterIndex;
    BOOL _isRenderStateStale;
    NSCalendar *_calendar;
    BOOL _minuteHourAnimationTriggered;
}

@property (nonatomic) long long runMode;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) UIImageView *faceView;
@property (readonly, nonatomic) long long hour;
@property (readonly, nonatomic) long long minute;
@property (retain, nonatomic) NSDate *time;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic, getter=isNighttime) BOOL nighttime;
@property (readonly, nonatomic, getter=isStarted) BOOL started;

+ (double)hourHandWidth;
+ (id)nightTimeOverHourHandDotColor;
+ (double)overSecondHandDotSize;
+ (id)nightTimeMinuteHandColor;
+ (void)unregisterSweepingClock:(id)a0;
+ (id)dayTimeOverHourHandDotColor;
+ (id)clockHand:(long long)a0 daytime:(BOOL)a1;
+ (id)nightTimeHourHandColor;
+ (id)clockFaceForDaytime:(BOOL)a0 ignoreCache:(BOOL)a1;
+ (struct CGPoint { double x0; double x1; })handRotationalCenterForHand:(long long)a0;
+ (id)resourcePath;
+ (BOOL)hasOverSecondHandDot;
+ (id)dayTimeSecondHandColor;
+ (id)overHourHandDotImageForDaytime:(BOOL)a0;
+ (void)initialize;
+ (id)imageForType:(int)a0 dayTime:(BOOL)a1 generation:(id /* block */)a2;
+ (id)dayTimeHourHandColor;
+ (double)secondHandOverhangLength;
+ (void)registerClock:(id)a0;
+ (double)numeralInset;
+ (id)makeClockHand:(long long)a0 daytime:(BOOL)a1;
+ (id)analogClockWithStyle:(long long)a0;
+ (id)shadowInfoAtIndex:(unsigned long long)a0;
+ (id)overHourHandDotForDayTime:(BOOL)a0;
+ (id)nightTimeSecondHandColor;
+ (void)updateTimeForAllTicking;
+ (id)numeralFont;
+ (void)adjustNumberalCenter:(struct CGPoint { double x0; double x1; } *)a0 forNumeralIndex:(long long)a1;
+ (void)updateTimeForAllSweeping;
+ (double)overHourHandDotSize;
+ (id)makeDotImageSize:(double)a0 color:(id)a1;
+ (void)updateFlutterForAllTicking;
+ (id)clockFaceForDaytime:(BOOL)a0;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insetsForStyle:(long long)a0;
+ (double)hourHandLength;
+ (void)unregisterClock:(id)a0;
+ (id)imageForType:(int)a0 dayTime:(BOOL)a1 generation:(id /* block */)a2 ignoreCache:(BOOL)a3;
+ (void)registerTickingClock:(id)a0;
+ (struct CGSize { double x0; double x1; })sizeForStyle:(long long)a0;
+ (id)imageInBundleForName:(id)a0;
+ (double)faceRadius;
+ (BOOL)doesFaceHaveShadow;
+ (id)makeClockFaceForDaytime:(BOOL)a0;
+ (id)imageCacheNameForType:(int)a0 daytime:(BOOL)a1;
+ (id)nightTimeFaceColor;
+ (BOOL)hasOverHourHandDot;
+ (double)secondHandLength;
+ (BOOL)isClockRegistered:(id)a0;
+ (struct CGSize { double x0; double x1; })clockSize;
+ (id)overSecondHandDotColor;
+ (double)secondHandWidth;
+ (id)overSecondHandDotImage;
+ (id)dayTimeFaceColor;
+ (id)cacheTopLevelPath;
+ (id)dayTimeMinuteHandColor;
+ (void)registerSweepingClock:(id)a0;
+ (long long)style;
+ (double)minuteHandLength;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })shadowInsets;
+ (void)unregisterTickingClock:(id)a0;
+ (BOOL)shouldCacheImageOnDiskForType:(int)a0 dayTime:(BOOL)a1;
+ (double)antialiasPaddingRatio;
+ (id)nightTimeTextColor;
+ (id)cacheVersionHash;
+ (id)cacheVersionedPath;
+ (double)minuteHandWidth;
+ (id)makeOverSecondHandDotImage;
+ (struct CGPoint { double x0; double x1; })shadowRotationalCenterForHand:(long long)a0;
+ (double)secondHandMainLength;
+ (Class)classForStyle:(long long)a0;
+ (id)dayTimeTextColor;

- (double)updateInterval;
- (id)init;
- (void)start;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)handleLocaleChange;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stop;
- (double)coarseUpdateInterval;
- (void).cxx_destruct;
- (void)updateTimeContinuously:(long long)a0;
- (void)updateTime;
- (void)updateTimeAnimated:(BOOL)a0;
- (void)redrawSecondHand;
- (void)setHandAngle:(double)a0 forHandIndex:(long long)a1;
- (void)setHandTransformForHandIndex:(long long)a0;
- (void)setNighttime:(BOOL)a0;
- (void)setTime:(id)a0 animated:(BOOL)a1;
- (void)updateFlutter;

@end
