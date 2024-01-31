@class NSObject;
@protocol OS_dispatch_queue;

@interface CMCaptureFrameSenderEndpointObserver : NSObject {
    id /* block */ _endpointsChangedHandler;
    NSObject<OS_dispatch_queue> *_frameSenderEndpointsChangedNotificationQueue;
}

- (void)dealloc;
- (void)_handleFrameServerEndpointsChangedNotification:(id)a0;
- (id)initWithEndpointsChangedHandler:(id /* block */)a0;

@end
