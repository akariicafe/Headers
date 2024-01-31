@interface MLLoader : NSObject

+ (BOOL)_createDecryptSessionForModelAtURL:(id)a0 configuration:(id)a1 decryptSession:(id *)a2 loaderEvent:(id)a3 error:(id *)a4;
+ (id)_loadModelWithClass:(Class)a0 fromArchive:(void *)a1 modelVersionInfo:(id)a2 compilerVersionInfo:(id)a3 configuration:(id)a4 error:(id *)a5;
+ (id)loadModelFromAssetAtURL:(id)a0 configuration:(id)a1 error:(id *)a2;
+ (id)_loadModelFromAssetAtURL:(id)a0 configuration:(id)a1 loaderEvent:(id)a2 error:(id *)a3;
+ (BOOL)_parseModelArchive:(void *)a0 modelType:(int *)a1 compilerVersion:(id *)a2 modelVersion:(id *)a3 error:(id *)a4;
+ (id)_loadModelFromArchive:(void *)a0 configuration:(id)a1 loaderEvent:(id)a2 useUpdatableModelLoaders:(BOOL)a3 error:(id *)a4;
+ (void)_populateLoaderAndPredictionEvent:(id)a0 model:(id)a1 configuration:(id)a2 loadTimeDuration:(unsigned long long)a3;
+ (id)loadUpdatableModelFromAssetAtURL:(id)a0 configuration:(id)a1 error:(id *)a2;
+ (id)loadModelFromArchive:(void *)a0 error:(id *)a1;
+ (id)_loadWithModelLoaderFromArchive:(void *)a0 configuration:(id)a1 loaderEvent:(id)a2 useUpdatableModelLoaders:(BOOL)a3 error:(id *)a4;
+ (id)loadModelFromArchive:(void *)a0 configuration:(id)a1 error:(id *)a2;
+ (id)_loadModelFromArchive:(void *)a0 configuration:(id)a1 modelVersion:(id)a2 compilerVersion:(id)a3 loaderEvent:(id)a4 useUpdatableModelLoaders:(BOOL)a5 loadingClasses:(id)a6 error:(id *)a7;
+ (id)loadUpdatableModelFromArchive:(void *)a0 configuration:(id)a1 error:(id *)a2;
+ (id)_conformConfiguration:(id)a0 usingModelArchive:(void *)a1;
+ (id)_findCodedObjectURLInModelArchive:(void *)a0;
+ (id)_loadUpdatableModelWithClass:(Class)a0 fromArchive:(void *)a1 modelVersionInfo:(id)a2 compilerVersionInfo:(id)a3 configuration:(id)a4 error:(id *)a5;
+ (id)_unarchiveCodedModelObjectAtURL:(id)a0 error:(id *)a1;
+ (BOOL)checkAssetPath:(id)a0 error:(id *)a1;
+ (id)loadModelFromAssetAtURL:(id)a0 error:(id *)a1;

@end
