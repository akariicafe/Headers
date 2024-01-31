@class NSMutableDictionary, AVWeakReference, AVSampleBufferVideoRenderer, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AVSampleBufferRenderSynchronizerInternal : NSObject {
    AVWeakReference *weakObserver;
    struct OpaqueCMTimebase { } *readOnlyTimebase;
    NSObject<OS_dispatch_queue> *rateQueue;
    float rate;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } mostRecentlySetTime;
    NSObject<OS_dispatch_queue> *rendererListQueue;
    NSMutableArray *renderers;
    NSMutableArray *timedRenderRemovals;
    NSObject<OS_dispatch_queue> *figSynchronizerAccessQueue;
    struct OpaqueFigSampleBufferRenderSynchronizer { } *figSynchronizer;
    AVSampleBufferVideoRenderer *rendererTrackedBySTS;
    NSMutableDictionary *STSLabelSinks;
}

@end
