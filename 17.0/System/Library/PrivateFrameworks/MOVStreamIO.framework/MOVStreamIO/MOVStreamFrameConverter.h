@class MIOPixelBufferPool;

@interface MOVStreamFrameConverter : NSObject {
    MIOPixelBufferPool *_pool;
    struct OpaqueVTPixelTransferSession { } *_transferSession;
}

@property BOOL transferSessionUsageDisabled;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (struct __CVBuffer { } *)convertPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)initWithTargetWidth:(unsigned long long)a0 height:(unsigned long long)a1 format:(unsigned int)a2 bytesPerRow:(unsigned long long)a3;
- (id)initWithTargetWidth:(unsigned long long)a0 height:(unsigned long long)a1 format:(unsigned int)a2 bytesPerRows:(id)a3;
- (id)initWithTargetWidth:(unsigned long long)a0 height:(unsigned long long)a1 format:(unsigned int)a2 extendedPixelsPerRow:(unsigned long long)a3;

@end
