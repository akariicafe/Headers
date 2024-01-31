@class NUPixelFormat, NSString;

@interface NUMutableBufferAdapter : NUBufferAdapter <NUMutableBuffer, NUMutableBufferProvider> {
    void *_mutableBytes;
}

@property (readonly, nonatomic) void *mutableBytes;
@property (readonly, nonatomic) struct { long long x0; long long x1; } size;
@property (readonly, nonatomic) NUPixelFormat *format;
@property (readonly, nonatomic) long long rowBytes;
@property (readonly, nonatomic) const void *bytes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSize:(struct { long long x0; long long x1; })a0 format:(id)a1 rowBytes:(long long)a2 bytes:(const void *)a3;
- (id)initWithSize:(struct { long long x0; long long x1; })a0 format:(id)a1 rowBytes:(long long)a2 mutableBytes:(void *)a3;
- (void *)mutableBytesAtPoint:(struct { long long x0; long long x1; })a0;
- (id)initWithMutableBuffer:(id)a0;
- (id)newRenderDestination;
- (void)provideMutableBuffer:(id /* block */)a0;

@end
