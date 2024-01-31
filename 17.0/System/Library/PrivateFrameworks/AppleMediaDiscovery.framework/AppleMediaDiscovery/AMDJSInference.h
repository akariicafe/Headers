@interface AMDJSInference : NSObject

+ (void)appendInAppEventDataTo:(id)a0 forDsId:(id)a1 withInferencePayload:(id)a2;
+ (BOOL)areValidInputs:(id)a0 domainOut:(long long *)a1 useCaseIdsArray:(id)a2 useCaseIdsSetOut:(id *)a3 storeFrontIdString:(id)a4 storeFrontIdOut:(id *)a5 dsId:(id)a6 error:(id *)a7;
+ (id)getDataForBizLogicForWorkflow:(id)a0 useCaseId:(id)a1 domainName:(id)a2;
+ (id)getIdAndScoresFrom:(id)a0 useCaseId:(id)a1 summary:(id)a2 bigGummary:(id)a3 errorKey:(id)a4;
+ (id)getPredictionForUseCase:(id)a0 treatmentId:(id)a1 UsingWorkflow:(id)a2 domainName:(id)a3 persistanceInfo:(id)a4 summary:(id)a5 bigSummary:(id)a6 errorKey:(id)a7;
+ (id)getWorkflowForUseCase:(id)a0 treatmentId:(id)a1 domain:(long long)a2 summary:(id)a3 bigSummary:(id)a4 errorKey:(id)a5;
+ (BOOL)persist:(id)a0 withHandle:(id)a1 domainName:(id)a2 summary:(id)a3;
+ (id)runInference:(id)a0 error:(id *)a1;

@end
