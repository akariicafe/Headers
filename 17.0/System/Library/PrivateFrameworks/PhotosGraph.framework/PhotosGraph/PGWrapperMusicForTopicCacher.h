@interface PGWrapperMusicForTopicCacher : NSObject

+ (BOOL)cacheMusicWithCache:(id)a0 progressReporter:(id)a1 error:(id *)a2;
+ (void)prefetchCuratedSongLibraryAssetsWithProgressReporter:(id)a0 completionHandler:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;

@end
