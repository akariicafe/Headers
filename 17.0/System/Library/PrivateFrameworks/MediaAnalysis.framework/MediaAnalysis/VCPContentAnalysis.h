@class VCPCNNData, VCPCNNModel;

@interface VCPContentAnalysis : NSObject {
    VCPCNNModel *_model;
    VCPCNNData *_input;
    unsigned long long _previousContentType;
    struct __CVBuffer { } *_argbPixelBuffer;
    struct OpaqueVTPixelTransferSession { } *_argbTransferSession;
}

+ (id)contentAnalysis;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (int)blockContentDetection:(unsigned long long *)a0;
- (void)copyBlock:(char *)a0 withStride:(unsigned long long)a1 toBlock:(float *)a2;
- (int)detectPixelBuffer:(struct __CVBuffer { } *)a0 contentType:(unsigned long long *)a1;

@end
