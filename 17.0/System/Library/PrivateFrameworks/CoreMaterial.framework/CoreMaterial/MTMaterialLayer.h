@class NSSet, NSString, NSMutableDictionary, MTMaterialSettingsInterpolator, NSHashTable;
@protocol MTRecipeMaterialSettingsProviding;

@interface MTMaterialLayer : CABackdropLayer {
    MTMaterialSettingsInterpolator *_settingsInterpolator;
    MTMaterialSettingsInterpolator *_previousSettingsInterpolator;
    BOOL _needsConfiguring;
    BOOL _blurEnabled;
    BOOL _zoomEnabled;
    id /* block */ _backdropScaleAdjustment;
    BOOL _shouldCrossfade;
    BOOL _contentReplacedWithSnapshot;
    NSMutableDictionary *_pendingChange;
    NSMutableDictionary *_visualStyleCategoriesToProviders;
    NSHashTable *_prunePromises;
    long long _allowsInPlaceFiltering;
    struct { unsigned char delegateManagesWeighting : 1; unsigned char delegateImplementsManagingOpacity : 1; unsigned char delegateImplementsManagingInterpolation : 1; } _materialLayerDelegateFlags;
}

@property (class, readonly, nonatomic) NSSet *mt_animatableKeys;
@property (class, readonly, nonatomic) NSSet *mt_implicitlyAnimatableKeys;

@property (copy, nonatomic) NSString *recipeName;
@property (nonatomic, getter=isBlurEnabled) BOOL blurEnabled;
@property (nonatomic, getter=isZoomEnabled) BOOL zoomEnabled;
@property (copy, nonatomic) id /* block */ backdropScaleAdjustment;
@property (readonly, nonatomic, getter=_backdropScale) double backdropScale;
@property (copy, nonatomic) id /* block */ blurRadiusTransformer;
@property (nonatomic) BOOL shouldCrossfade;
@property (nonatomic, getter=isContentReplacedWithSnapshot) BOOL contentReplacedWithSnapshot;
@property (readonly, nonatomic, getter=_privateOpacity) double privateOpacity;
@property (readonly, nonatomic, getter=_hasInoperativeAppearance) BOOL hasInoperativeAppearance;
@property (retain, nonatomic, getter=_recipeSettings, setter=_setRecipeSettings:) id<MTRecipeMaterialSettingsProviding> recipeSettings;
@property (copy, nonatomic) id /* block */ defaultBackdropScaleAdjustment;
@property (copy, nonatomic) NSString *recipe;
@property (nonatomic) double weighting;
@property (nonatomic, getter=isReduceTransparencyEnabled) BOOL reduceTransparencyEnabled;
@property (nonatomic, getter=isReduceMotionEnabled) BOOL reduceMotionEnabled;
@property (copy, nonatomic) NSString *debugIdentifier;

+ (void)initialize;
+ (id)_attributeKeys;
+ (id)_unserializedAttributeKeys;

- (id)init;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (BOOL)shouldArchiveValueForKey:(id)a0;
- (id)visualStylingProviderForCategory:(id)a0;
- (void)prune;
- (void)layoutSublayers;
- (void)willChangeValueForKey:(id)a0;
- (id)description;
- (void)setUnsafeUnretainedDelegate:(id)a0;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (void)didChangeValueForKey:(id)a0;
- (BOOL)allowsInPlaceFiltering;
- (void)setAllowsInPlaceFiltering:(BOOL)a0;
- (void)setRecipeName:(id)a0 fromBundle:(id)a1;
- (void)_adjustScaleOfBackdropLayer:(id)a0 ifNecessaryWithSettingsInterpolator:(id)a1;
- (void)_configureBackdropLayer:(id)a0 withSettingsInterpolator:(id)a1 preservingFiltersIfIdentity:(BOOL)a2;
- (void)_configureBackdropLayerIfNecessaryWithSettingsInterpolator:(id)a0;
- (void)_configureDelegateFlagsForDelegate:(id)a0;
- (void)_configureIfNecessaryWithSettingsInterpolator:(id)a0;
- (BOOL)_delegateManagesWeighting;
- (BOOL)_didValueChangeForKey:(id)a0 withPendingChange:(id)a1;
- (id)_effectiveDebugIdentifier;
- (BOOL)_isDelegateManagingInterpolation;
- (BOOL)_isDelegateManagingOpacity;
- (BOOL)_needsPruning;
- (void)_pruneAtCompletionOfCurrentTransaction;
- (void)_reevaluateDefaultShouldCrossfade;
- (void)_setHasInoperativeAppearance:(BOOL)a0 removingIfIdentity:(BOOL)a1;
- (void)_setNeedsConfiguring;
- (void)_setPrivateOpacity:(double)a0 removingIfIdentity:(BOOL)a1;
- (void)_updateForChangeInRecipeAndConfiguration;
- (void)_updateForChangeInWeighting;
- (void)_updateVisualStylingProviders;

@end
