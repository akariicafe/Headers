@class PRPosterAmbientConfiguration, NSURL, NSDictionary, ATXPosterDescriptorGalleryOptions, PRPosterComplicationLayout, PRPosterHomeScreenConfiguration, PRPosterColorVariationsConfiguration, PRPosterRenderingConfiguration, PRPosterSuggestionMetadata, PRPosterConfigurableOptions, PRPosterMetadata, PRPosterFocusConfiguration, PRPosterConfiguredProperties, NSString, PRPosterDescriptorGalleryOptions, PRPosterTitleStyleConfiguration, PRPosterAmbientWidgetLayout, PRSServerPosterIdentity, NSError;

@interface PRPosterPathModelObjectCache : NSObject <BSInvalidatable> {
    NSURL *_pathURL;
    NSURL *_pathInstanceURL;
    NSURL *_pathIdentifierURL;
    NSURL *_pathContentsURL;
    NSURL *_pathSupplementURL;
    NSString *_role;
    NSString *_logPreample;
    PRSServerPosterIdentity *_identity;
    PRPosterConfiguredProperties *_configuredProperties;
    NSError *_userInfoLoadError;
    NSDictionary *_userInfo;
    NSError *_titleStyleConfigurationLoadError;
    PRPosterTitleStyleConfiguration *_titleStyleConfiguration;
    NSError *_renderingConfigurationLoadError;
    PRPosterRenderingConfiguration *_renderingConfiguration;
    NSError *_configurableOptionsLoadError;
    PRPosterConfigurableOptions *_configurableOptions;
    NSError *_homeScreenConfigurationLoadError;
    PRPosterHomeScreenConfiguration *_homeScreenConfiguration;
    NSError *_focusConfigurationLoadError;
    PRPosterFocusConfiguration *_focusConfiguration;
    NSError *_complicationLayoutLoadError;
    PRPosterComplicationLayout *_complicationLayout;
    NSError *_colorVariationsConfigurationLoadError;
    PRPosterColorVariationsConfiguration *_colorVariationsConfiguration;
    NSError *_suggestionMetadataLoadError;
    PRPosterSuggestionMetadata *_suggestionMetadata;
    NSError *_otherMetadataLoadError;
    PRPosterMetadata *_otherMetadata;
    NSError *_galleryOptionsLoadError;
    PRPosterDescriptorGalleryOptions *_galleryOptions;
    NSError *_ambientConfigurationLoadError;
    PRPosterAmbientConfiguration *_ambientConfiguration;
    NSError *_ambientWidgetLayoutLoadError;
    PRPosterAmbientWidgetLayout *_ambientWidgetLayout;
    ATXPosterDescriptorGalleryOptions *_proactiveGalleryOptions;
    NSError *_proactiveGalleryOptionsLoadError;
}

@property (readonly) NSDictionary *userInfo;
@property (readonly) PRPosterConfiguredProperties *configuredProperties;
@property (readonly) PRPosterTitleStyleConfiguration *titleStyleConfiguration;
@property (readonly) PRPosterRenderingConfiguration *renderingConfiguration;
@property (readonly) PRPosterConfigurableOptions *configurableOptions;
@property (readonly) PRPosterHomeScreenConfiguration *homeScreenConfiguration;
@property (readonly) PRPosterFocusConfiguration *focusConfiguration;
@property (readonly) PRPosterComplicationLayout *complicationLayout;
@property (readonly) PRPosterColorVariationsConfiguration *colorVariationsConfiguration;
@property (readonly) PRPosterSuggestionMetadata *suggestionMetadata;
@property (readonly) PRPosterMetadata *otherMetadata;
@property (readonly) ATXPosterDescriptorGalleryOptions *proactiveGalleryOptions;
@property (readonly) PRPosterDescriptorGalleryOptions *galleryOptions;
@property (readonly) PRPosterAmbientConfiguration *ambientConfiguration;
@property (readonly) PRPosterAmbientWidgetLayout *ambientWidgetLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)invalidateModelObjectCacheForPath:(id)a0;
+ (id)modelObjectCacheForPath:(id)a0;
+ (id)modelObjectCacheLock;

- (id)_initWithPath:(id)a0;
- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)resetAmbientConfiguration;
- (void)resetAmbientWidgetLayout;
- (void)resetColorVariationsConfiguration;
- (void)resetComplicationLayout;
- (void)resetConfigurableOptions;
- (void)resetConfiguredProperties;
- (void)resetFocusConfiguration;
- (void)resetGalleryOptions;
- (void)resetHomeScreenConfiguration;
- (void)resetOtherMetadata;
- (void)resetProactiveGalleryOptions;
- (void)resetRenderingConfiguration;
- (void)resetSuggestionMetadata;
- (void)resetTitleStyleConfiguration;
- (void)resetUserInfo;

@end
