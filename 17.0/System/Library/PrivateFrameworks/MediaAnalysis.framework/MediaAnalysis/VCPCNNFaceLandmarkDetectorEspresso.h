@class VCPCNNModelEspresso;

@interface VCPCNNFaceLandmarkDetectorEspresso : VCPCNNFaceLandmarkDetector {
    VCPCNNModelEspresso *_modelEspresso;
    float *_inputData;
}

+ (id)sharedModel:(id)a0;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (int)computeLandmarks:(float *)a0;
- (float *)getInputBuffer;

@end
