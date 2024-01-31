@interface SCMLVideoFrame : NSObject

@property (readonly) struct opaqueCMSampleBuffer { } *frameBuffer;
@property (readonly) unsigned long long frameIndex;

- (void)dealloc;
- (double)_timestamp;
- (id)initWithFrameBuffer:(struct opaqueCMSampleBuffer { } *)a0 frameIndex:(long long)a1;
- (id)metaDataInfo;
- (BOOL)saveToPngWithUrl:(id)a0;

@end
