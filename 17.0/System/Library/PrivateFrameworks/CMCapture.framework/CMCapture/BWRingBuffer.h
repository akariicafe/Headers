@interface BWRingBuffer : NSObject <NSFastEnumeration> {
    void *_ringBuffer;
    int _outputIndex;
    int _inputIndex;
    int _length;
    unsigned long long _typeSize;
}

- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;

@end
