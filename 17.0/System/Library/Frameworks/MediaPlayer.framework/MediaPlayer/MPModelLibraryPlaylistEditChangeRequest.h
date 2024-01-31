@class MPModelPlaylist, NSString, UIImage, MPMediaLibrary, NSDictionary, MPSectionedCollection, MPChangeDetails, NSNumber;

@interface MPModelLibraryPlaylistEditChangeRequest : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL didSetPlaylistUserImage;
@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (copy, nonatomic) MPSectionedCollection *playlistEntries;
@property (copy, nonatomic) NSString *playlistDescription;
@property (copy, nonatomic) NSString *playlistName;
@property (retain, nonatomic) UIImage *playlistUserImage;
@property (copy, nonatomic, getter=isPublicPlaylist) NSNumber *publicPlaylist;
@property (copy, nonatomic, getter=isVisiblePlaylist) NSNumber *visiblePlaylist;
@property (copy, nonatomic, getter=isCuratorPlaylist) NSNumber *curatorPlaylist;
@property (copy, nonatomic) NSNumber *isOwner;
@property (copy, nonatomic) NSString *authorStoreIdentifier;
@property (copy, nonatomic) NSString *authorDisplayName;
@property (copy, nonatomic) NSString *coverArtworkRecipe;
@property (copy, nonatomic) MPChangeDetails *trackListChanges;
@property (copy, nonatomic) NSDictionary *deletedEntryUUIDs;
@property (retain, nonatomic) MPModelPlaylist *parentPlaylist;
@property (nonatomic) BOOL shouldCreatePlaylist;
@property (retain, nonatomic) MPModelPlaylist *playlist;
@property (copy, nonatomic) MPSectionedCollection *musicKitPlaylistEntries;

+ (id)requiredPlaylistEntryProperties;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newOperationWithLocalPersistenceResponseHandler:(id /* block */)a0 completeResponseHandler:(id /* block */)a1;
- (id)newSDKOperationWithLocalPersistenceResponseHandler:(id /* block */)a0 completeResponseHandler:(id /* block */)a1;

@end
