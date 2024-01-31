@class NSString;

@interface ImageFileLoader : NSObject <SFImageResourceLoader, SFAsyncResourceLoader>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)imageLoader;
- (id)moreResultsLoader;
- (id)cardLoader;
- (BOOL)canLoadImage:(id)a0 context:(id)a1;
- (void)loadImage:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (id)urlForImage:(id)a0 context:(id)a1;

@end
