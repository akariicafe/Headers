@class CDStackedImagesComplicationImageView, CLKFullColorImageProvider, UIFontDescriptor, NSString, UIView, CLKDevice, NSNumber;
@protocol CLKMonochromeFilterProvider;

@interface CDRichComplicationImageView : UIView <CLKMonochromeFilterProvider, CLKMonochromeComplicationView, CDRichComplicationTintedPlatterColorOverridable>

@property (retain, nonatomic) CLKFullColorImageProvider *imageProvider;
@property (weak, nonatomic) UIView *richComplicationImageView;
@property (weak, nonatomic) CDStackedImagesComplicationImageView *monochromeImageView;
@property (nonatomic, getter=isHostingOverrideView) BOOL hostingOverrideView;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) long long monochromeFilterType;
@property (nonatomic) double inMonochromeModeFraction;
@property (nonatomic) BOOL prefersFilterOverTransition;
@property (readonly, nonatomic) CLKDevice *device;
@property (readonly, nonatomic) BOOL useAccentColor;
@property (readonly, nonatomic) NSNumber *tritiumUpdateMode;
@property (copy, nonatomic) UIFontDescriptor *fontDescriptor;
@property (nonatomic) double fontSizeFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (long long)_filterStyle;
- (id)colorForView:(id)a0 accented:(BOOL)a1;
- (id)filterForView:(id)a0 style:(long long)a1;
- (id)filterForView:(id)a0 style:(long long)a1 fraction:(double)a2;
- (id)filtersForView:(id)a0 style:(long long)a1;
- (id)filtersForView:(id)a0 style:(long long)a1 fraction:(double)a2;
- (id)initWithDevice:(id)a0 useAccentColor:(BOOL)a1;
- (id)interpolatedColorForView:(id)a0;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (void)setImageProvider:(id)a0 reason:(long long)a1;
- (void)setTintedFraction:(double)a0;
- (void)setTintedPlatterColor:(id)a0;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (BOOL)viewShouldIgnoreTwoPieceImage:(id)a0;
- (id)_createMonochromeImageView;
- (BOOL)_isSymbolImageProvider;
- (BOOL)_isSymbolImageProviderWithoutSpecificSize;

@end
