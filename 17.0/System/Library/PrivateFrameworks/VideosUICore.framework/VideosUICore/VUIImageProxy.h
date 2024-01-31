@class VUIImageDecorator, _VUIDecoratorRequest;
@protocol VUINetworkRequestLoader;

@interface VUIImageProxy : NSObject <NSCopying>

@property (retain, nonatomic) id imageLoader;
@property (nonatomic) long long groupType;
@property (retain, nonatomic) id requestToken;
@property (retain, nonatomic) _VUIDecoratorRequest *decoratorRequestToken;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) id imageDidWriteObserver;
@property (nonatomic) BOOL returnImageAfterWrittenToDisk;
@property (readonly, nonatomic) id object;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } expectedSize;
@property (nonatomic) BOOL cacheOnLoad;
@property (nonatomic) BOOL allowsSubstitutionForOriginal;
@property (retain, nonatomic) VUIImageDecorator *decorator;
@property (copy) id /* block */ completionHandler;
@property (copy) id /* block */ writeCompletionHandler;
@property (nonatomic) long long imageDirection;
@property (weak, nonatomic) id<VUINetworkRequestLoader> requestLoader;
@property (nonatomic) BOOL loadSynchronouslyIfCached;
@property (nonatomic) BOOL writeToAssetLibrary;
@property (nonatomic) BOOL optimizedImageRendering;

+ (id)_imageDecoratorQueue;
+ (id)_imageReadWriteQueue;

- (void)load;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_imageLoaderKey;
- (id)_assetKeyWithImageLoaderKey:(id)a0 decoratorIdentifier:(id)a1;
- (void)_callCompletionHandlerWithImage:(id)a0 error:(id)a1 finished:(BOOL)a2;
- (void)_callWriteCompletionHandlerWithPath:(id)a0 error:(id)a1 finished:(BOOL)a2;
- (void)_completeImageLoadWithImage:(id)a0 imagePath:(id)a1 error:(id)a2 assetKey:(id)a3 expiryDate:(id)a4 tags:(id)a5 requestRecord:(id)a6;
- (void)_decorateAndWriteImage:(id)a0 imagePath:(id)a1 scaleToSize:(struct CGSize { double x0; double x1; })a2 cropToFit:(BOOL)a3 scalingResult:(unsigned long long)a4 assetKey:(id)a5 expiryDate:(id)a6 tags:(id)a7 requestRecord:(id)a8;
- (id)_decoratedImageAssetKey;
- (id)_decoratedImageAssetPath;
- (id)_decoratorIdentifier;
- (id)_imageAssetPathWithAssetKey:(id)a0;
- (void)_imageDidWriteHandler:(id)a0;
- (id)_originalImageAssetKey;
- (id)_originalImageAssetPath;
- (id)initWithObject:(id)a0 imageLoader:(id)a1 groupType:(long long)a2;
- (BOOL)isImageAvailable;
- (BOOL)isOfSameOriginAs:(id)a0;

@end
