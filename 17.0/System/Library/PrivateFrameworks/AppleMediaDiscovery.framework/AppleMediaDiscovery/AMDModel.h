@class NSString;

@interface AMDModel : NSManagedObject

@property (copy, nonatomic) NSString *compiledModelDir;
@property (nonatomic) long long creationTimeSeconds;
@property (copy, nonatomic) NSString *modelId;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *version;

+ (id)fetchRequest;
+ (id)deleteWithPredicate:(id)a0 error:(id *)a1;
+ (id)deleteAllModelUrls:(id *)a0;
+ (void)deleteModels:(id)a0 error:(id *)a1;
+ (id)fetchAll:(id *)a0;
+ (id)getCurrentModelInfoByModelId;
+ (id)getModelInfo:(id)a0 error:(id *)a1;
+ (id)getModelPath:(id)a0 error:(id *)a1;
+ (id)getModelPathForUsecase:(id)a0 inDomain:(id)a1 forModelId:(id)a2 withTreatmentId:(id)a3 error:(id *)a4;
+ (void)saveModels:(id)a0 error:(id *)a1;

@end
