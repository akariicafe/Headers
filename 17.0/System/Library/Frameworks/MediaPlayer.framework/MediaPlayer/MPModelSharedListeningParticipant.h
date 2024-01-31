@interface MPModelSharedListeningParticipant : MPModelPerson

@property (copy, nonatomic) id /* block */ artworkCatalogBlock;

+ (id)kind;
+ (id)__artworkCatalogBlock_KEY;
+ (void)__MPModelPropertySharedListeningParticipantArtwork__MAPPING_MISSING__;

- (id)artworkCatalog;

@end
