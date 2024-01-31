@class NSArray, NSString;

@interface MPModelMediaClip : MPModelObject

@property (copy, nonatomic) id /* block */ previewArtworkCatalogBlock;
@property (copy, nonatomic) NSArray *staticAssets;
@property (copy, nonatomic) NSString *title;

+ (id)kind;
+ (long long)genericObjectType;
+ (void)__MPModelPropertyMediaClipPreviewArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyMediaClipTitle__MAPPING_MISSING__;
+ (void)__MPModelRelationshipMediaClipStaticAssets__MAPPING_MISSING__;
+ (id)__previewArtworkCatalogBlock_KEY;
+ (id)__staticAssets_KEY;
+ (id)__title_KEY;
+ (id)classesForSecureCoding;

- (id)humanDescription;
- (id)previewArtworkCatalog;

@end
