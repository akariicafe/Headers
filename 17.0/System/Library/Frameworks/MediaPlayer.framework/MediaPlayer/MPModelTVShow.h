@class NSString, MPModelTVShowCreator;

@interface MPModelTVShow : MPModelObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) MPModelTVShowCreator *creator;
@property (copy, nonatomic) NSString *shortTitle;
@property (copy, nonatomic) NSString *editorNotes;
@property (copy, nonatomic) NSString *shortEditorNotes;
@property (copy, nonatomic) NSString *tagline;
@property (copy, nonatomic) id /* block */ artworkCatalogBlock;
@property (copy, nonatomic) id /* block */ editorialArtworkCatalogBlock;
@property (nonatomic) long long episodesCount;

+ (id)__editorNotes_KEY;
+ (id)kindWithSeasonKind:(id)a0;
+ (id)__shortEditorNotes_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__editorialArtworkCatalogBlock_KEY;
+ (long long)genericObjectType;
+ (void)__MPModelPropertyTVShowArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVShowEditorNotes__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVShowEditorialArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVShowEpisodeCount__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVShowShortEditorNotes__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVShowShortTitle__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVShowTagline__MAPPING_MISSING__;
+ (void)__MPModelPropertyTVShowTitle__MAPPING_MISSING__;
+ (void)__MPModelRelationshipTVShowCreator__MAPPING_MISSING__;
+ (id)__creator_KEY;
+ (id)__episodesCount_KEY;
+ (id)__shortTitle_KEY;
+ (id)__tagline_KEY;
+ (id)__title_KEY;

- (id)humanDescription;
- (id)artworkCatalog;
- (id)editorialArtworkCatalog;

@end
