@class CVNLPCaptionRuntimeParameters, NSCharacterSet;

@interface CVNLPCaptionPostProcessingHandler : NSObject

@property (readonly) NSCharacterSet *trimSet;
@property (readonly, weak) CVNLPCaptionRuntimeParameters *runtimeParameters;

- (void).cxx_destruct;
- (BOOL)_checkAboveThreshold:(id)a0 observationConfidence:(double)a1 difference:(id *)a2;
- (id)_checkForBlockingTokens:(id)a0 blockingTokens:(id)a1;
- (id)_checkForBlockingTokens:(id)a0 visionObservations:(id)a1;
- (id)_excludeGenderReplacements:(id)a0 genderOption:(int)a1 error:(id *)a2;
- (id)_excludeGenderTriggers:(id)a0 genderOption:(int)a1 error:(id *)a2;
- (id)_filterVisionObservations:(id)a0;
- (id)_replacements:(id)a0 genderOption:(int)a1;
- (id)initWithOptions:(id)a0 runtimeParameters:(id)a1;
- (id)postProcessCaptions:(id)a0 genderOption:(int)a1 error:(id *)a2;
- (id)postProcessCaptions:(id)a0 visionObservations:(id)a1;

@end
