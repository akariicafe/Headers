@class UIColor, NSString;

@interface NTKCaliforniaColorPalette : NTKFaceColorPalette <NTKCaliforniaColorPalette, NTKCircularAnalogDialColorPalette>

@property (retain, nonatomic) UIColor *simpleTextComplicationColorValue;
@property (readonly, nonatomic) BOOL isBlackBackground;
@property (readonly, nonatomic) UIColor *background;
@property (readonly, nonatomic) UIColor *circularBackground;
@property (readonly, nonatomic) UIColor *digit;
@property (readonly, nonatomic) UIColor *smallTick;
@property (readonly, nonatomic) UIColor *smallTickCircular;
@property (readonly, nonatomic) UIColor *largeTick;
@property (readonly, nonatomic) UIColor *clockHandsInlay;
@property (readonly, nonatomic) UIColor *clockHands;
@property (readonly, nonatomic) UIColor *secondHand;
@property (readonly, nonatomic) UIColor *cornerComplicationSecondary;
@property (readonly, nonatomic) UIColor *cornerComplication;
@property (readonly, nonatomic) UIColor *simpleTextComplication;
@property (readonly, nonatomic) UIColor *bezelComplication;
@property (readonly, nonatomic) UIColor *circularComplication;
@property (readonly, nonatomic) UIColor *circularComplicationSecondary;
@property (readonly, nonatomic) long long richComplicationViewTheme;
@property (readonly, nonatomic) UIColor *primaryColor;
@property (readonly, nonatomic) UIColor *primaryShiftedColor;
@property (readonly, nonatomic) UIColor *secondaryColor;
@property (readonly, nonatomic) UIColor *secondaryShiftedColor;
@property (readonly, nonatomic) UIColor *swatch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isMulticolorPalette;

- (id)init;
- (id)_background;
- (id)colorForCircularTicksForMinute:(unsigned long long)a0;
- (id)_bezelComplication;
- (id)_circularBackground;
- (id)_circularComplication;
- (id)_clockHands;
- (id)_clockHandsInlay;
- (id)_colorForCircularTicksForMinute:(unsigned long long)a0;
- (id)_cornerComplication;
- (id)_digit;
- (id)_largeTick;
- (id)_simpleTextComplication;
- (id)_smallTick;
- (id)_smallTickCircular;
- (id)circularDialFillColor;
- (id)circularDialSubtickColor;
- (id)circularDialTickColor;
- (id)colorForCircularTicksForHour:(unsigned long long)a0;
- (id)colorForHourMarker:(unsigned long long)a0;
- (id)digitColorAtIndex:(unsigned long long)a0;
- (BOOL)isLightColor;
- (id)tritium_digit;
- (id)tritium_largeTick;
- (id)tritium_simpleTextComplication;
- (id)tritium_smallTick;

@end
