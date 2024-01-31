@class NSString, NSData, NSFileHandle;

@interface ML3MutableDatabaseImport : ML3DatabaseImport

@property (copy, nonatomic) NSString *libraryPath;
@property (copy, nonatomic) NSData *trackData;
@property (copy, nonatomic) NSData *playlistData;
@property (copy, nonatomic) NSData *albumArtistData;
@property (copy, nonatomic) NSData *albumData;
@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (copy, nonatomic) NSString *syncAnchor;
@property (nonatomic, getter=isResetSync) BOOL resetSync;
@property (nonatomic, getter=isSagaEnabled) BOOL sagaEnabled;
@property (nonatomic) long long storeAccountID;
@property (nonatomic) long long preferredVideoQuality;
@property (nonatomic) unsigned int homeSharingBasePlaylistID;
@property (nonatomic) BOOL tracksAreLibraryOwnedContent;
@property (nonatomic) BOOL playlistsAreLibraryOwnedContent;
@property (nonatomic, getter=isPendingMatch) BOOL pendingMatch;
@property (nonatomic) BOOL isServerImport;
@property (nonatomic) BOOL pairedDeviceCanProcessStandaloneCollections;
@property (copy, nonatomic) NSString *syncLibraryID;
@property (nonatomic, getter=isSuspendable) BOOL suspendable;

- (void)setPreferredVideoQuality:(long long)a0;
- (void)setSyncAnchor:(id)a0;
- (void)setFileHandle:(id)a0;
- (void)setPendingMatch:(BOOL)a0;
- (void)setPlaylistsAreLibraryOwnedContent:(BOOL)a0;
- (void)setTracksAreLibraryOwnedContent:(BOOL)a0;
- (void)setStoreAccountID:(long long)a0;
- (void)setLibraryPath:(id)a0;
- (void)setSuspendable:(BOOL)a0;
- (void)setSagaEnabled:(BOOL)a0;
- (void)setHomeSharingBasePlaylistID:(unsigned int)a0;
- (void)setIsServerImport:(BOOL)a0;
- (void)setPairedDeviceCanProcessStandaloneCollections:(BOOL)a0;
- (void)setPlaylistData:(id)a0;
- (void)setResetSync:(BOOL)a0;
- (void)setSyncLibraryID:(id)a0;
- (void)setTrackData:(id)a0;

@end
