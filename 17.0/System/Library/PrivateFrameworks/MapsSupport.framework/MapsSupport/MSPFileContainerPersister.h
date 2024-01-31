@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface MSPFileContainerPersister : MSPContainerPersister

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue;
@property (readonly, nonatomic) NSURL *persistenceFileURL;

- (id)init;
- (void)eraseWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)commitByCreatingStateSnapshotAndDataWithCreationHandler:(id /* block */)a0 error:(out id *)a1;
- (void)commitByMergingWithStateSnapshot:(id)a0 mergeOptions:(id)a1 completion:(id /* block */)a2;
- (void)commitEditWithNewContents:(id)a0 edits:(id)a1 appliedToOldContents:(id)a2 completion:(id /* block */)a3;
- (void)fetchStateSnapshotWithCompletion:(id /* block */)a0;
- (BOOL)getSnapshot:(out id *)a0 data:(out id *)a1 forNewContents:(id)a2 edits:(id)a3 appliedToOldContents:(id)a4 error:(out id *)a5;
- (BOOL)getSnapshot:(out id *)a0 data:(out id *)a1 mergingCurrentState:(id)a2 withState:(id)a3 mergeOptions:(id)a4 error:(out id *)a5;
- (id)initWithPersistenceFileAtURL:(id)a0;
- (id)newStateSnapshot;
- (id)stateSnapshotFromData:(id)a0;

@end
