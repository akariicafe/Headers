@class NSString, PGGraphBuilder;

@interface PGGraphIngestBusinessProcessor : NSObject <PGGraphIngestProcessor, PGGraphMomentUpdateConsumer> {
    PGGraphBuilder *_graphBuilder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_spatialMapCategoriesByMeaningIdentifier;
+ (unsigned long long)requiredMomentUpdateTypes;

- (void).cxx_destruct;
- (id)_businessItemContainersToEnrichForLowConfidenceDisambiguation:(id)a0 requiredCriteriaByPOIIdentifier:(id)a1 meaningfulEventProcessorCache:(id)a2;
- (void)_insertBusinessItemsForMomentNodesToResolvedBusinessItems:(id)a0 graph:(id)a1 progressBlock:(id /* block */)a2;
- (void)_insertBusinessItemsFromMomentNodes:(id)a0 graph:(id)a1 withLocationOfInterestVisitsToResolveByMomentUUID:(id)a2 requiredCriteriaByPOIIdentifier:(id)a3 progressBlock:(id /* block */)a4;
- (BOOL)_momentNode:(id)a0 hasValidConstraintsForLocationOfInterestVisit:(id)a1 requiredCriteriaByPOIIdentifier:(id)a2 meaningfulEventProcessorCache:(id)a3;
- (id)_predominantVisitForMomentNode:(id)a0 publicEventBusinessItemMuid:(unsigned long long)a1;
- (void)deleteBusinessCategoryNodesWithNoEdges:(id)a0;
- (void)deleteBusinessEdgesWithMomentNodes:(id)a0 inGraph:(id)a1;
- (void)deleteBusinessNodesWithNoInEdgesInGraph:(id)a0;
- (id)initWithGraphBuilder:(id)a0;
- (id)requiredCriteriaByPOIIdentifierForGraph:(id)a0;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;

@end
