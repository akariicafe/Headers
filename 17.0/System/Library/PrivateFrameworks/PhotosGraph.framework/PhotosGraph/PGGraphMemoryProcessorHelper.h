@interface PGGraphMemoryProcessorHelper : NSObject

+ (id)_fetchEphemeralMemoriesWithFetchOptions:(id)a0 loggingConnection:(id)a1;
+ (id)ephemeralMemoryByUniqueIdentifierInPhotoLibrary:(id)a0 loggingConnection:(id)a1;
+ (id)ephemeralMemoryByUniqueIdentifierWithGraphMemoryIdentifiers:(id)a0 inPhotoLibrary:(id)a1 loggingConnection:(id)a2;
+ (void)resetEphemeralMemoryLastEnrichmentDateOfMemoriesWithEphemeralMemories:(id)a0 inPhotoLibrary:(id)a1 loggingConnection:(id)a2;
+ (void)resetEphemeralMemoryLastEnrichmentDateOfMemoriesWithUniqueIdentifiers:(id)a0 ephemeralMemoryByUniqueIdentifierCache:(id)a1 inPhotoLibrary:(id)a2 loggingConnection:(id)a3;

@end
