@interface PXAppleMusicPreviewAudioSession : PXAVPlayerAudioSession {
    long long _requestID;
}

- (void)_handleRequestedAsset:(id)a0 audioMix:(id)a1 info:(id)a2 resultHandler:(id /* block */)a3;
- (void)_handleValuesLoadedForAsset:(id)a0 audioMix:(id)a1 info:(id)a2 resultHandler:(id /* block */)a3;
- (void)cancelMediaRequest;
- (id)initWithAsset:(id)a0 volume:(float)a1 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 queue:(id)a3 audioSessionDelegate:(id)a4;
- (void)requestMediaWithResultHandler:(id /* block */)a0;

@end
