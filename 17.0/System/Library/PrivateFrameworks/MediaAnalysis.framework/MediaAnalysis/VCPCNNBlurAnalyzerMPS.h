@class VCPCNNData, NSURL, VCPCNNModel;

@interface VCPCNNBlurAnalyzerMPS : VCPCNNBlurAnalyzer {
    VCPCNNModel *_model;
    VCPCNNData *_input;
    NSURL *_modelURL;
}

- (id)init;
- (void).cxx_destruct;
- (int)computeSharpnessScore:(float *)a0 textureness:(char *)a1 contrast:(float)a2 imgWidth:(int)a3 cancel:(id /* block */)a4;
- (float *)getInputBuffer:(int)a0 srcWidth:(int)a1 cnnInputHeight:(int *)a2 cnnInputWidth:(int *)a3;
- (int)prepareModelForSourceWidth:(int)a0 andSourceHeight:(int)a1;

@end
