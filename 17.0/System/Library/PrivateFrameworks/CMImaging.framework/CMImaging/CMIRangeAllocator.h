@interface CMIRangeAllocator : NSObject {
    struct CMIRangeAllocatorList { struct CMIRangeAllocatorListElement *elements; unsigned int numElements; unsigned long long capacity; unsigned long long capacityIncrement; unsigned long long defaultAlignmentMask; } _rangeAllocator;
    unsigned int _defaultAlignment;
    unsigned long long _memSize;
    int _strategyType;
}

- (id)init;
- (void)reset;
- (void)dealloc;
- (int)allocateWithSize:(unsigned long long)a0 alignment:(unsigned int)a1 outputOffset:(unsigned long long *)a2;
- (int)allocateWithSize:(unsigned long long)a0 alignment:(unsigned int)a1 outputOffset:(unsigned long long *)a2 allocationHint:(int)a3;
- (int)allocateWithSize:(unsigned long long)a0 outputOffset:(unsigned long long *)a1;
- (void)freeRangeWithOffset:(unsigned long long)a0 size:(unsigned long long)a1;
- (unsigned int)getFragmentCount;
- (unsigned long long)getMaxFreeSize;
- (unsigned long long)getMaxFreeSizeWithAlignment:(unsigned int)a0;
- (unsigned long long)getTotalFreeMemorySize;
- (int)setupWithMemSize:(unsigned long long)a0 alignment:(unsigned int)a1 strategyType:(int)a2;

@end
