@class NSString, NSObject, PGGraphBuilder;
@protocol OS_os_log;

@interface PGGraphIngestFrequentLocationProcessor : NSObject <PGGraphIngestProcessor, PGGraphMomentUpdateConsumer> {
    PGGraphBuilder *_graphBuilder;
    NSObject<OS_os_log> *_loggingConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)requiredMomentUpdateTypes;

- (void).cxx_destruct;
- (void)deleteFrequentLocationNodesInGraph:(id)a0 changeRequest:(id)a1;
- (id)initWithGraphBuilder:(id)a0;
- (void)processAndInsertFrequentLocationWithMomentNodes:(id)a0 inGraph:(id)a1 changeRequest:(id)a2 progressBlock:(id /* block */)a3;
- (id)processFrequentLocationWithGraph:(id)a0 progressBlock:(id /* block */)a1;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;

@end
