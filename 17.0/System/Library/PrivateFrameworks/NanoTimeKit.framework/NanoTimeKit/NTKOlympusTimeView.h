@class NTKOlympusColorPalette, NSString, UIImage, NTKOlympusTimeContentView, CLKDevice, NSDate;
@protocol NTKOlympusViewDelegate;

@interface NTKOlympusTimeView : UIView <NTKOlympusContentViewDelegate, NTKTimeView>

@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) NTKOlympusTimeContentView *contentView;
@property (retain, nonatomic) NTKOlympusTimeContentView *overlayContentView;
@property (nonatomic) BOOL maskingPathStartsFromHourHand;
@property (nonatomic) BOOL useSmallFont;
@property (retain, nonatomic) UIImage *circularLogoImage;
@property (nonatomic) struct CGSize { double width; double height; } maskingSize;
@property (nonatomic) double hourHandAngle;
@property (nonatomic) double minuteHandAngle;
@property (weak, nonatomic) id<NTKOlympusViewDelegate> delegate;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long currentStyle;
@property (nonatomic) unsigned long long currentDial;
@property (nonatomic) NTKOlympusColorPalette *currentColorPalette;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isFrozen) BOOL frozen;

- (void)setTimeOffset:(double)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)_calculateDeviationBetweenHourAngle:(double)a0 minuteAngle:(double)a1;
- (void)_createContentViewIfNeeded;
- (void)_createOverlayViewIfNeeded;
- (BOOL)_hasWindrunnerWedge;
- (BOOL)_maskingPathStartsFromHourHandForDate:(id)a0;
- (void)animateClockHandsFromDate:(id)a0 toDate:(id)a1 duration:(double)a2;
- (void)applyTransitionFraction:(double)a0 fromColorPalette:(id)a1 toColorPalette:(id)a2 animateElements:(BOOL)a3;
- (void)applyTransitionFraction:(double)a0 fromDial:(unsigned long long)a1 toDial:(unsigned long long)a2;
- (void)applyTransitionFraction:(double)a0 fromStyle:(unsigned long long)a1 toStyle:(unsigned long long)a2;
- (void)applyWindrunnerMaskStartAngle:(double)a0 endAngle:(double)a1;
- (void)applyWindrunnerMaskWithDate:(id)a0;
- (void)applyWindrunnerMaskWithDate:(id)a0 force:(BOOL)a1;
- (void)applyWindrunnerMaskWithHourAngle:(double)a0 minuteAngle:(double)a1;
- (BOOL)canUpdateWindrunnerMask;
- (void)cleanupAfterEditing;
- (void)configureViewsForEditing;
- (void)createAndRemoveViewsForCurrentStateIfNeeded;
- (id)initWithDevice:(id)a0 dial:(unsigned long long)a1 style:(unsigned long long)a2 colorPalette:(id)a3 date:(id)a4;
- (id)initWithDevice:(id)a0 dial:(unsigned long long)a1 style:(unsigned long long)a2 colorPalette:(id)a3 date:(id)a4 useSmallFont:(BOOL)a5 circularLogoImage:(id)a6;
- (void)olympusContentView:(id)a0 didHandleLogoTouchUpInsideFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)olympusContentViewDidHandleLogoHighlighted:(id)a0;
- (void)olympusContentViewDidHandleLogoResetHighlight:(id)a0;
- (void)openVictoryAppFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForEditing;
- (void)setOverrideDate:(id)a0 duration:(double)a1;
- (void)setupViewsForCurrentState:(BOOL)a0;
- (double)shortestPathBetweenStartAngle:(double)a0 targetAngle:(double)a1;
- (void)updateMaskingPathStartPointWithNewHourAngle:(double)a0 newMinuteAngle:(double)a1;

@end
