@class _HKArchiveCreator, NSString, NSProgress, NSURL, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface HDStaticSyncExportTask : HDStaticSyncTask <HDSyncSessionDelegate> {
    NSObject<OS_dispatch_queue> *_exportQueue;
    BOOL _exportToDisk;
    unsigned long long _batchSize;
    NSProgress *_exportProgress;
    NSProgress *_syncSessionProgress;
    NSMutableSet *_syncEntityIdentifiersWithProcessedChanges;
    _HKArchiveCreator *_archiveCreator;
    unsigned long long _changesetCount;
    unsigned long long _archiveCount;
}

@property (readonly, copy, nonatomic) NSURL *exportDirectoryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)runWithCompletion:(id /* block */)a0;
- (void)syncSession:(id)a0 sendChanges:(id)a1 completion:(id /* block */)a2;
- (void)syncSessionWillBegin:(id)a0;
- (void).cxx_destruct;
- (void)syncSession:(id)a0 didFinishSuccessfully:(BOOL)a1 error:(id)a2;
- (id)initWithProfile:(id)a0 options:(unsigned long long)a1 storeIdentifier:(id)a2 URL:(id)a3 batchSize:(unsigned long long)a4;
- (BOOL)syncSession:(id)a0 didEndTransactionWithError:(id *)a1;

@end
