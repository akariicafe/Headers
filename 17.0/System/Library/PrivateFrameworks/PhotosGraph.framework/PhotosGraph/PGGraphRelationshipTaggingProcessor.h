@class NSString, PGGraphBuilder;

@interface PGGraphRelationshipTaggingProcessor : NSObject <PGGraphIngestProcessor> {
    PGGraphBuilder *_graphBuilder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_insertTagNodesWithEdgesForPersonsTagsWithConfidence:(id)a0 withChangeRequest:(id)a1;
- (id)initWithGraphBuilder:(id)a0;
- (void)processRelationshipTagsForPersonNodes:(id)a0 progressBlock:(id /* block */)a1;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;

@end
