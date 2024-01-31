@class NSString, NSMutableDictionary;
@protocol SVXPerforming, SVXClientServiceProviding;

@interface SVXClientSpeechSynthesisService : NSObject <SVXClientServiceConsuming, SVXClientSpeechSynthesisServicing> {
    id<SVXPerforming> _performer;
    id<SVXClientServiceProviding> _clientServiceProvider;
    NSMutableDictionary *_audioChunkHandlersByUUID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)synthesizeRequest:(id)a0 completion:(id /* block */)a1;
- (void)prewarmRequest:(id)a0;
- (void)_addAudioChunkHandler:(id /* block */)a0 forUUID:(id)a1;
- (BOOL)_handleSynthesizedBufferForHandlerUUID:(id)a0 audioChunkData:(id)a1 audioChunkIndex:(unsigned long long)a2;
- (void)_removeAudioChunkHandlerForUUID:(id)a0;
- (void)cancelPendingRequest:(id)a0;
- (void)clientServiceDidChange:(BOOL)a0;
- (void)enqueueRequest:(id)a0 completion:(id /* block */)a1;
- (void)handleSynthesizedBufferForHandlerUUID:(id)a0 audioChunkData:(id)a1 audioChunkIndex:(unsigned long long)a2 reply:(id /* block */)a3;
- (id)initWithClientServiceProvider:(id)a0 analytics:(id)a1 performer:(id)a2;
- (void)stopRequest:(id)a0;
- (void)synthesizeRequest:(id)a0 audioChunkHandler:(id /* block */)a1 completion:(id /* block */)a2;

@end
