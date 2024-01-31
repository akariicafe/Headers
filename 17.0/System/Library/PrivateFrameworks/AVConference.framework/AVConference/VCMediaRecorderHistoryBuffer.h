@interface VCMediaRecorderHistoryBuffer : NSObject {
    id _delegate;
    unsigned int _bufferLength;
    struct __CFArray { } *_timestampQueue;
    struct __CFDictionary { } *_sampleMap;
    unsigned int _lastTimestamp;
    struct __CFAllocator { } *_timestampAllocator;
}

- (void)dealloc;
- (id)delegate;
- (void)flushBuffer;
- (struct opaqueCMSampleBuffer { } *)getClosestSampleForTimestamp:(unsigned int)a0;
- (int)getCount;
- (id)initWithDelegate:(id)a0 bufferLength:(int)a1 dispatchQueue:(id)a2;

@end
