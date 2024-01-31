@class CIContext;

@interface _UIImageCIImageRenderer : NSObject {
    struct __IOSurface { } *_surface;
    struct { unsigned char surfaceIsValid : 1; unsigned char uses16bpc : 1; } _flags;
    CIContext *_context;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
