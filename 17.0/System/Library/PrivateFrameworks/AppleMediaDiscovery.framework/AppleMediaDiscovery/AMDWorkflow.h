@class NSString, NSData;

@interface AMDWorkflow : NSManagedObject

@property (copy, nonatomic) NSString *callUUID;
@property (nonatomic) short domain;
@property (nonatomic) long long endTime;
@property (copy, nonatomic) NSString *modelId;
@property (copy, nonatomic) NSString *secondaryModelId;
@property (nonatomic) long long startTime;
@property (copy, nonatomic) NSString *treatmentId;
@property (copy, nonatomic) NSString *useCaseId;
@property (retain, nonatomic) NSData *workflow;

+ (id)deleteAllWorkflows:(id *)a0;
+ (id)deleteWorkflowsForDomain:(long long)a0 andTreatmentId:(id)a1 andUseCaseId:(id)a2 error:(id *)a3;
+ (id)getAllActiveWorkflowsForDomain:(long long)a0 andUseCaseId:(id)a1 error:(id *)a2;
+ (id)fetchRequest;
+ (id)deleteWorkflowsForModelId:(id)a0 error:(id *)a1;
+ (id)deleteWorkflowsForDomain:(long long)a0 error:(id *)a1;
+ (id)getAllWorkflowsForDomain:(long long)a0 withUseCaseId:(id)a1 error:(id *)a2;
+ (id)getWorkflowsForModelId:(id)a0 error:(id *)a1;
+ (id)getWorkflowsForDomain:(long long)a0 error:(id *)a1;
+ (id)fetchWithPredicates:(id)a0 error:(id *)a1;
+ (id)getWorkflowsForDomain:(long long)a0 andTreatmentId:(id)a1 andUseCaseId:(id)a2 error:(id *)a3;
+ (id)fetchAllWorkflows:(id *)a0;
+ (void)addWorkflowsFromInflightTable:(id)a0 error:(id *)a1;
+ (id)deleteWorkflowForDomain:(long long)a0 withModelId:(id)a1 withSecondaryModelId:(id)a2 andUsecaseId:(id)a3 andTreatmentId:(id)a4 error:(id *)a5;
+ (id)performWorkflowCleanupForDomain:(long long)a0 error:(id *)a1;
+ (void)saveWorkflow:(id)a0 forDomain:(long long)a1 withCallUUID:(id)a2 error:(id *)a3;
+ (id)getCurrentWorkflowForDomain:(long long)a0 andTreatmentId:(id)a1 andUseCaseId:(id)a2 error:(id *)a3;
+ (id)deleteWithPredicate:(id)a0 error:(id *)a1;

@end
