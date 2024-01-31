@interface CSITextureHelper : NSObject {
    struct _csibitmap { unsigned int x0; union { unsigned int x0; struct _csibitmapflags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned int x2 : 30; } x1; } x1; unsigned int x2; unsigned int x3; unsigned char x4[0]; } *bmp;
    struct CGColorSpace { } *colorspaceHint;
    unsigned long long sourceRowbytes;
    unsigned int width;
    unsigned int height;
    unsigned int imageBytes;
    int pixelFormat;
}

- (void)dealloc;

@end
