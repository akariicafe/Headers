@class NSString, NSDictionary, AMDOutputBuilder, NSNumber, AMDInputBuilder;

@interface AMDUseCaseWorkflow : NSObject

@property (retain, nonatomic) NSString *useCaseId;
@property (retain, nonatomic) NSString *modelId;
@property (retain, nonatomic) NSString *coldstartModelId;
@property (retain, nonatomic) NSString *modelFormat;
@property (retain, nonatomic) NSString *treatmentId;
@property (retain, nonatomic) NSNumber *maxItemsToDisplay;
@property (retain, nonatomic) NSString *modelName;
@property (retain, nonatomic) AMDInputBuilder *inputBuilder;
@property (retain, nonatomic) AMDOutputBuilder *outputBuilder;
@property (retain, nonatomic) NSNumber *startTimestamp;
@property (retain, nonatomic) NSNumber *endTimestamp;
@property (retain, nonatomic) NSDictionary *ruleParams;
@property (retain, nonatomic) NSString *secondaryModelId;
@property (retain, nonatomic) AMDInputBuilder *secondaryModelInputBuilder;
@property (retain, nonatomic) AMDOutputBuilder *secondaryModelOutputBuilder;

- (id)initWithDictionary:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)getPredictions:(unsigned long long)a0 forDomain:(id)a1 error:(id *)a2;
- (id)getColdstartModelId;
- (id)getMaxItemsToDisplay;
- (id)getModelFormat;
- (id)getModelId;
- (id)getOutputFeatureIds;
- (id)getTreatmentId;
- (id)getUseCaseId;

@end
