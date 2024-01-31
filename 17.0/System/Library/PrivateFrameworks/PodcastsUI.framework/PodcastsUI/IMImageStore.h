@class IMMemoryCache, NSString, NSOperationQueue, IMImageDiskCache;

@interface IMImageStore : NSObject <IMCache>

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSOperationQueue *fetchOperationQueue;
@property (nonatomic) double maxImageDimensionInPixels;
@property (readonly, nonatomic) IMMemoryCache *memoryCache;
@property (readonly, nonatomic) IMImageDiskCache *diskCache;
@property (nonatomic) BOOL disableMemoryCache;
@property (copy, nonatomic) id /* block */ alternativeSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultStore;
+ (id)defaultName;
+ (id)defaultBasePath;
+ (unsigned long long)_memorySize;
+ (id /* block */)defaultAlternativeSizeBlock;
+ (int)defaultImageResizeOptions;
+ (unsigned long long)defaultMaxConcurrentOperations;
+ (double)defaultMaxImageDimensionInPixels;

- (id)init;
- (void)clearCache;
- (id)initWithName:(id)a0;
- (id)fullName;
- (id)imageForKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)_addImage:(id)a0 toMemoryCacheWithKey:(id)a1;
- (id)imageForKey:(id)a0 size:(struct CGSize { double x0; double x1; })a1 resizeOptions:(int)a2;
- (id)_createScaledImageFromSourceKey:(id)a0 newImageKey:(id)a1 size:(struct CGSize { double x0; double x1; })a2 resizeOptions:(int)a3;
- (void)asyncImageForKey:(id)a0 size:(struct CGSize { double x0; double x1; })a1 resizeOptions:(int)a2 modifier:(id)a3 completionHandler:(id /* block */)a4;
- (id)imageUrlForKey:(id)a0;
- (id)_createModifiedImageFromSourceKey:(id)a0 newImageKey:(id)a1 modifier:(id)a2 size:(struct CGSize { double x0; double x1; })a3 resizeOptions:(int)a4;
- (id)_keyForSize:(struct CGSize { double x0; double x1; })a0 baseKey:(id)a1;
- (id)_keyForSize:(struct CGSize { double x0; double x1; })a0 baseKey:(id)a1 modifier:(id)a2;
- (id)_loadDiskCacheImageForKey:(id)a0 expectImageExists:(BOOL)a1;
- (id)_performImagingTransactionNamed:(id)a0 block:(id /* block */)a1;
- (void)addImage:(id)a0 forKey:(id)a1;
- (void)addImage:(id)a0 forKey:(id)a1 persist:(BOOL)a2;
- (void)addImage:(id)a0 forKey:(id)a1 persist:(BOOL)a2 discardTransparency:(BOOL)a3;
- (void)addImagesWithSourceUrl:(id)a0 forKeys:(id)a1 removeOldItems:(BOOL)a2 discardTransparency:(BOOL)a3 completion:(id /* block */)a4;
- (void)asyncImageForKey:(id)a0 completionHandler:(id /* block */)a1;
- (void)asyncImageForKey:(id)a0 size:(struct CGSize { double x0; double x1; })a1 completionHandler:(id /* block */)a2;
- (void)asyncImageForKey:(id)a0 size:(struct CGSize { double x0; double x1; })a1 modifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)asyncImageForKey:(id)a0 size:(struct CGSize { double x0; double x1; })a1 resizeOptions:(int)a2 completionHandler:(id /* block */)a3;
- (void)asyncImageForKey:(id)a0 squareDimension:(double)a1 cacheKeyModifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)asyncImageURLForKey:(id)a0 completionHandler:(id /* block */)a1;
- (void)asyncImageURLForKey:(id)a0 squareDimension:(double)a1 cacheKeyModifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)configureMemoryCache;
- (BOOL)hasItemForKey:(id)a0;
- (BOOL)hasItemForKey:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (BOOL)hasItemForKey:(id)a0 size:(struct CGSize { double x0; double x1; })a1 modifier:(id)a2;
- (id)imageForKey:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)imageForKey:(id)a0 size:(struct CGSize { double x0; double x1; })a1 modifier:(id)a2;
- (id)imageForKey:(id)a0 size:(struct CGSize { double x0; double x1; })a1 resizeOptions:(int)a2 modifier:(id)a3;
- (id)imageInMemoryForKey:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)imageInMemoryForKey:(id)a0 size:(struct CGSize { double x0; double x1; })a1 modifier:(id)a2;
- (id)initWithName:(id)a0 basePath:(id)a1 maxImageDimensionInPixels:(double)a2 maxConcurrentOperations:(unsigned long long)a3 alternativeSizeBlock:(id /* block */)a4;
- (void)invalidateImageAtURL:(id)a0;
- (void)invalidateImageForKey:(id)a0;
- (void)memoryWarning;
- (void)onQueueInvalidateImageForKey:(id)a0;
- (void)performWhenURLAvailableForImageForKey:(id)a0 block:(id /* block */)a1;
- (void)removeItemForKey:(id)a0;
- (void)removeItemsWithPrefx:(id)a0;
- (BOOL)requireSquareImages:(id)a0;

@end
