@class UIColor, NSString, NSHashTable, MTVisualStylingProvider;
@protocol UITraitChangeRegistration, UITraitChangeObservable;

@interface MRUVisualStylingProvider : NSObject <MTVisualStylingProviderObservingPrivate>

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) id<UITraitChangeRegistration> traitChangeRegistration;
@property (weak, nonatomic) id<UITraitChangeObservable> traitChangeObservable;
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider;
@property (retain, nonatomic) UIColor *primaryColor;
@property (retain, nonatomic) UIColor *secondaryColor;
@property (retain, nonatomic) UIColor *tertiaryColor;
@property (retain, nonatomic) UIColor *quaternaryColor;
@property (retain, nonatomic) UIColor *separatorColor;
@property (nonatomic) BOOL supportsVibrancy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (long long)blendModeForNowPlayingStyle:(long long)a0;
- (void)applyBlendModeToView:(id)a0;
- (id)colorForNowPlayingStyle:(long long)a0;
- (void)providedStylesDidChangeForProvider:(id)a0;
- (long long)visualStyleForNowPlayingStyle:(long long)a0;
- (void)notifyObservers;
- (id)initWithVisualStylingProvider:(id)a0;
- (void).cxx_destruct;
- (double)alphaForNowPlayingStyle:(long long)a0;
- (id)colorForStyle:(long long)a0;
- (id)blendColorForStyle:(long long)a0;
- (void)addObserver:(id)a0;
- (void)applyStyle:(long long)a0 toView:(id)a1;

@end
