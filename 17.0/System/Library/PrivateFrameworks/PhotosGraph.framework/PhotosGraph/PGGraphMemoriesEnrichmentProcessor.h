@interface PGGraphMemoriesEnrichmentProcessor : NSObject {
    unsigned long long _numberOfMemoriesToEnrich;
}

+ (void)deleteNoLongerExistingMemoryNodes:(id)a0 fromEphemeralMemoryByUniqueIdentifier:(id)a1 inPhotoLibrary:(id)a2 loggingConnection:(id)a3 progressReporter:(id)a4;
+ (id)enrichableMemoryNodesInGraph:(id)a0;
+ (void)insertOrUpdateEphemeralMemoriesForEnrichedMemories:(id)a0 ephemeralMemoryByUniqueIdentifier:(id)a1 memoryPersister:(id)a2 graph:(id)a3 loggingConnection:(id)a4 progressReporter:(id)a5;

- (id)init;
- (unsigned long long)_targetNumberOfMemoriesToEnrichWithPhotoLibrary:(id)a0 loggingConnection:(id)a1;
- (id)initWithNumberOfMemoriesToEnrich:(unsigned long long)a0;
- (BOOL)runWithGraphManager:(id)a0 incrementalChange:(id)a1 progressReporter:(id)a2 error:(id *)a3;
- (id)sortedMemoryNodesToEnrichForIncrementalFromMemoryNodesInGraph:(id)a0 ephemeralMemoryByUniqueIdentifier:(id)a1 loggingConnection:(id)a2;
- (id)sortedMemoryNodesToEnrichFromCollection:(id)a0 ephemeralMemoryByUniqueIdentifier:(id)a1 loggingConnection:(id)a2;

@end
