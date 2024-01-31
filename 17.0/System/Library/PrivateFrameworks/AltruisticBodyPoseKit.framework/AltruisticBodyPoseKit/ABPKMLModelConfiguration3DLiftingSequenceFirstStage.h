@class NSString;

@interface ABPKMLModelConfiguration3DLiftingSequenceFirstStage : ABPKMLModelConfiguration {
    NSString *_mlModelPath;
}

- (id)init;
- (void).cxx_destruct;
- (id)inputTensorNames;
- (id)outputTensorNames;
- (id)compiledMLModelPath;

@end
