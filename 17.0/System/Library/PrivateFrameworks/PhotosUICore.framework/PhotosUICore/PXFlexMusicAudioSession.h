@class PXFlexMusicAsset;

@interface PXFlexMusicAudioSession : PXAVPlayerAudioSession

@property (readonly, nonatomic) PXFlexMusicAsset *flexMusicAsset;
@property (nonatomic) long long audioRequestID;

- (void)dealloc;
- (void)cancelMediaRequest;
- (id)initWithAsset:(id)a0 volume:(float)a1 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 queue:(id)a3 audioSessionDelegate:(id)a4;
- (void)requestMediaWithResultHandler:(id /* block */)a0;

@end
