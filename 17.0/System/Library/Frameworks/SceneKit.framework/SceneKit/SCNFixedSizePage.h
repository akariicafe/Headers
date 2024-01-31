@class NSMutableIndexSet;
@protocol MTLBuffer;

@interface SCNFixedSizePage : NSObject {
    unsigned long long _elementSize;
    NSMutableIndexSet *_freeIndices;
}

@property (readonly, nonatomic) id<MTLBuffer> buffer;

- (BOOL)isFull;
- (void)dealloc;
- (unsigned long long)_allocateElement;
- (void)deallocateElementAtOffset:(unsigned long long)a0;
- (BOOL)hasFreeElementsLeft;
- (id)initWithBuffer:(id)a0 elementSize:(unsigned long long)a1;
- (id)newSubBufferForAllocator:(id)a0;

@end
