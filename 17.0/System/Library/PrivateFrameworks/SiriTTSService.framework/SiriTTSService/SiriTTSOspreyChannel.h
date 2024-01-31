@class OspreyChannel;

@interface SiriTTSOspreyChannel : NSObject

@property (retain, nonatomic) OspreyChannel *grpcChannel;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 configuration:(id)a1;
- (void)initializeDeviceAuthenticationSessionWithCompletion:(id /* block */)a0;
- (void)preconnect;
- (void)streamTTS:(id)a0 beginHandler:(id /* block */)a1 chunkHandler:(id /* block */)a2 completion:(id /* block */)a3;

@end
