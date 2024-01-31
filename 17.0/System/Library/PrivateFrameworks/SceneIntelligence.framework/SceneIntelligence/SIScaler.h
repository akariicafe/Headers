@interface SIScaler : NSObject {
    struct __CVPixelBufferPool { } *_pool;
    struct OpaqueVTPixelTransferSession { } *_session;
    struct CGSize { double width; double height; } _outputResolution;
    unsigned int _outputPixelFormat;
    unsigned long long _outputBufferBytePerRowAlignment;
    unsigned long long _algorithmKey;
}

- (void)dealloc;
- (id)initForInputResolution:(struct CGSize { double x0; double x1; })a0 outputResolution:(struct CGSize { double x0; double x1; })a1 outputPixelFormat:(unsigned int)a2 mode:(unsigned long long)a3;
- (BOOL)_imageConformsToOutput:(struct __CVBuffer { } *)a0;
- (struct __CVBuffer { } *)createScaledImage:(struct __CVBuffer { } *)a0;
- (id)initForInputResolution:(struct CGSize { double x0; double x1; })a0 outputResolution:(struct CGSize { double x0; double x1; })a1 outputPixelFormat:(unsigned int)a2;
- (id)initForOutputResolution:(struct CGSize { double x0; double x1; })a0 outputPixelFormat:(unsigned int)a1 mode:(unsigned long long)a2;
- (id)initForOutputResolution:(struct CGSize { double x0; double x1; })a0 outputPixelFormat:(unsigned int)a1 mode:(unsigned long long)a2 algorithmKey:(id)a3;
- (id)initForOutputResolution:(struct CGSize { double x0; double x1; })a0 outputPixelFormat:(unsigned int)a1 mode:(unsigned long long)a2 bytePerRowAlignment:(unsigned long long)a3 algorithmKey:(id)a4;
- (struct __CVBuffer { } *)scaleImage:(struct __CVBuffer { } *)a0;
- (BOOL)scaleImage:(struct __CVBuffer { } *)a0 outputBuffer:(struct __CVBuffer { } *)a1;

@end
