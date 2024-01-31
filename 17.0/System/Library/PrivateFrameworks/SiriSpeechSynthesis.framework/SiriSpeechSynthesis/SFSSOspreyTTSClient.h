@class NSString;

@interface SFSSOspreyTTSClient : OspreyChannel

@property (retain, nonatomic) NSString *deviceId;
@property (nonatomic) BOOL useBlazar;
@property (retain, nonatomic) NSString *carryClusterId;

+ (id)sharedInstance;

- (void)prewarm;
- (id)initWithURL:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 useBlazar:(BOOL)a1 enableAuthentication:(BOOL)a2;
- (void)performCustomBidirectionalStreamingRequest:(id)a0 handler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)streamBlazarTTS:(id)a0 headers:(id)a1 beginHandler:(id /* block */)a2 chunkHandler:(id /* block */)a3 endHandler:(id /* block */)a4 completion:(id /* block */)a5;
- (void)streamNativeTTS:(id)a0 headers:(id)a1 beginHandler:(id /* block */)a2 chunkHandler:(id /* block */)a3 endHandler:(id /* block */)a4 completion:(id /* block */)a5;
- (void)streamTTS:(id)a0 headers:(id)a1 beginHandler:(id /* block */)a2 chunkHandler:(id /* block */)a3 endHandler:(id /* block */)a4 completion:(id /* block */)a5;

@end
