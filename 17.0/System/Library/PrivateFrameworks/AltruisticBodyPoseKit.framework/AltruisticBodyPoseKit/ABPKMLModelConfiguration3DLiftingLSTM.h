@class NSString;

@interface ABPKMLModelConfiguration3DLiftingLSTM : ABPKMLModelConfiguration {
    NSString *_mlModelPath;
}

- (id)init;
- (void).cxx_destruct;
- (id)inputTensorNames;
- (id)outputTensorNames;
- (id)compiledMLModelPath;
- (id)inputCellStateTensorNames;
- (id)inputHiddenStateTensorNames;
- (id)inputPose2dTensorNames;
- (id)outputPose3dTensorNames;
- (id)outputToCellStateTensorNames;
- (id)outputToHiddenStateTensorNames;

@end
