@interface MLNeuralNetworkV1Container : MLNeuralNetworkContainer

+ (id)readerFromArchive:(void *)a0 error:(id *)a1;
+ (id)containerFromCompiledArchive:(void *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;

@end
