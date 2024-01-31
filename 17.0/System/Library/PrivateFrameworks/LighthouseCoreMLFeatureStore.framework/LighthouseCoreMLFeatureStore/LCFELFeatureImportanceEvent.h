@class NSUUID, NSString, LCFELBatchProviderInfo, NSArray, NSNumber, NSError;

@interface LCFELFeatureImportanceEvent : NSObject

@property (readonly, nonatomic) NSUUID *contextId;
@property (readonly, nonatomic) NSUUID *eventId;
@property (readonly, nonatomic) LCFELBatchProviderInfo *inputBachProviderInfo;
@property (readonly, nonatomic) NSString *targetLabelFeatureName;
@property (readonly, nonatomic) NSArray *results;
@property (readonly, nonatomic) NSNumber *succeeded;
@property (readonly, nonatomic) NSError *analysisError;

- (void).cxx_destruct;
- (id)init:(id)a0 targetLabelFeatureName:(id)a1 results:(id)a2 succeeded:(id)a3 analysisError:(id)a4;

@end
