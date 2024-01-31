@interface MPStoreModelCuratorBuilder : MPStoreModelObjectBuilder {
    struct { unsigned char initialized : 1; unsigned char name : 1; unsigned char shortName : 1; unsigned char hasSocialPosts : 1; unsigned char editorNotes : 1; unsigned char shortEditorNotes : 1; unsigned char curatorKind : 1; unsigned char curatorSubKind : 1; unsigned char editorialArtwork : 1; unsigned char brandLogoArtwork : 1; } _requestedCuratorProperties;
}

+ (id)allSupportedProperties;

- (id)modelObjectWithStoreItemMetadata:(id)a0 sourceModelObject:(id)a1 userIdentity:(id)a2;

@end
