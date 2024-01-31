@class NSString;

@interface ABPKMLModelConfiguration3DLifting : ABPKMLModelConfiguration {
    NSString *_mlModelPath;
}

- (id)init;
- (void).cxx_destruct;
- (id)inputTensorNames;
- (id)outputTensorNames;
- (id)compiledMLModelPath;

@end
