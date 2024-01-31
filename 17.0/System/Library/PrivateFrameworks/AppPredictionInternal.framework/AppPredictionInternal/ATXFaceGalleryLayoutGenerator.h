@class NSArray, NSDictionary, ATXComplicationSuggestionParameters, NSLocale;
@protocol ATXFaceSuggestionParameters, ATXFaceGalleryLayoutGeneratorComplicationProviding, ATXFaceGalleryLayoutGeneratorComplicationDescriptorProviding;

@interface ATXFaceGalleryLayoutGenerator : NSObject {
    id<ATXFaceGalleryLayoutGeneratorComplicationProviding> _complicationProvider;
    id<ATXFaceGalleryLayoutGeneratorComplicationDescriptorProviding> _complicationDescriptorProvider;
    id<ATXFaceSuggestionParameters> _parameters;
    BOOL _dayZero;
    NSArray *_allHeroDescriptors;
    NSArray *_allNonHeroDescriptors;
    NSDictionary *_nonHeroDescriptorsByExtensionBundleId;
    ATXComplicationSuggestionParameters *_complicationParameters;
    NSLocale *_locale;
}

@property (readonly, copy, nonatomic) NSArray *candidateFeaturedDescriptors;
@property (readonly, copy, nonatomic) NSArray *rankedFeaturedDescriptors;

+ (id)_descriptorsByDeduplicatingExtensionsInDescriptors:(id)a0;

- (id)_generatedFeaturedPhotosSectionGivenFeaturedSection:(id)a0 widgetDescriptorsAdditionalData:(id)a1;
- (id)generatedConfigurationWithWidgetDescriptorsAdditionalData:(id)a0;
- (id)_modularComplicationsForDescriptor:(id)a0 systemSuggestionComplications:(id)a1;
- (void)_processDescriptors:(id)a0;
- (id)_generatedFocusSection;
- (id)_candidateFeaturedDescriptors;
- (id)_generatedHeroSectionWithWidgetDescriptorsAdditionalData:(id)a0;
- (BOOL)_descriptorIsEligibleForComplications:(id)a0;
- (id)_inlineComplicationForDescriptor:(id)a0;
- (id)_provisionalLocalizedSubtitleTextWithSemanticType:(long long)a0 extensionBundleIdentifiers:(id)a1;
- (id)initWithDescriptors:(id)a0 complicationProvider:(id)a1 complicationDescriptorProvider:(id)a2 parameters:(id)a3 dayZero:(BOOL)a4 locale:(id)a5;
- (BOOL)_isFocusUser;
- (id)_itemFromDescriptor:(id)a0 shouldShowDisplayName:(BOOL)a1 shouldShowComplications:(BOOL)a2 systemSuggestedComplicationSet:(id)a3 systemSuggestedLandscapeComplicationSet:(id)a4;
- (void).cxx_destruct;
- (id)_shuffledSuggestableComplicationSetsWithWidgetDescriptorsAdditionalData:(id)a0;
- (id)_generatedFeaturedSectionWithWidgetDescriptorsAdditionalData:(id)a0;
- (id)_generatedPhotoShuffleSectionWithWidgetDescriptorsAdditionalData:(id)a0;
- (id)_generateProviderSectionForExtensionBundleIdentifiers:(id)a0 widgetDescriptorsAdditionalData:(id)a1;
- (BOOL)_complicationExistsOnSystem:(id)a0;
- (id)_landscapeSetsFromLandscapeSetsDict:(id)a0;
- (id)_modularLandscapeComplicationsForDescriptor:(id)a0 systemSuggestionComplications:(id)a1;
- (id)_itemsFromDescriptors:(id)a0 widgetDescriptorsAdditionalData:(id)a1 shouldShowDisplayName:(BOOL)a2 shouldShowComplications:(BOOL)a3 limit:(id)a4;

@end
