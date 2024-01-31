@class NSString;

@interface MPModelCurator : MPModelPerson

@property (copy, nonatomic) NSString *shortName;
@property (copy, nonatomic) NSString *editorNotes;
@property (copy, nonatomic) NSString *shortEditorNotes;
@property (nonatomic) long long curatorKind;
@property (nonatomic) long long curatorSubKind;
@property (copy, nonatomic) id /* block */ editorialArtworkCatalogBlock;
@property (copy, nonatomic) id /* block */ brandLogoArtworkCatalogBlock;
@property (copy, nonatomic) NSString *handle;

+ (id)__curatorSubKind_KEY;
+ (id)__handle_KEY;
+ (void)__MPModelPropertyCuratorKind__MAPPING_MISSING__;
+ (void)__MPModelPropertyCuratorSubKind__MAPPING_MISSING__;
+ (id)__editorNotes_KEY;
+ (void)__MPModelPropertyCuratorEditorNotes__MAPPING_MISSING__;
+ (void)__MPModelPropertyCuratorBrandLogoArtwork__MAPPING_MISSING__;
+ (id)__shortEditorNotes_KEY;
+ (id)__brandLogoArtworkCatalogBlock_KEY;
+ (void)__MPModelPropertyCuratorEditorialArtwork__MAPPING_MISSING__;
+ (id)__curatorKind_KEY;
+ (void)__MPModelPropertyCuratorShortEditorNotes__MAPPING_MISSING__;
+ (id)__editorialArtworkCatalogBlock_KEY;
+ (long long)genericObjectType;
+ (void)__MPModelPropertyCuratorShortName__MAPPING_MISSING__;
+ (void)__MPModelPropertyCuratorHandle__MAPPING_MISSING__;
+ (id)__shortName_KEY;

- (id)brandLogoArtworkCatalog;
- (id)editorialArtworkCatalog;

@end
