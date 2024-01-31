@class NSUUID, NSString, LCFELBatchProviderInfo, NSError, NSNumber;

@interface LCFELModelTrainingEvent : NSObject

@property (readonly, nonatomic) NSUUID *contextId;
@property (readonly, nonatomic) NSUUID *eventId;
@property (readonly, nonatomic) NSString *modelName;
@property (readonly, nonatomic) LCFELBatchProviderInfo *bachProviderInfo;
@property (readonly, nonatomic) NSNumber *succeeded;
@property (readonly, nonatomic) NSError *trainingError;

- (void).cxx_destruct;
- (id)init:(id)a0 batchProviderInfo:(id)a1 succeeded:(id)a2 trainingError:(id)a3;

@end
