@class NSString, NSURL, NSURLSession;

@interface WFGiphySessionManager : NSObject <NSURLSessionDataDelegate>

@property (readonly, nonatomic) NSURLSession *session;
@property (copy, nonatomic) NSString *apiKey;
@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSessionConfiguration:(id)a0;
- (void)search:(id)a0 limit:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)trendingWithLimit:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)random:(id /* block */)a0;
- (void)sendRequestWithPath:(id)a0 parameters:(id)a1 completion:(id /* block */)a2;

@end
