@class NSString, PGPublicEventDisambiguator, PGGraphBuilder;

@interface PGGraphIngestPublicEventsProcessor : NSObject <PGGraphIngestProcessor, PGGraphMomentUpdateConsumer> {
    PGGraphBuilder *_graphBuilder;
    PGPublicEventDisambiguator *_disambiguator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)requiredMomentUpdateTypes;

- (void).cxx_destruct;
- (void)_enumeratePublicEventsFromMomentNodes:(id)a0 progressBlock:(id /* block */)a1 usingBlock:(id /* block */)a2;
- (void)_insertPublicEventsFromMomentNodes:(id)a0 graphUpdate:(id)a1 progressBlock:(id /* block */)a2;
- (void)deletePerformerNodeWithNoEdgesInGraph:(id)a0;
- (void)deletePublicEventCategoryWithNoEdgesInGraph:(id)a0;
- (void)deletePublicEventEdgesWithMomentNodes:(id)a0 inGraph:(id)a1;
- (void)deletePublicEventNodesWithNoInEdgesInGraph:(id)a0;
- (id)initWithGraphBuilder:(id)a0;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;

@end
