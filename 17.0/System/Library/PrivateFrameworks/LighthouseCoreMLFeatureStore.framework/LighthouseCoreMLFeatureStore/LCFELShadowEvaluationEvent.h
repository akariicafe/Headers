@class NSUUID, NSString, LCFELBatchProviderInfo, NSArray, NSNumber, NSError;

@interface LCFELShadowEvaluationEvent : NSObject

@property (readonly, nonatomic) NSUUID *contextId;
@property (readonly, nonatomic) NSUUID *eventId;
@property (readonly, nonatomic) NSString *modelName;
@property (readonly, nonatomic) LCFELBatchProviderInfo *inputBachProviderInfo;
@property (readonly, nonatomic) NSArray *evaluatedPredictions;
@property (readonly, nonatomic) NSNumber *accuracy;
@property (readonly, nonatomic) NSNumber *succeeded;
@property (readonly, nonatomic) NSError *evaluationError;

- (void).cxx_destruct;
- (id)init:(id)a0 inputBachProviderInfo:(id)a1 evaluatedPredictions:(id)a2 accuracy:(id)a3 succeeded:(id)a4 evaluationError:(id)a5;

@end
