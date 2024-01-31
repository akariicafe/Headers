@class NSString, PGGraphBuilder;

@interface PGGraphIngestMeaningfulEventsProcessor : NSObject <PGGraphIngestProcessor> {
    PGGraphBuilder *_graphBuilder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_removeInvalidMeaningEdgesWithDomain:(unsigned short)a0 momentNode:(id)a1 validMeaningLabels:(id)a2 legacyMeaningLabels:(id)a3;
- (void)_updateMeaningsOfMomentNode:(id)a0 graph:(id)a1 withValidMeaningLabels:(id)a2 legacyLabels:(id)a3;
- (id)initWithGraphBuilder:(id)a0;
- (id)meaningfulEventMatchingResultsForMomentNode:(id)a0 withRequiredMeaningfulEventCriteriaByIdentifier:(id)a1 andMeaningfulEventProcessorCache:(id)a2;
- (void)processMeaningfulEventsWithMomentNodes:(id)a0 graph:(id)a1 progressBlock:(id /* block */)a2;
- (void)processMeaningfulEventsWithMomentNodes:(id)a0 graph:(id)a1 requiredMeaningfulEventCriteriaByIdentifier:(id)a2 progressBlock:(id /* block */)a3;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;
- (void)updateMeaningsOfMomentNode:(id)a0 graph:(id)a1 affectedMeaningLabels:(id)a2 withMatchedResults:(id)a3;

@end
