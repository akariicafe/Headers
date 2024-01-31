@interface MLNeuralNetworkUpdateUtils : NSObject

+ (id)createClassLabelToIndexMapWith:(id)a0;
+ (id)loadParameterDescriptionsAndContainerFromUpdateParameters:(const void *)a0 modelDescription:(id)a1;
+ (BOOL)loadUpdateParameters:(void *)a0 fromCompiledArchive:(void *)a1 error:(id *)a2;

@end
