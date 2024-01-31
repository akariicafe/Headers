@class NSString, NSArray;

@interface ATXCandidateRelevanceModelTrainingCoordinator : NSObject <ATXCandidateRelevanceModelTrainingCoordinatorProtocol> {
    NSArray *_configs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfigs:(id)a0;
- (void)trainUsingConfig:(id)a0 xpcActivity:(id)a1 disregardDatasetMetadataRequirements:(BOOL)a2;
- (void)trainWithXPCActivity:(id)a0 disregardDatasetMetadataRequirements:(BOOL)a1;

@end
