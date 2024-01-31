@interface PGMusicCatalogMonitor : NSObject

+ (BOOL)checkMusicCatalogEligibilityWithProgressReporter:(id)a0;
+ (void)checkMusicCatalogEligibilityWithProgressReporter:(id)a0 completionHandler:(id /* block */)a1;
+ (void)clearCatalogMusicFromCacheWithPhotoLibrary:(id)a0 progressReporter:(id)a1 completionHandler:(id /* block */)a2;

@end
