@class JFXVideoDecoderInterface;

@interface JFXDepthDecompressor : NSObject {
    struct opaqueCMFormatDescription { } *_previousFormatDescription;
    JFXVideoDecoderInterface *_videoDecoderInterface;
}

@property (readonly, nonatomic) int depthCodecType;

+ (id)NSDataWithCMBlockBuffer:(struct OpaqueCMBlockBuffer { } *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (int)bitDepthOf:(struct opaqueCMFormatDescription { } *)a0;
+ (id)dataWithCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
+ (id)trackOptionsForDepthCodecType:(int)a0 error:(id *)a1;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)decompressAVDepthData_LZ:(struct opaqueCMSampleBuffer { } *)a0 error:(id *)a1;
- (id)decompressAVDepthData:(struct opaqueCMSampleBuffer { } *)a0 error:(id *)a1;
- (id)decompressAVDepthData_BGRA:(struct opaqueCMSampleBuffer { } *)a0 error:(id *)a1;
- (id)decompressAVDepthData_HEVC10:(struct opaqueCMSampleBuffer { } *)a0 error:(id *)a1;
- (id)decompressAVDepthData_Photo:(struct opaqueCMSampleBuffer { } *)a0 error:(id *)a1;
- (id)incompleteImageSourceAuxDataInfoDict:(struct opaqueCMSampleBuffer { } *)a0 error:(id *)a1;

@end
