@interface DKUtilities : NSObject

+ (id)extensionAttributes;
+ (id)acceptableDecoderClasses;
+ (id)_fetchItemProviderFromItems:(id)a0 withError:(id *)a1;
+ (id)_sharedParsingFailedError;
+ (Class)diagnosticInputsClassAttribute;
+ (id)inputsForDiagnostic:(id)a0 predicates:(id)a1 specifications:(id)a2 parameters:(id)a3;
+ (id)inputsUsingClass:(Class)a0 diagnostic:(id)a1 predicates:(id)a2 specifications:(id)a3 parameters:(id)a4;
+ (void)moveFilesToSharedContainerInMutableResult:(id)a0;

@end
