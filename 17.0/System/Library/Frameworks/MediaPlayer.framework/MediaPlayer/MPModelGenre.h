@class NSString, NSDate;

@interface MPModelGenre : MPModelObject

@property (copy, nonatomic) id /* block */ artworkCatalogBlock;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDate *libraryAddedDate;

+ (id)kindWithAlbumKind:(id)a0;
+ (id)__name_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (long long)genericObjectType;
+ (void)__MPModelPropertyGenreArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertyGenreLibraryAddedDate__MAPPING_MISSING__;
+ (void)__MPModelPropertyGenreName__MAPPING_MISSING__;
+ (id)__libraryAddedDate_KEY;

- (id)humanDescription;
- (id)artworkCatalog;

@end
