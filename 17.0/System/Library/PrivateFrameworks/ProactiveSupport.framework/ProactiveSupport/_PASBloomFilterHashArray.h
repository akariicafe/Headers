@interface _PASBloomFilterHashArray : NSObject {
    unsigned long long _size;
    int *_data;
}

@property (readonly, nonatomic) int *hashes;

- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initInternal;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
