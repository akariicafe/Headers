@interface _EARe5mlCompiler : NSObject

+ (void)compileWithModelConfig:(id)a0 completion:(id /* block */)a1;
+ (void)compileWithModelMilPath:(id)a0 computePlatform:(id)a1 completion:(id /* block */)a2;
+ (void)compileWithModelMilPath:(id)a0 computePlatforms:(id)a1 completion:(id /* block */)a2;
+ (unsigned long long)getMilPathWithModelConfig:(id)a0 files:(void *)a1;

@end
