@class NSString, PGGraphBuilder;

@interface PGGraphIngestPetProcessor : NSObject <PGGraphIngestProcessor, PGGraphMomentUpdateConsumer> {
    PGGraphBuilder *_graphBuilder;
    BOOL _petPrintClusteringEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)requiredMomentUpdateTypes;
+ (id)supportedPetDetectionTypes;

- (void).cxx_destruct;
- (id)initForTestingWithGraphBuilder:(id)a0;
- (void)_deleteAllPetNodesInGraph:(id)a0;
- (void)_deletePetNodesWithLocalIdentifiers:(id)a0 inGraph:(id)a1;
- (id)_fetchAllVerifiedPetsInPhotosLibrary:(id)a0;
- (id)_fetchVerifiedPetsWithLocalIdentifiers:(id)a0 inPhotoLibrary:(id)a1;
- (unsigned long long)_speciesForDetectionType:(short)a0;
- (id)initWithGraphBuilder:(id)a0;
- (id)momentNodesForPerson:(id)a0 inPhotoLibrary:(id)a1 withGraph:(id)a2;
- (void)runLegacyPetIngestWithProgressBlock:(id /* block */)a0;
- (void)runPetIngestWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;

@end
