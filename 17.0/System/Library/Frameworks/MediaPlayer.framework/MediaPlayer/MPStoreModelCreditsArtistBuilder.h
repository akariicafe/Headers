@interface MPStoreModelCreditsArtistBuilder : MPStoreModelObjectBuilder {
    struct { unsigned char initialized : 1; unsigned char name : 1; unsigned char artwork : 1; } _requestedCreditsArtistProperties;
}

+ (id)allSupportedProperties;

- (id)modelObjectWithStoreItemMetadata:(id)a0 sourceModelObject:(id)a1 userIdentity:(id)a2;

@end
