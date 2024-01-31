@interface MPHomeSharingURLProtocol : NSURLProtocol

+ (void)initialize;
+ (BOOL)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;

- (void)stopLoading;
- (void)startLoading;

@end
