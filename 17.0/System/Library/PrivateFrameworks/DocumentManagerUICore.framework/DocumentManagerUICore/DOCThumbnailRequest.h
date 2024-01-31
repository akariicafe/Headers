@interface DOCThumbnailRequest : NSObject

@property (copy, nonatomic) id /* block */ thumbnailGenerationRequiresDownloadHandler;

+ (id)iconRequestForNode:(id)a0 descriptor:(id)a1 thumbnailGenerator:(id)a2;
+ (id)iconRequestForURL:(id)a0 descriptor:(id)a1 thumbnailGenerator:(id)a2;
+ (id)requestForNode:(id)a0 descriptor:(id)a1 thumbnailGenerator:(id)a2;

- (void).cxx_destruct;
- (void)cancel;
- (void)generateThumbnailWithCompletionHandler:(id /* block */)a0;

@end
