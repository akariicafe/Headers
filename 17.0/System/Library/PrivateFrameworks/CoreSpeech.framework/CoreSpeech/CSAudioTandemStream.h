@class NSString, CSAudioStream;

@interface CSAudioTandemStream : CSAudioStream <CSAudioStreamProvidingDelegate>

@property (weak, nonatomic) CSAudioStream *primaryStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isStreaming;
- (void).cxx_destruct;
- (id)initWithMasterAudioStream:(id)a0 name:(id)a1;
- (void)attachToPrimaryStreamWithCompletion:(id /* block */)a0;
- (BOOL)prepareAudioStreamSyncWithRequest:(id)a0 error:(id *)a1;
- (void)prepareAudioStreamWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)startAudioStreamWithOption:(id)a0 completion:(id /* block */)a1;
- (void)stopAudioStreamWithOption:(id)a0 completion:(id /* block */)a1;

@end
