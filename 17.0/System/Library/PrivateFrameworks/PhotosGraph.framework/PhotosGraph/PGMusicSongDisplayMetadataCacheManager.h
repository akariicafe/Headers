@interface PGMusicSongDisplayMetadataCacheManager : NSObject

+ (void)evictExpiredSongsWithPhotoLibrary:(id)a0 progressReporter:(id)a1 completionHandler:(id /* block */)a2;

@end
