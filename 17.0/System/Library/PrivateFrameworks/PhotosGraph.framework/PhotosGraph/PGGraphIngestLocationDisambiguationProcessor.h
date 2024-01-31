@class NSString, PGGraphBuilder;

@interface PGGraphIngestLocationDisambiguationProcessor : NSObject <PGGraphIngestProcessor, PGGraphMomentUpdateConsumer> {
    PGGraphBuilder *_graphBuilder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)requiredMomentUpdateTypes;

- (void).cxx_destruct;
- (void)removeDuplicateCityNodes:(id)a0 graph:(id)a1 loggingConnection:(id)a2 progressBlock:(id /* block */)a3;
- (id)initWithGraphBuilder:(id)a0;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;

@end
