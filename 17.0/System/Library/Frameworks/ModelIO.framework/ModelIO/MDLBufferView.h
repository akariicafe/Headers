@class MDLBufferViewAllocator;

@interface MDLBufferView : NSObject {
    const void *_data;
    unsigned long long _length;
    unsigned long long _offset;
    long long _regionIndex;
    MDLBufferViewAllocator *_allocator;
    BOOL _writable;
}

@property (readonly, nonatomic) const void *data;
@property (readonly, nonatomic) unsigned long long length;

- (void).cxx_destruct;
- (id)initWithBytesNoCopy:(const void *)a0 length:(unsigned long long)a1 offset:(unsigned long long)a2 regionIndex:(long long)a3 allocator:(id)a4;

@end
