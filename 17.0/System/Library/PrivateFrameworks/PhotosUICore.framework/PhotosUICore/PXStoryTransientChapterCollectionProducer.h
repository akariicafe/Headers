@class NSString, PXStoryTransientChapterCollectionManager, NSObject;
@protocol OS_dispatch_queue, PXStoryErrorReporter;

@interface PXStoryTransientChapterCollectionProducer : NSObject <PXStoryTransientChapterCollectionManagerPersistenceDelegate, PXStoryChapterCollectionProducer, PXStoryQueueParticipant> {
    PXStoryTransientChapterCollectionManager *_transientChapterCollectionManager;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (weak, nonatomic) id<PXStoryErrorReporter> errorReporter;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_chapterCollectionManagerWithUneditedChapterColection:(id)a0;
- (void)_workQueue_persistEditTransaction:(id)a0;
- (void)chapterCollectionManager:(id)a0 didApplyEditTransaction:(id)a1;
- (id)initWithStoryQueue:(id)a0;
- (id)requestChapterCollectionForKeyAsset:(id)a0 curatedAssets:(id)a1 options:(unsigned long long)a2 resultHandler:(id /* block */)a3;
- (void)workQueue_saveEditTransaction:(id)a0 completionHandler:(id /* block */)a1;
- (id)workQueue_uneditedChapterCollectionWithAssets:(id)a0 keyAsset:(id)a1;

@end
