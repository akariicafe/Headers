@class NSURL;

@interface AMSUIContentImageFetchOperation : AMSUIAssetFetchOperation

@property (retain, nonatomic) NSURL *imageURL;
@property (copy, nonatomic) id /* block */ fallbackBlock;

- (id)initWithURL:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (void)_fallbackWithURL:(id)a0;

@end
