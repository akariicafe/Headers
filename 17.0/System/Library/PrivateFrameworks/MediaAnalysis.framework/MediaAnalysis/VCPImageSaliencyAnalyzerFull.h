@class VCPCNNData, NSURL, VCPCNNModel;

@interface VCPImageSaliencyAnalyzerFull : VCPImageSaliencyAnalyzer {
    VCPCNNModel *_model;
    VCPCNNData *_input;
    NSURL *_modelURL;
}

- (void).cxx_destruct;
- (float *)getInputBuffer:(int)a0 srcWidth:(int)a1 cnnInputHeight:(int *)a2 cnnInputWidth:(int *)a3;
- (int)getSalientRegions:(id /* block */)a0;
- (int)prepareModelForSourceWidth:(int)a0 andSourceHeight:(int)a1;

@end
