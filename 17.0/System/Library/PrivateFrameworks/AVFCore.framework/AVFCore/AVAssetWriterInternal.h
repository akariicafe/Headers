@class AVKeyPathDependencyManager, AVWeakReference, AVAssetWriterHelper, NSObject;
@protocol OS_dispatch_queue, AVAssetWriterFinishWritingDelegate;

@interface AVAssetWriterInternal : NSObject {
    AVWeakReference *weakReference;
    AVAssetWriterHelper *helper;
    NSObject<OS_dispatch_queue> *helperReadWriteQueue;
    AVKeyPathDependencyManager *keyPathDependencyManager;
    id<AVAssetWriterFinishWritingDelegate> finishWritingDelegate;
}

- (void).cxx_destruct;

@end
