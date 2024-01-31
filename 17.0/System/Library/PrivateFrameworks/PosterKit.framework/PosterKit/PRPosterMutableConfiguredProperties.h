@class PRPosterColorVariationsConfiguration, PRPosterSuggestionMetadata, PRPosterMetadata, PRPosterAmbientConfiguration, PRPosterTitleStyleConfiguration, PRPosterHomeScreenConfiguration, PRPosterRenderingConfiguration, PRPosterAmbientWidgetLayout, PRPosterComplicationLayout, PRPosterFocusConfiguration;

@interface PRPosterMutableConfiguredProperties : PRPosterConfiguredProperties

@property (copy, nonatomic) PRPosterTitleStyleConfiguration *titleStyleConfiguration;
@property (copy, nonatomic) PRPosterFocusConfiguration *focusConfiguration;
@property (copy, nonatomic) PRPosterComplicationLayout *complicationLayout;
@property (copy, nonatomic) PRPosterRenderingConfiguration *renderingConfiguration;
@property (copy, nonatomic) PRPosterHomeScreenConfiguration *homeScreenConfiguration;
@property (copy, nonatomic) PRPosterColorVariationsConfiguration *colorVariationsConfiguration;
@property (copy, nonatomic) PRPosterAmbientConfiguration *ambientConfiguration;
@property (copy, nonatomic) PRPosterSuggestionMetadata *suggestionMetadata;
@property (copy, nonatomic) PRPosterMetadata *otherMetadata;
@property (copy, nonatomic) PRPosterAmbientWidgetLayout *ambientWidgetLayout;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;

- (BOOL)_isImmutable;
- (void)mergeConfiguredProperties:(id)a0;

@end
