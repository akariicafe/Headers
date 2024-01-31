@class VisionCoreE5RTFunction;

@interface VisionCoreE5RTInferenceFunctionDescriptor : VisionCoreInferenceNetworkDescriptor

@property (readonly, nonatomic) VisionCoreE5RTFunction *function;

+ (id)descriptorForProgramLibraryName:(id)a0 functionName:(id)a1 inputImageName:(id)a2 outputNames:(id)a3 confidencesOutputName:(id)a4 labelsFileName:(id)a5 error:(id *)a6;
+ (id)networkVersionForProgramLibrary:(id)a0 function:(id)a1 error:(id *)a2;

- (void).cxx_destruct;

@end
