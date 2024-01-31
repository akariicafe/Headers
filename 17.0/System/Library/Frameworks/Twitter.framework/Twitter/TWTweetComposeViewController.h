@interface TWTweetComposeViewController : UIViewController

@property (copy, nonatomic) id /* block */ completionHandler;

+ (BOOL)canSendTweet;

- (id)init;
- (BOOL)addImage:(id)a0;
- (BOOL)addURL:(id)a0;
- (BOOL)setInitialText:(id)a0;
- (BOOL)removeAllImages;
- (id /* block */)addDownSampledImageDataByProxyWithPreviewImage:(id)a0;
- (BOOL)removeAllURLs;
- (void)setLongitude:(double)a0 latitude:(double)a1 name:(id)a2;
- (id /* block */)addURLWithProxyPreviewImage:(id)a0;

@end
