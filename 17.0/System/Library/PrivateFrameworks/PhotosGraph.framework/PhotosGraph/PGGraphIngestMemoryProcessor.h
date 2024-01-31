@class PGGraphBuilder, NSString, PGMemoryController, NSDate;

@interface PGGraphIngestMemoryProcessor : NSObject <PGGraphIngestProcessor> {
    PGGraphBuilder *_graphBuilder;
    PGMemoryController *_memoryController;
}

@property (copy, nonatomic) NSDate *localDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)regenerateMemoriesOfCategory:(unsigned long long)a0 withGraphBuilder:(id)a1 progressReporter:(id)a2;
+ (id)memoryCategoriesWithGraphUpdate:(id)a0;

- (void).cxx_destruct;
- (void)deleteWithMemoryCategories:(id)a0;
- (id)initWithGraphBuilder:(id)a0;
- (id)insertMemoriesForCategories:(id)a0 loggingConnection:(id)a1 progressBlock:(id /* block */)a2;
- (void)insertProcessorDependentMomentFeaturesForMomentNodes:(id)a0 featureProvider:(id)a1 progressBlock:(id /* block */)a2;
- (void)insertSingletonFeatureNodes;
- (id)memoryGeneratorsForMemoryCategory:(unsigned long long)a0 memoryGenerationContext:(id)a1 controller:(id)a2;
- (void)resetMemoryNodesWithMemoryUniqueIdentifiers:(id)a0 loggingConnection:(id)a1;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;

@end
