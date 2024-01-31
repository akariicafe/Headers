@class PBFGalleryOptions, NSString, PRPosterTitleStyleConfiguration, NSArray, PRPosterRenderingConfiguration, PRPosterHomeScreenConfiguration, PRPosterFocusConfiguration;
@protocol PBFPosterDescriptorLookupInfo, PBFComplicationLookupInfo;

@interface PBFGenericPosterPreview : NSObject <PBFPosterPreview, NSCopying> {
    unsigned long long _hash;
    unsigned long long _cachedGalleryPresentationStyle;
    unsigned long long _cachedDisplayStyle;
}

@property (readonly, copy, nonatomic) NSString *previewUniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *displayNameLocalizationKey;
@property (readonly, copy, nonatomic) NSString *galleryLocalizedTitle;
@property (readonly, copy, nonatomic) NSString *galleryLocalizedDescription;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) id<PBFPosterDescriptorLookupInfo> posterDescriptorLookupInfo;
@property (readonly, copy, nonatomic) PRPosterTitleStyleConfiguration *titleStyleConfiguration;
@property (readonly, copy, nonatomic) id<PBFComplicationLookupInfo> subtitleComplication;
@property (readonly, copy, nonatomic) NSString *complicationLayoutType;
@property (readonly, copy, nonatomic) NSArray *suggestedComplications;
@property (readonly, copy, nonatomic) NSArray *suggestedLandscapeComplications;
@property (readonly, copy, nonatomic) PRPosterHomeScreenConfiguration *homeScreenConfiguration;
@property (readonly, copy, nonatomic) PRPosterFocusConfiguration *focusConfiguration;
@property (readonly, copy, nonatomic) PRPosterRenderingConfiguration *renderingConfiguration;
@property (readonly, copy, nonatomic) PBFGalleryOptions *galleryOptions;
@property (readonly, nonatomic) unsigned long long presentationStyle;
@property (readonly, nonatomic) unsigned long long galleryDisplayStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)posterPreviewWithUniqueIdentifier:(id)a0 displayNameLocalizationKey:(id)a1 galleryLocalizedTitle:(id)a2 galleryLocalizedDescription:(id)a3 posterDescriptorLookupInfo:(id)a4 titleStyleConfiguration:(id)a5 focusConfiguration:(id)a6 subtitleComplication:(id)a7 suggestedComplications:(id)a8 suggestedLandscapeComplications:(id)a9 complicationLayoutType:(id)a10 renderingConfiguration:(id)a11 homeScreenConfiguration:(id)a12 previewType:(id)a13 galleryOptions:(id)a14;
+ (id)testPosterPreviewWithLocalizedTitle:(id)a0 description:(id)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_hydrateGalleryOptions;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
