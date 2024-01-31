@class ICDistributedLock, NSString, NSURL, ICAssetGeneration, ICCloudSyncingObject, NSArray;

@interface ICAssetGenerationManager : NSObject

@property (copy, nonatomic) ICAssetGeneration *currentGeneration;
@property (copy, nonatomic) ICAssetGeneration *nextGeneration;
@property (retain, nonatomic) ICDistributedLock *nextGenerationLock;
@property (nonatomic, getter=isAdvancing) BOOL advancing;
@property (readonly, weak, nonatomic) ICCloudSyncingObject *object;
@property (readonly, copy, nonatomic) NSString *generationKeyPath;
@property (readonly, copy, nonatomic) NSURL *containerURL;
@property (copy, nonatomic) NSArray *fallbackURLs;
@property (nonatomic) double generationTimeout;
@property (readonly, copy, nonatomic) NSURL *generationURL;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)managedObjectContextObjectsDidChange:(id)a0;
- (BOOL)beginGeneration;
- (BOOL)commitGeneration;
- (id)initWithObject:(id)a0 generationKeyPath:(id)a1 containerURL:(id)a2;
- (void)managedObjectContextDidSaveObjectIDs:(id)a0;
- (void)removeStaleGenerations;
- (BOOL)rollbackGeneration;
- (void)updateCurrentGeneration;

@end
