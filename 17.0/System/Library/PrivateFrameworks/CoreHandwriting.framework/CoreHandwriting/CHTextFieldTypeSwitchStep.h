@class CHPostProcessingManager;

@interface CHTextFieldTypeSwitchStep : CHPostprocessingStepModifyingOriginalTokens {
    CHPostProcessingManager *_digitProcessor;
    CHPostProcessingManager *_phoneProcessor;
    CHPostProcessingManager *_usernameProcessor;
    CHPostProcessingManager *_emailProcessor;
    CHPostProcessingManager *_urlProcessor;
    CHPostProcessingManager *_asciiProcessor;
    CHPostProcessingManager *_equationProcessor;
}

@property (retain, nonatomic) CHPostProcessingManager *defaultProcessor;

- (void).cxx_destruct;
- (id)initProcessorDefault:(id)a0 processorDigits:(id)a1 processorPhone:(id)a2 processorUsername:(id)a3 processorEmail:(id)a4 processorURL:(id)a5 processorASCII:(id)a6 processorEquation:(id)a7;
- (id)process:(id)a0 options:(id)a1;

@end
