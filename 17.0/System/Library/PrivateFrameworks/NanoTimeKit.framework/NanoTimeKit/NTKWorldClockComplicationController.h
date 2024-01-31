@class NTKWorldClockComplication, NSDate;
@protocol NTKWorldClockComplicationDisplay;

@interface NTKWorldClockComplicationController : NTKComplicationController <CLKUITimeTravel> {
    struct { unsigned char wantsShortCity : 1; unsigned char wantsLongCity : 1; } _displayFlags;
    NSDate *_timeTravelDate;
}

@property (readonly, weak, nonatomic) id<NTKWorldClockComplicationDisplay> legacyDisplay;
@property (readonly, nonatomic) NTKWorldClockComplication *complication;

+ (BOOL)_acceptsComplicationType:(unsigned long long)a0 forDevice:(id)a1;

- (void)_deactivate;
- (void)_activate;
- (void).cxx_destruct;
- (void)_handleLocaleChange;
- (void)_handleTimeZoneChange;
- (void)_updateDisplay;
- (void)_handleAbbreviationStoreChange:(id)a0;
- (void)_configureForLegacyDisplay:(id)a0;
- (void)_endTimeTravelAnimated:(BOOL)a0;
- (void)_startTimeTravelAnimated:(BOOL)a0;
- (id)complicationApplicationIdentifier;
- (BOOL)hasTapAction;
- (void)performTapActionForDisplayWrapper:(id)a0;
- (void)setDataMode:(long long)a0 forDisplayWrapper:(id)a1;
- (void)setPauseDate:(id)a0;
- (void)setTimeTravelDate:(id)a0 animated:(BOOL)a1;

@end
