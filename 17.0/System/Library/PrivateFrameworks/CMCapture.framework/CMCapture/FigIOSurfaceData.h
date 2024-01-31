@interface FigIOSurfaceData : NSData {
    struct __IOSurface { } *_surface;
    unsigned long long _length;
    const void *_bytes;
}

+ (void)initialize;
+ (id)dataWithIOSurface:(struct __IOSurface { } *)a0;
+ (id)dataWithIOSurface:(struct __IOSurface { } *)a0 length:(unsigned long long)a1;

- (void)dealloc;
- (unsigned long long)length;
- (const void *)bytes;
- (id)initWithIOSurface:(struct __IOSurface { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIOSurface:(struct __IOSurface { } *)a0 length:(unsigned long long)a1;

@end
