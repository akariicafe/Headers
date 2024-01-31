@class NSMutableData;

@interface MADPNGAlphaSequenceWriter : MADAlphaSequenceWriter {
    NSMutableData *_data;
    struct CF<CGImageDestination *> { struct CGImageDestination *value_; } _destination;
    unsigned long long _remainingFrameCount;
    struct CF<__CVBuffer *> { struct __CVBuffer *value_; } _lastPixelBuffer;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastPTS;
    struct CF<CGImage *> { struct CGImage *value_; } _lastImage;
    int _status;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)addPixelBuffer:(struct __CVBuffer { } *)a0 withTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)finishWithEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithFrameCount:(unsigned long long)a0;
- (id)transcodeWithMaxDimension:(unsigned long long)a0;

@end
