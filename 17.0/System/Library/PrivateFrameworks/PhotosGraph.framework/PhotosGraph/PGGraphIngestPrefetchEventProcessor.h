@class NSString, PGGraphBuilder;

@interface PGGraphIngestPrefetchEventProcessor : NSObject <PGGraphIngestProcessor> {
    PGGraphBuilder *_graphBuilder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithGraphBuilder:(id)a0;
- (void)prefetchEventsWithSortedMomentNodes:(id)a0 locationsToPrefetch:(id *)a1 progressBlock:(id /* block */)a2;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;

@end
