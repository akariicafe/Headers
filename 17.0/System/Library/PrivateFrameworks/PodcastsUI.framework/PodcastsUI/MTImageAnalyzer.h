@class NSCache;

@interface MTImageAnalyzer : MTSingleton {
    NSCache *_memoryCache;
}

- (id)init;
- (void).cxx_destruct;
- (id)addImage:(id)a0 forKey:(id)a1;
- (id)colorThemeForArtwork:(id)a0;
- (id)colorThemeForPodcastUuid:(id)a0;

@end
