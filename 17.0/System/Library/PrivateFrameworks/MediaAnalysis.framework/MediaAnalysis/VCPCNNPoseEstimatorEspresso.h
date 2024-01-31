@class VCPCNNModelEspresso;

@interface VCPCNNPoseEstimatorEspresso : VCPCNNPoseEstimator {
    VCPCNNModelEspresso *_modelEspresso;
    float *_inputData;
}

+ (id)sharedModel:(id)a0;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (int)computePoseScore:(float *)a0;
- (float *)getInputBuffer;

@end
