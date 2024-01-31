@interface MTImageStore : IMImageStore <MTImageStoreProtocol>

+ (id)defaultStore;
+ (id)defaultBasePath;
+ (id)defaultPodcastArtworkWithWidth:(double)a0;
+ (unsigned long long)defaultMaxConcurrentOperations;
+ (double)defaultMaxImageDimensionInPixels;

- (void)asyncImageForKey:(id)a0 size:(struct CGSize { double x0; double x1; })a1 resizeOptions:(int)a2 modifier:(id)a3 completionHandler:(id /* block */)a4;
- (void)addImage:(id)a0 forKey:(id)a1;
- (id)imageForKey:(id)a0 size:(struct CGSize { double x0; double x1; })a1 resizeOptions:(int)a2 modifier:(id)a3;
- (id)initWithName:(id)a0 basePath:(id)a1 maxImageDimensionInPixels:(double)a2 maxConcurrentOperations:(unsigned long long)a3 alternativeSizeBlock:(id /* block */)a4;
- (BOOL)requireSquareImages:(id)a0;

@end
