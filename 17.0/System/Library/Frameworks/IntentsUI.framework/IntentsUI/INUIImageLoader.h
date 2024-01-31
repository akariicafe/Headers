@class NSString;
@protocol INUIImageLoaderDelegate;

@interface INUIImageLoader : NSObject <SFResourceLoader, INImageLoading>

@property (weak, nonatomic) id<INUIImageLoaderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *serviceIdentifier;
@property (readonly, nonatomic) unsigned long long servicePriority;

+ (id)registeredImageLoaderWithScreenDelegate;

- (void)dealloc;
- (BOOL)loadImage:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)canLoadImageDataForImage:(id)a0;
- (void).cxx_destruct;
- (BOOL)loadImage:(id)a0 withContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)loadDataImageFromImage:(id)a0 usingPortableImageLoader:(id)a1 scaledSize:(struct { double x0; double x1; })a2 completion:(id /* block */)a3;
- (void)deregisterWithIntents;
- (void)deregisterWithSearchFoundation;
- (void)registerWithIntents;
- (void)registerWithSearchFoundation;

@end
