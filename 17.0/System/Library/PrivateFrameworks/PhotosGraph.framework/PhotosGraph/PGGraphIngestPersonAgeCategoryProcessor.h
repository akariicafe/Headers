@class NSString, PGGraphIngestPersonAgeCategoryProcessorHelper, PGGraphBuilder;

@interface PGGraphIngestPersonAgeCategoryProcessor : NSObject <PGGraphIngestProcessor> {
    PGGraphBuilder *_graphBuilder;
    PGGraphIngestPersonAgeCategoryProcessorHelper *_helper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_updatePhotoLibrary:(id)a0 withAgeCategoryByPersonLocalIdentifier:(id)a1;
- (id)initWithGraphBuilder:(id)a0;
- (void)processPersonAgeCategoryForPersonNodes:(id)a0 photoLibrary:(id)a1 withProgressBlock:(id /* block */)a2;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;

@end
