@class MPStoreModelMovieMediaClipBuilder, MPStoreModelPlaybackPositionBuilder, MPPropertySet, MPStoreModelStoreAssetBuilder;

@interface MPStoreModelMovieBuilder : MPStoreModelObjectBuilder {
    MPStoreModelPlaybackPositionBuilder *_playbackPositionBuilder;
    MPStoreModelMovieMediaClipBuilder *_mediaClipBuilder;
    MPStoreModelStoreAssetBuilder *_storeAssetBuilder;
    MPPropertySet *_storeAssetProperties;
    struct { unsigned char initialized : 1; unsigned char title : 1; unsigned char description : 1; unsigned char duration : 1; unsigned char releaseDate : 1; unsigned char explicitRating : 1; unsigned char tagline : 1; unsigned char artwork : 1; unsigned char editorialArtwork : 1; unsigned char keepLocalEnableState : 1; unsigned char keepLocalManagedStatus : 1; unsigned char keepLocalManagedStatusReason : 1; unsigned char keepLocalConstraints : 1; unsigned char hasCloudSyncSource : 1; unsigned char localFileAsset : 1; unsigned char libraryAdded : 1; unsigned char libraryAddEligible : 1; } _requestedMovieProperties;
}

+ (id)allSupportedProperties;

- (id)modelObjectWithStoreItemMetadata:(id)a0 sourceModelObject:(id)a1 userIdentity:(id)a2;
- (void).cxx_destruct;

@end
