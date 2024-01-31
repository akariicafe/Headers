@interface MLCompiler : NSObject

+ (id)addMLProgramToCompiledModelAtURL:(id)a0 error:(id *)a1;
+ (id)contentsOfDirectoryAtURL:(id)a0 error:(id *)a1;
+ (id)compiledVersionForSpecificationAtURL:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)compileModelAtURL:(id)a0 toURL:(id)a1 options:(id)a2 error:(id *)a3;
+ (id)hashSpecificationAtURL:(id)a0;
+ (void)_updateMetadata:(void *)a0 withMetadata:(id)a1;
+ (BOOL)encryptFileAtURL:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)compileSpecificationAtURL:(id)a0 toURL:(id)a1 options:(id)a2 error:(id *)a3;
+ (id)_compileSpecificationAtURL:(id)a0 toURL:(id)a1 compiledModelName:(id)a2 overridingModelDescription:(id)a3 options:(id)a4 error:(id *)a5;
+ (BOOL)fillCompilerEvent:(id)a0 withMetadataFromModelAt:(id)a1 error:(id *)a2;
+ (id)compiledVersionForModelAtURL:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)versionInfo;
+ (id)compileSpecification:(void *)a0 toArchive:(void *)a1 options:(id)a2 compilerEvent:(id)a3 error:(id *)a4;
+ (id)addMLProgramToCompiledModelAtURL:(id)a0 withCompilationMode:(int)a1 dryRun:(BOOL)a2 oarchiveForModelCompilation:(void *)a3 compilerEvent:(id)a4 error:(id *)a5;
+ (id)compiledVersionForSpecification:(void *)a0 options:(id)a1 error:(id *)a2;
+ (BOOL)encryptCompiledModelAtURL:(id)a0 options:(id)a1 error:(id *)a2;
+ (BOOL)_loadSpecificationAtURL:(id)a0 to:(void *)a1 error:(id *)a2;
+ (void)_updateFeatures:(void *)a0 withFeatures:(id)a1;
+ (void)_updateSpecification:(void *)a0 withModelDescription:(id)a1;
+ (BOOL)fingerprintSpecificationAtURL:(id)a0 toArchive:(void *)a1 hash:(id)a2 error:(id *)a3;
+ (BOOL)storeEncryptionInfoInCompiledArchive:(void *)a0 options:(id)a1 error:(id *)a2;
+ (id)compileSpecification:(void *)a0 toArchive:(void *)a1 options:(id)a2 error:(id *)a3;
+ (BOOL)canAddMLProgramToCompiledModelAtURL:(id)a0;

@end
