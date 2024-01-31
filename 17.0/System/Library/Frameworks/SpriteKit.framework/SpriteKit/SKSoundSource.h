@class NSMutableArray;

@interface SKSoundSource : NSObject {
    unsigned int _sourceId;
    NSMutableArray *_buffers;
}

@property (nonatomic) BOOL shouldLoop;
@property (nonatomic) double gain;
@property (nonatomic) struct CGPoint { double x0; double x1; } position;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) int completedBufferCount;
@property (readonly, nonatomic) int queuedBufferCount;

+ (id)source;
+ (id)sourceWithBuffer:(id)a0;

- (BOOL)play;
- (void)pause;
- (id)init;
- (void)dealloc;
- (void)stop;
- (id)description;
- (void).cxx_destruct;
- (void)purgeCompletedBuffers;
- (void)queueBuffer:(id)a0;

@end
