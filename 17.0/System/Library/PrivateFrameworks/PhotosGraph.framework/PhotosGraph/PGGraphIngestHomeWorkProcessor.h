@class NSString, PGGraphBuilder;

@interface PGGraphIngestHomeWorkProcessor : NSObject <PGGraphIngestProcessor> {
    PGGraphBuilder *_graphBuilder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_deleteEdgelessHomeWorkNodesInGraph:(id)a0;
- (void)_deleteLocationEdgesOfPersonNodes:(id)a0 inGraph:(id)a1;
- (void)inferHomeWorkAddressesOfPersonNodes:(id)a0 andCLSPersonByContactIdentifier:(id)a1 inGraph:(id)a2;
- (id)initWithGraphBuilder:(id)a0;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;

@end
