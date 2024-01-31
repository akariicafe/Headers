@class NSString, RETrainingSimulationClient;

@interface RETrainingSimulator : NSObject <RETrainingSimulationClientDelegate> {
    RETrainingSimulationClient *_client;
}

@property (readonly, nonatomic) NSString *targetProcessName;
@property (readonly, nonatomic) NSString *relevanceEngineName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)allElements;
- (void).cxx_destruct;
- (id)allElementIdentifiers;
- (id)availableRelevanceEngines;
- (void)createElementFromDescription:(id)a0;
- (id)encodedObjectAtPath:(id)a0;
- (id)initWithTargetProcess:(id)a0 relevanceEngine:(id)a1;
- (BOOL)performCommand:(id)a0 withOptions:(id)a1;
- (BOOL)runActionOfElementWithDescription1:(id)a0;
- (id)storedDiagnosticLogsURL;
- (void)trainingSimulationClientWasInterrupted:(id)a0;
- (void)trainingSimulationClientWasInvalidated:(id)a0;

@end
