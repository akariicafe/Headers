@class NSFetchRequest, NSString, NSError, NSOperationQueue, PLPhotoLibraryPathManager, PLPhotoLibraryBundle, NSManagedObjectContext;

@interface PLEnumerateAndSaveController : NSObject {
    _Atomic BOOL _cancelled;
}

@property (nonatomic) BOOL concurrent;
@property (retain, nonatomic) NSString *operationName;
@property (retain, nonatomic) NSManagedObjectContext *originalContext;
@property (retain, nonatomic) PLPhotoLibraryBundle *libraryBundle;
@property (retain, nonatomic) NSFetchRequest *originalFetchRequest;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property (nonatomic) BOOL refreshesAllAfterSave;
@property (copy, nonatomic) id /* block */ processResultBlock;
@property (copy, nonatomic) id /* block */ processResultsBlock;
@property (copy, nonatomic) id /* block */ generateContextBlock;
@property (copy, nonatomic) id /* block */ didFetchObjectIDsBlock;
@property (nonatomic) BOOL succeeded;
@property (retain, nonatomic) NSError *firstError;
@property (nonatomic) long long itemsPerBatch;

- (void)_inq_runOperationWithObjectIDs:(id)a0 onContext:(id)a1;
- (id)initWithName:(id)a0 fetchRequest:(id)a1 context:(id)a2 pathManager:(id)a3 concurrent:(BOOL)a4 refreshAllAfterSave:(BOOL)a5 generateContextBlock:(id /* block */)a6 didFetchObjectIDsBlock:(id /* block */)a7 processResultsBlock:(id /* block */)a8;
- (void).cxx_destruct;
- (id)_initWithName:(id)a0 fetchRequest:(id)a1 context:(id)a2 pathManager:(id)a3 concurrent:(BOOL)a4 refreshAllAfterSave:(BOOL)a5 generateContextBlock:(id /* block */)a6 didFetchObjectIDsBlock:(id /* block */)a7 processResultBlock:(id /* block */)a8 processResultsBlock:(id /* block */)a9;
- (BOOL)processObjectsWithError:(id *)a0;
- (id)initWithName:(id)a0 fetchRequest:(id)a1 context:(id)a2 pathManager:(id)a3 concurrent:(BOOL)a4 refreshAllAfterSave:(BOOL)a5 generateContextBlock:(id /* block */)a6 didFetchObjectIDsBlock:(id /* block */)a7 processResultBlock:(id /* block */)a8;

@end
