@class NSArray, NSCache;

@interface _DKObjectMOConverter : NSObject {
    NSCache *_cache;
}

@property BOOL readMetadata;
@property BOOL deduplicateValues;
@property (retain) NSArray *excludedMetadataKeys;

- (id)init;
- (id)insertObject:(id)a0 inManagedObjectContext:(id)a1;
- (void).cxx_destruct;
- (id)objectsFromManagedObjects:(id)a0;
- (id)dataIntervalsFromManagedObjects:(id)a0;

@end
