@interface MLSaver : NSObject

+ (BOOL)saveModelToArchive:(void *)a0 model:(id)a1 error:(id *)a2;
+ (BOOL)copyModelAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (BOOL)saveModelToArchive:(void *)a0 model:(id)a1 compilerOptions:(id)a2 error:(id *)a3;
+ (BOOL)saveModelToAssetAtURL:(id)a0 model:(id)a1 error:(id *)a2;

@end
