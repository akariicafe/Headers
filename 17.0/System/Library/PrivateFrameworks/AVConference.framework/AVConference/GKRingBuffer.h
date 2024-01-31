@interface GKRingBuffer : NSObject {
    void *ringBufRef;
    unsigned int endTime;
    unsigned int capacity;
    unsigned int bytesPerFrame;
}

- (id)init;
- (void)dealloc;
- (id)initWithCapacity:(unsigned int)a0 bytesPerFrame:(unsigned int)a1;
- (int)fetch:(char *)a0 numSamples:(unsigned int)a1 timestamp:(unsigned int)a2;
- (void)increaseCapacity:(unsigned int)a0;
- (int)needsNewNumSamples:(unsigned int)a0 timestamp:(unsigned int)a1;
- (BOOL)store:(char *)a0 numSamples:(unsigned int)a1 timestamp:(unsigned int)a2;

@end
