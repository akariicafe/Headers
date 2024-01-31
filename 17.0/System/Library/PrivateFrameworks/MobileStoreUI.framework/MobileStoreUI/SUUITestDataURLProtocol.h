@interface SUUITestDataURLProtocol : NSURLProtocol

+ (BOOL)requestIsCacheEquivalent:(id)a0 toRequest:(id)a1;
+ (BOOL)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;

- (void)stopLoading;
- (void)startLoading;

@end
