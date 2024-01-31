@class NSString;

@interface WFFindHealthSamplesAction : WFContentItemFilterAction

@property (readonly, nonatomic) NSString *readableSampleType;

- (id)configurationData;
- (id)query;
- (id)parameterDefinitions;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)createStateForParameter:(id)a0 fromSerializedRepresentation:(id)a1;
- (void)finishRunningWithError:(id)a0;
- (id)generatedResourceNodes;
- (void)initializeParameters;
- (void)updateParameterVisibility;
- (void)wasAddedToWorkflow:(id)a0;
- (void)wasRemovedFromWorkflow:(id)a0;
- (void)finishRunningWithNoSamples;
- (void)resourceAvailabilityChanged;
- (id)sampleTypeName;
- (void)updateSourcesForSampleType:(id)a0;

@end
