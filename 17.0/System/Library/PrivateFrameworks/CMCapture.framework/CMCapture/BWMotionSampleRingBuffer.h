@class BWRingBuffer;

@interface BWMotionSampleRingBuffer : NSObject <NSFastEnumeration> {
    BWRingBuffer *_ringBuffer;
    double _maxDuration;
    int _maxCount;
}

- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;

@end
