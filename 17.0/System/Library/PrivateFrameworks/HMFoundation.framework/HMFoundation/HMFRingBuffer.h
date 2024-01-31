@class NSMutableArray;

@interface HMFRingBuffer : HMFObject

@property (readonly) unsigned long long capacity;
@property (readonly) NSMutableArray *buffer;

- (id)initWithCapacity:(unsigned long long)a0;
- (BOOL)containsObject:(id)a0;
- (void).cxx_destruct;
- (void)addObject:(id)a0;

@end
