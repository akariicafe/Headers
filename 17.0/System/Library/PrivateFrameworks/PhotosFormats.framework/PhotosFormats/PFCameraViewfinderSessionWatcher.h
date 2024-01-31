@class NSString, NSObject, FigCameraViewfinder;
@protocol PFCameraViewfinderSessionWatcherDelegate, OS_dispatch_queue;

@interface PFCameraViewfinderSessionWatcher : NSObject <FigCameraViewfinderDelegate, FigCameraViewfinderSessionDelegate> {
    FigCameraViewfinder *_viewFinder;
    unsigned long long _counter;
    NSObject<OS_dispatch_queue> *_queue;
    _Atomic BOOL _isCameraRunning;
}

@property (readonly) BOOL isCameraRunning;
@property (readonly, weak) id<PFCameraViewfinderSessionWatcherDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)cameraViewfinder:(id)a0 viewfinderSessionDidEnd:(id)a1;
- (id)initWithDispatchQueue:(id)a0 delegate:(id)a1;
- (void)cameraViewfinderSessionWillBegin:(id)a0;
- (void)startWatching;
- (void)cameraViewfinder:(id)a0 viewfinderSessionDidBegin:(id)a1;
- (void).cxx_destruct;
- (void)stopWatching;

@end
