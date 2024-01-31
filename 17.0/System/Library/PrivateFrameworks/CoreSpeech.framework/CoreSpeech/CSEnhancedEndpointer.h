@class MLModel, NSDictionary, NSArray;

@interface CSEnhancedEndpointer : NSObject

@property (retain, nonatomic) MLModel *endpointerModel;
@property (retain, nonatomic) NSDictionary *inputSpecs;
@property (retain, nonatomic) NSArray *outputNodes;
@property (readonly, nonatomic) float defaultThresholdPartial;
@property (readonly, nonatomic) float defaultThresholdRC;
@property (readonly, nonatomic) float relaxedThresholdPartial;
@property (readonly, nonatomic) float relaxedThresholdRC;
@property (readonly, nonatomic) int extraDelayMs;
@property (readonly, nonatomic) BOOL delayedTrigger;
@property (readonly, nonatomic) double targetTimeDefault;
@property (readonly, nonatomic) double targetTimeRelaxed;
@property (readonly, nonatomic) BOOL hasHadDelayedDefaultResult;

- (void).cxx_destruct;
- (id)_constructFeatureDictionary:(id)a0;
- (BOOL)_didDefaultEndpointerFireWithPartialScore:(float)a0 rcScore:(float)a1;
- (BOOL)_didRelaxedEndpointerFireWithPartialScore:(float)a0 rcScore:(float)a1;
- (void)_extractModelSpecs;
- (BOOL)_shouldForceEndpoint:(id)a0;
- (void)didEndpointWithFeatures:(id)a0 audioTimestampMs:(double)a1 completion:(id /* block */)a2;
- (id)initWithModelFile:(id)a0 defaultThresholdPartial:(float)a1 defaultThresholdRC:(float)a2 relaxedThresholdPartial:(float)a3 relaxedThresholdRC:(float)a4 extraDelayMs:(int)a5;
- (void)updateDefaultThresholdPartial:(float)a0 defaultThresholdRC:(float)a1 relaxedThresholdPartial:(float)a2 relaxedThresholdRC:(float)a3;
- (void)updateDelayedTriggerSwitch:(BOOL)a0;

@end
