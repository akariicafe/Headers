@class NSString, NSDictionary, NSURL, NSObject;
@protocol WBSCoalescedAsynchronousWriterDelegate, OS_dispatch_group, OS_dispatch_source, OS_dispatch_queue;

@interface WBSCoalescedAsynchronousWriter : NSObject {
    NSObject<OS_dispatch_queue> *_diskAccessQueue;
    NSURL *_fileURL;
    id /* block */ _writerBlock;
    id /* block */ _dataSourceBlock;
    NSObject<OS_dispatch_queue> *_dataSourceQueue;
    NSDictionary *_fileResourceValues;
    id /* block */ _plistDictionarySourceBlock;
    unsigned long long _plistFormat;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_timer;
    double _writeDelayInterval;
    NSObject<OS_dispatch_group> *_writeGroup;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::default_delete<SafariShared::SuddenTerminationDisabler>> { struct __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::default_delete<SafariShared::SuddenTerminationDisabler>> { struct SuddenTerminationDisabler *__value_; } __ptr_; } _suddenTerminationDisabler;
    BOOL _done;
    NSString *_name;
}

@property (weak, nonatomic) id<WBSCoalescedAsynchronousWriterDelegate> delegate;

- (void)_invalidateTimer;
- (void)_timerFired;
- (void)dealloc;
- (id)initWithName:(id)a0 writerBlock:(id /* block */)a1 dataSourceQueue:(id)a2 dataSourceBlock:(id /* block */)a3;
- (id)initWithName:(id)a0 fileURL:(id)a1 dataSourceQueue:(id)a2 plistFormat:(unsigned long long)a3 plistDictionarySourceBlock:(id /* block */)a4;
- (id)_dataForPlistDictionary:(id)a0;
- (id)initWithName:(id)a0 fileURL:(id)a1 dataSourceBlock:(id /* block */)a2;
- (id)_plistDictionaryFromDataSourceOnDataSourceQueue;
- (id)initWithName:(id)a0 fileURL:(id)a1 dataSourceBlock:(id /* block */)a2 writeDelayInterval:(double)a3;
- (id).cxx_construct;
- (void)performScheduledWriteSynchronously;
- (id)_initWithName:(id)a0 fileURL:(id)a1 writerBlock:(id /* block */)a2 dataSourceQueue:(id)a3 dataSourceBlock:(id /* block */)a4 writeDelayInterval:(double)a5 fileResourceValues:(id)a6;
- (id)initWithName:(id)a0 writerBlock:(id /* block */)a1 dataSourceQueue:(id)a2 plistFormat:(unsigned long long)a3 plistDictionarySourceBlock:(id /* block */)a4;
- (void)_cancelPendingWriteSynchronouslyLeavingSuddenTerminationIntact;
- (id)initWithName:(id)a0 fileURL:(id)a1 dataSourceQueue:(id)a2 dataSourceBlock:(id /* block */)a3;
- (void)scheduleWrite;
- (id)initWithName:(id)a0 fileURL:(id)a1 dataSourceQueue:(id)a2 dataSourceBlock:(id /* block */)a3 fileResourceValues:(id)a4;
- (void).cxx_destruct;
- (void)_waitForWriteCompletion;
- (id)initWithName:(id)a0 writerBlock:(id /* block */)a1 dataSourceBlock:(id /* block */)a2;
- (void)_scheduleTimer;
- (void)startScheduledWriteNow;
- (id)_dataFromDataSourceOnDataSourceQueue;
- (id)_initWithName:(id)a0 fileURL:(id)a1 writerBlock:(id /* block */)a2 dataSourceQueue:(id)a3 dataSourceBlock:(id /* block */)a4 plistDictionarySourceBlock:(id /* block */)a5 plistFormat:(unsigned long long)a6 writeDelayInterval:(double)a7 fileResourceValues:(id)a8;
- (void)_writeData:(id)a0;
- (void)startScheduledWriteNowWithCompletionHandler:(id /* block */)a0;
- (void)completePendingWriteSynchronously;
- (void)_asynchronouslyWriteData:(id)a0 orPlistDictionary:(id)a1 completionHandler:(id /* block */)a2;
- (id)_synchronousDataOnDataSourceQueue;
- (void)cancelPendingWriteSynchronously;

@end
