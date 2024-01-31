@interface MLProgramContainer : MLNeuralNetworkContainer

+ (BOOL)populateInputNameToShapeMap:(void *)a0 fromContainer:(id)a1 forFunction:(const void *)a2 program:(const void *)a3 withValidation:(BOOL)a4 error:(id *)a5;
+ (void)updateOptionalDefaultValueParametersInContainer:(id)a0 usingProgram:(const void *)a1;
+ (struct shared_ptr<MIL::IRProgram> { struct IRProgram *x0; struct __shared_weak_count *x1; })loadProgramFromCompiledArchive:(void *)a0 error:(id *)a1;
+ (id)containerFromCompiledArchive:(void *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;
+ (struct unique_ptr<MIL::IRProgram, std::default_delete<MIL::IRProgram>> { struct __compressed_pair<MIL::IRProgram *, std::default_delete<MIL::IRProgram>> { struct IRProgram *x0; } x0; })loadProgramAtURL:(id)a0 error:(id *)a1;

@end
