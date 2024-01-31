@class NSURL;

@interface DCDocument : NSObject

@property (readonly, copy, nonatomic) NSURL *fileURL;
@property (readonly, copy, nonatomic) id annotation;

+ (id)documentWithURL:(id)a0;
+ (id)documentWithURL:(id)a0 annotation:(id)a1;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 annotation:(id)a1;
- (void)openInDefaultAppWithCompletionHandler:(id /* block */)a0;
- (void)openWithAppBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
