@interface VCPImageAnalyzer : NSObject {
    struct Scaler { struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } pool_; int width_; int height_; unsigned int format_; struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } transfer_session_; } _scaler;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)aggregateTileResults:(id)a0 tileRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 imageSize:(struct CGSize { double x0; double x1; })a2 landscape:(BOOL)a3 results:(id)a4;
- (int)analyzePixelBuffer:(struct __CVBuffer { } *)a0 flags:(unsigned long long *)a1 results:(id *)a2 cancel:(id /* block */)a3;
- (int)analyzePixelBufferInTiles:(struct __CVBuffer { } *)a0 results:(id)a1 cancel:(id /* block */)a2;
- (int)calculateTextureness:(float *)a0 height:(int)a1 width:(int)a2 sdof:(BOOL)a3 result:(char *)a4;
- (int)processTile:(struct __CVBuffer { } *)a0 results:(id)a1 cancel:(id /* block */)a2;

@end
