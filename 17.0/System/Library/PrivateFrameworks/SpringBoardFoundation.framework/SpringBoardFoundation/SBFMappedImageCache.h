@interface SBFMappedImageCache : BSUIMappedImageCache

+ (id)systemAppPersistenteCache;

- (id)initWithDescription:(id)a0;
- (id)imageForKey:(id)a0 cacheOptions:(unsigned long long)a1 generateImageWithBlockIfNecessary:(id /* block */)a2;
- (id)imageForKey:(id)a0 generateImageWithBlockIfNecessary:(id /* block */)a1;
- (id)imageForKey:(id)a0 options:(int)a1;
- (id)imageForKey:(id)a0 options:(int)a1 generateImageWithBlockIfNecessary:(id /* block */)a2;
- (void)warmupImageForKey:(id)a0;

@end
