@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, RETrainingSimulationClientDelegate;

@interface RETrainingSimulationClient : NSObject <RETrainingSimulationClientInterface> {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
}

@property (readonly, nonatomic) NSString *targetProcessName;
@property (readonly, weak, nonatomic) id<RETrainingSimulationClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithConnection:(id)a0 delegate:(id)a1;
- (void)_handleInterruption;
- (void).cxx_destruct;
- (void)_handleInvalidation;
- (id)initWithServiceName:(id)a0 delegate:(id)a1;
- (id)availableRelevanceEngines;
- (void)availableRelevanceEnginesDidChange;
- (id)diagnosticLogFileForRelevanceEngine:(id)a0;
- (id)fetchAllElementIdentifiersInRelevanceEngine:(id)a0;
- (id)fetchAllElementsInRelevanceEngine:(id)a0;
- (id)initWithTargetProcessName:(id)a0 delegate:(id)a1;
- (void)relevanceEngine:(id)a0 createElementFromDescription:(id)a1;
- (id)relevanceEngine:(id)a0 encodedObjectAtPath:(id)a1;
- (BOOL)relevanceEngine:(id)a0 performCommand:(id)a1 withOptions:(id)a2;
- (BOOL)relevanceEngine:(id)a0 runActionOfElementWithDescription1:(id)a1;

@end
