@class NTKFace, NTKFaceSnapshottingWindow, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface NTKCompanionFaceRenderer : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NTKFaceSnapshottingWindow *_window;
}

@property (retain, nonatomic) NSMutableArray *pendingTaskList;
@property (nonatomic, getter=isQueueActive) BOOL queueActive;
@property (retain, nonatomic) NTKFace *currentFace;
@property (copy, nonatomic) id /* block */ faceBatchCompletionHandler;

+ (id)_storagePath;
+ (id)snapshotPathForFace:(id)a0 detailMode:(long long)a1;
+ (id)_snapshotNameForFace:(id)a0 detailMode:(long long)a1;

- (id)init;
- (void).cxx_destruct;
- (void)_notifyFinishedFaceBatchIfNeeded;
- (void)_startNextWorkItem;
- (void)requestSnapshotOfFace:(id)a0 completion:(id /* block */)a1;

@end
