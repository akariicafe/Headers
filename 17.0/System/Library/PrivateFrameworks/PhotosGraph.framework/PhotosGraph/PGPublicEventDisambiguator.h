@class NSDictionary, CLSSceneTaxonomyHierarchy;

@interface PGPublicEventDisambiguator : NSObject {
    NSDictionary *_publicEventCriteriaByCategory;
    CLSSceneTaxonomyHierarchy *_sceneTaxonomy;
}

- (void).cxx_destruct;
- (id)_frequentLocationNodesForMomentNode:(id)a0 largeFrequentLocationNodes:(id)a1;
- (void)collectConsolidatedAddressesForMomentNodes:(id)a0 largeFrequentLocationNodes:(id)a1 consolidatedAddresses:(id *)a2 consolidatedAddressesByMomentIdentifier:(id *)a3 momentNodesForConsolidatedAddresses:(id *)a4 progressBlock:(id /* block */)a5;
- (id)disambiguateEvents:(id)a0 forTimeLocationTuple:(id)a1 momentNode:(id)a2 graph:(id)a3 meaningfulEventProcessorCache:(id)a4;
- (id)initWithSceneTaxonomy:(id)a0;
- (id)publicEventCriteriaByCategoryInGraph:(id)a0;

@end
