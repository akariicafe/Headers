@class UIView, NSString, NSDate, CSProminentDisplayInteractiveTransition, UIFont, NSLocale, BSUIVibrancyConfiguration, BSUIVibrancyLUT, UIViewController, UIColor;

@interface CSProminentDisplayViewController : UIViewController

@property (nonatomic) double vibrancyShadowAlpha;
@property (nonatomic) double timeAlpha;
@property (nonatomic) double complicationRowAlpha;
@property (nonatomic) double complicationSidebarAlpha;
@property (copy, nonatomic) NSString *alternateCalendarIdentifier;
@property (retain, nonatomic) NSLocale *alternateCalendarLocale;
@property (retain, nonatomic) CSProminentDisplayInteractiveTransition *currentTransition;
@property (readonly, nonatomic) BSUIVibrancyConfiguration *vibrancyConfiguration;
@property (readonly, nonatomic) BSUIVibrancyLUT *alternativeVibrancyEffectLUT;
@property (nonatomic) unsigned long long elements;
@property (readonly, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) NSDate *displayDate;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long backgroundType;
@property (nonatomic) long long effectType;
@property (copy, nonatomic) NSString *groupName;
@property (nonatomic) long long vibrancyContentType;
@property (retain, nonatomic) UIFont *baseFont;
@property (copy, nonatomic) NSString *numberingSystem;
@property (retain, nonatomic) UIViewController *subtitleComplicationViewController;
@property (retain, nonatomic) UIViewController *complicationContainerViewController;
@property (retain, nonatomic) UIViewController *complicationSidebarViewController;
@property (nonatomic) BOOL usesLightTimeFontVariant;
@property (nonatomic) BOOL usesLandscapeTimeFontVariant;
@property (nonatomic) BOOL usesEditingLayout;
@property (nonatomic) BOOL shouldApplyVibrancyToComplications;

+ (Class)viewClass;

- (void)setDateTimeAlignment:(long long)a0;
- (id)init;
- (id)transientSubtitleText;
- (void)viewDidLoad;
- (void)setContentAlpha:(double)a0;
- (void)loadView;
- (void)setAlternateCalendarIdentifier:(id)a0 locale:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithElements:(unsigned long long)a0 date:(id)a1 textColor:(id)a2;
- (void)setAlternativeVibrancyEffectLUTIdentifier:(id)a0 alternativeVibrancyEffectLUTBundleURL:(id)a1;
- (void)setContentAlpha:(double)a0 forElements:(unsigned long long)a1;
- (void)setCustomSubtitleWithText:(id)a0 glyphName:(id)a1;
- (void)setTransientSubtitleText:(id)a0;
- (void)setTransientSubtitleText:(id)a0 withTimeout:(double)a1;
- (void)updateCustomSubtitleWithText:(id)a0;
- (BOOL)isFourDigitTime;
- (id)beginInteractiveTransitionToBaseFont:(id)a0 vibrancyConfiguration:(id)a1 cachingVibrancyTransitionProvider:(id)a2;
- (id)initWithElements:(unsigned long long)a0 baseFont:(id)a1 date:(id)a2 textColor:(id)a3;
- (void)interactiveTransition:(id)a0 didFinishSuccessfully:(BOOL)a1;
- (void)interactiveTransition:(id)a0 didUpdate:(double)a1;
- (void)setAlternativeVibrancyEffectLUTIdentifier:(id)a0 alternativeVibrancyEffectLUTBundleURL:(id)a1 luminanceReduced:(BOOL)a2;
- (void)_updateElements;
- (void)_createOrDestroyComplicationRowElementIfNecessary;
- (void)_createOrDestroyComplicationSidebarElementIfNecessary;
- (void)_createOrDestroySubtitleComplicationElementIfNecessary;
- (void)_createOrDestroySubtitleElementIfNecessary;
- (void)_createOrDestroyTimeElementIfNecessary;
- (void)_createOrDestroyVibrancyShadowViewIfNecessary;
- (id)_customSubtitleGlyphWithName:(id)a0;
- (id)_displayView;
- (id)_displayViewIfLoaded;
- (id)_fallbackDate;
- (BOOL)_shouldShowElement:(unsigned long long)a0;
- (void)_updateViewColors;
- (id)beginInteractiveTransitionToBaseFont:(id)a0 textColor:(id)a1;
- (id)beginInteractiveTransitionToBaseFont:(id)a0 vibrancyConfiguration:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBoundingBox;
- (id)effectiveTextColor;

@end
