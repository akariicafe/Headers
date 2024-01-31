@interface PGMusicAudioCacher : NSObject

+ (void)_addSongsWithAdamIDs:(id)a0 toPlaylist:(id)a1 inLibrary:(id)a2 progressReporter:(id)a3 completionHandler:(id /* block */)a4;
+ (void)cacheSongAudioForAdamIDs:(id)a0 progressReporter:(id)a1 completionHandler:(id /* block */)a2;
+ (void)removeAllSongsCachedForPhotosWithProgressReporter:(id)a0 completionHandler:(id /* block */)a1;
+ (void)removeSongsCachedForPhotosWithAdamIDs:(id)a0 progressReporter:(id)a1 completionHandler:(id /* block */)a2;
+ (id)songPropertiesByAdamIDCachedForPhotosWithError:(id *)a0;

@end
