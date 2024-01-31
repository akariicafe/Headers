@interface CSMil2BnnsUtils : NSObject

+ (void)_changePermissionOfBnnsIr:(id)a0;
+ (void)_compileWithExceptionHandlingUsingModelFilePath:(id)a0 bnnsIrPath:(id)a1 milConfigPath:(id)a2 error:(id *)a3;
+ (id)compileModelWithMilFile:(id)a0 bnnsIrCachePath:(id)a1;
+ (void *)mmapModelWithConfig:(id)a0 mappedSizeOut:(id *)a1;
+ (id)readBnnsIrFromCacheMapWithMilFile:(id)a0;
+ (void)removeBnnsIrFromCacheMapWithMilFile:(id)a0;
+ (void)removeConfigFromQuasarComputeEngineCacheWithMilBnnsPath:(id)a0 bnnsIrPath:(id)a1;
+ (void)setBnnsIrForCacheMap:(id)a0 withMilFile:(id)a1;

@end
