@class ServerSpeechContext;

@interface ServerSpeechDataProviderContext : NSObject

@property (nonatomic) struct __TTSPlayback { } *playback;
@property (retain, nonatomic) ServerSpeechContext *speechContext;
@property (nonatomic) struct AudioQueueBuffer { unsigned int x0; void *x1; unsigned int x2; void *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; unsigned int x6; } *currentBuffer;
@property (nonatomic) int audioByteCount;

- (void).cxx_destruct;

@end
