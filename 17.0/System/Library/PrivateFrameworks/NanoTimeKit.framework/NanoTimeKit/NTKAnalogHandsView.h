@class NSString, NTKHandView, NSDate, CALayer;
@protocol NTKAnalogHandsViewDelegate;

@interface NTKAnalogHandsView : CLKUIAnalogHandsView <NTKTimeView> {
    double _timeOffset;
    CALayer *_minuteHandTransitionBodyLayer;
    CALayer *_minuteHandTransitionStemLayer;
    CALayer *_minuteHandTransitionPegLayer;
    CALayer *_hourHandTransitionBodyLayer;
    CALayer *_hourHandTransitionStemLayer;
}

@property (retain, nonatomic) NTKHandView *hourHandViewAlt;
@property (retain, nonatomic) NTKHandView *minuteHandViewAlt;
@property (retain, nonatomic) NTKHandView *secondHandViewAlt;
@property (nonatomic) long long dataMode;
@property (readonly, nonatomic) NSDate *overrideDate;
@property (readonly, nonatomic) NTKHandView *hourHandView;
@property (readonly, nonatomic) NTKHandView *minuteHandView;
@property (readonly, nonatomic) NTKHandView *secondHandView;
@property (weak, nonatomic) id<NTKAnalogHandsViewDelegate> delegate;
@property (nonatomic, getter=isFrozen) BOOL frozen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)handViewClass;

- (void)setTimeOffset:(double)a0;
- (void).cxx_destruct;
- (id)displayTime;
- (void)_setHandsAlpha:(double)a0;
- (void)_accessibilityInvalidateElements;
- (void)_addHourMinuteHandsTransitionLayers;
- (BOOL)_canRunTimeAnimation;
- (void)_enumerateHourHandViewsWithBlock:(id /* block */)a0;
- (void)_enumerateMinuteHandViewsWithBlock:(id /* block */)a0;
- (void)_enumerateSecondHandViewsWithBlock:(id /* block */)a0;
- (void)_installAltViewsHour:(id)a0 minute:(id)a1 second:(id)a2;
- (void)_removeHourMinuteHandsTransitionLayers;
- (void)_setAltHandsAlpha:(double)a0;
- (void)applyHourMinuteHandsTransitionFraction:(double)a0 fromStrokeColor:(id)a1 fromFillColor:(id)a2 toStrokeColor:(id)a3 toFillColor:(id)a4;
- (void)applySecondHandColor:(id)a0;
- (id)initForDevice:(id)a0;
- (void)setOverrideDate:(id)a0 duration:(double)a1;

@end
