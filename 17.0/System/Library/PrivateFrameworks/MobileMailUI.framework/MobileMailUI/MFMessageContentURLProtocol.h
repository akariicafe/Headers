@class NSString, MFMessageLoadingContext, _MFMessageContentURLProtocolRegistry, EFCancelationToken, EFPromise;

@interface MFMessageContentURLProtocol : NSURLProtocol

@property (class, retain, nonatomic) _MFMessageContentURLProtocolRegistry *registry;
@property (class, readonly) NSString *scheme;

@property (readonly) EFCancelationToken *token;
@property (readonly) MFMessageLoadingContext *loadingContext;
@property (retain, nonatomic) EFPromise *promise;

+ (void)initialize;
+ (BOOL)requestIsCacheEquivalent:(id)a0 toRequest:(id)a1;
+ (BOOL)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;
+ (id)URLForLoadingContext:(id)a0;
+ (id)loadingContextForURL:(id)a0;

- (void)stopLoading;
- (void)dealloc;
- (void)startLoading;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 cachedResponse:(id)a1 client:(id)a2;
- (id)_cachedResponseWithData:(id)a0 error:(id *)a1;
- (void)_didLoadContentEvent:(id)a0 error:(id)a1;

@end
