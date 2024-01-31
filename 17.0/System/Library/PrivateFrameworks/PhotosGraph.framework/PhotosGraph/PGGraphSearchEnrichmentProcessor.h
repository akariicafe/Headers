@class NSString;

@interface PGGraphSearchEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_processGraphUpdateInventory:(id)a0 onGraph:(id)a1 photoLibrary:(id)a2 curationManager:(id)a3 curationContext:(id)a4 searchComputationCache:(id)a5 progressBlock:(id /* block */)a6 loggingConnection:(id)a7 completionBlock:(id /* block */)a8;
- (BOOL)_shouldProcessGraphUpdate:(id)a0;
- (void)enrichDataModelWithManager:(id)a0 curationContext:(id)a1 graphUpdateInventory:(id)a2 progressBlock:(id /* block */)a3;

@end
