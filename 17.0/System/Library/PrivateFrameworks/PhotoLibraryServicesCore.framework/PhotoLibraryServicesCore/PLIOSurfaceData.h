@interface PLIOSurfaceData : NSData {
    struct __IOSurface { } *_surface;
    const void *_bytes;
    unsigned long long _length;
}

+ (id)dataWithIOSurface:(void *)a0;

- (void)dealloc;
- (unsigned long long)length;
- (const void *)bytes;
- (id)initWithIOSurface:(void *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIOSurface:(void *)a0 length:(unsigned long long)a1;

@end
