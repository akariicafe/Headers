@protocol MTLBuffer;

@interface CVAPhotoMTLRingBuffer : NSObject {
    struct array<id<MTLBuffer>, 5UL> { id<MTLBuffer> __elems_[5]; } _buffers;
    unsigned long long _index;
}

- (id)initWithLength:(unsigned long long)a0 options:(unsigned long long)a1 device:(id)a2;
- (id).cxx_construct;
- (id)getBufferAt:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1 options:(unsigned long long)a2 device:(id)a3;
- (id)advancedBuffer;
- (id)currentBuffer;

@end
