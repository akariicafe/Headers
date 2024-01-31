@class NSString, NSMutableArray;

@interface SUScriptMediaLibrary : SUScriptObject {
    NSMutableArray *_musicPlayers;
}

@property (readonly) NSString *itemPropertyAlbumArtist;
@property (readonly) NSString *itemPropertyAlbumTitle;
@property (readonly) NSString *itemPropertyArtist;
@property (readonly) NSString *itemPropertyComposer;
@property (readonly) NSString *itemPropertyDiscCount;
@property (readonly) NSString *itemPropertyDiscNumber;
@property (readonly) NSString *itemPropertyGenre;
@property (readonly) NSString *itemPropertyIsCompilation;
@property (readonly) NSString *itemPropertyIsHD;
@property (readonly) NSString *itemPropertyIsRental;
@property (readonly) NSString *itemPropertyLastPlayedDate;
@property (readonly) NSString *itemPropertyLyrics;
@property (readonly) NSString *itemPropertyMediaType;
@property (readonly) NSString *itemPropertyPersistentID;
@property (readonly) NSString *itemPropertyPlayCount;
@property (readonly) NSString *itemPropertyPlaybackDuration;
@property (readonly) NSString *itemPropertyPodcastTitle;
@property (readonly) NSString *itemPropertyRating;
@property (readonly) NSString *itemPropertySkipCount;
@property (readonly) NSString *itemPropertyStoreID;
@property (readonly) NSString *itemPropertyTitle;
@property (readonly) NSString *itemPropertyTrackCount;
@property (readonly) NSString *itemPropertyTrackNumber;
@property (readonly) NSString *mediaTypeAny;
@property (readonly) NSString *mediaTypeAnyAudio;
@property (readonly) NSString *mediaTypeAnyVideo;
@property (readonly) NSString *mediaTypeAudiobook;
@property (readonly) NSString *mediaTypeMovie;
@property (readonly) NSString *mediaTypeMusic;
@property (readonly) NSString *mediaTypeMusicVideo;
@property (readonly) NSString *mediaTypePodcast;
@property (readonly) NSString *mediaTypeTVShow;
@property (readonly) NSString *mediaTypeVideoPodcast;
@property (readonly) NSString *playerTypeApplication;
@property (readonly) NSString *playerTypeIPod;
@property (readonly) NSString *queryPresetAlbums;
@property (readonly) NSString *queryPresetArtists;
@property (readonly) NSString *queryPresetAudiobooks;
@property (readonly) NSString *queryPresetCompilations;
@property (readonly) NSString *queryPresetComposers;
@property (readonly) NSString *queryPresetGenres;
@property (readonly) NSString *queryPresetMovies;
@property (readonly) NSString *queryPresetMusicVideos;
@property (readonly) NSString *queryPresetPlaylists;
@property (readonly) NSString *queryPresetPodcasts;
@property (readonly) NSString *queryPresetSongs;
@property (readonly) NSString *queryPresetTVShows;
@property (readonly) NSString *queryPresetVideoPodcasts;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)dealloc;
- (BOOL)_isRestricted;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (void)_launchMusicApp;
- (id)containsAdamID:(id)a0;
- (void)_connectNativeObject;
- (void)_launchMusicAppAfterPlayback:(id)a0 firstItem:(id)a1;
- (id)containsAdamIDs:(id)a0;
- (void)getProperties:(id)a0 ofAdamIDs:(id)a1 withCompletionFunction:(id)a2;
- (id)makeCollectionWithItems:(id)a0;
- (id)makePickerWithMediaTypes:(id)a0;
- (id)makeQueryWithPreset:(id)a0;
- (id)musicPlayerForType:(id)a0;
- (id)playSongsInCollectionWithAdamID:(id)a0 firstItemID:(id)a1;
- (id)playSongsWithAdamIDs:(id)a0;
- (id)playVideoWithAdamID:(id)a0;

@end
