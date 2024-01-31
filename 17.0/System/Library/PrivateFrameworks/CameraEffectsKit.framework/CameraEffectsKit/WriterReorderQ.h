@class PVFrameSet;

@interface WriterReorderQ : NSObject

@property (retain, nonatomic) PVFrameSet *frameSet;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastReorderedTime;

- (id)init;
- (void).cxx_destruct;
- (id)clearQueuedFrameSet;
- (id)getReorderedFrameSet:(id)a0;

@end
