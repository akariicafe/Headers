@class NSString;

@interface MPModelRecordLabel : MPModelObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSString *shortDescriptionText;
@property (copy, nonatomic) id /* block */ artworkCatalogBlock;
@property (copy, nonatomic) id /* block */ editorialArtworkCatalogBlock;

+ (id)__descriptionText_KEY;
+ (id)__shortDescriptionText_KEY;
+ (void)__MPModelPropertyRecordLabelEditorialArtwork__MAPPING_MISSING__;
+ (id)__name_KEY;
+ (void)__MPModelPropertyRecordLabelName__MAPPING_MISSING__;
+ (void)__MPModelPropertyRecordLabelArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyRecordLabelDescriptionText__MAPPING_MISSING__;
+ (id)__artworkCatalogBlock_KEY;
+ (void)__MPModelPropertyRecordLabelShortDescriptionText__MAPPING_MISSING__;
+ (id)__editorialArtworkCatalogBlock_KEY;
+ (long long)genericObjectType;

- (id)artworkCatalog;
- (id)editorialArtworkCatalog;

@end
