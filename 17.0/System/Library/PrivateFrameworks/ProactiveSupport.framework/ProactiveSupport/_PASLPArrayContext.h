@interface _PASLPArrayContext : NSObject {
    const unsigned int *_storage;
    unsigned long long _count;
}

- (id)init;
- (id)initWithStorage:(const unsigned int *)a0 count:(unsigned long long)a1;

@end
