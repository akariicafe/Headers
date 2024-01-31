@class NSMutableArray;

@interface SGCircularBufferArray : NSObject <NSFastEnumeration> {
    NSMutableArray *_backingStore;
    unsigned long long _currentIndex;
    unsigned long long _capacity;
    unsigned long long _mutationDetector;
}

- (id)initWithCapacity:(unsigned long long)a0;
- (unsigned long long)count;
- (id)allObjects;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;

@end
