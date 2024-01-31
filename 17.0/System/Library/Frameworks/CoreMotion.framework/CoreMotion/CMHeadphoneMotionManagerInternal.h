@class RMConnectionClient, NSOperationQueue, CMAttitude, NSObject, CMDeviceMotion;
@protocol OS_dispatch_queue;

@interface CMHeadphoneMotionManagerInternal : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    RMConnectionClient *_connectionClient;
    NSOperationQueue *_callbackQueue;
    id /* block */ _callbackHandler;
    BOOL _deviceMotionActive;
    BOOL _deviceMotionStreaming;
    BOOL _deviceConnected;
    double _deviceMotionStartTime;
}

@property (retain) CMDeviceMotion *deviceMotion;
@property (retain, nonatomic) CMAttitude *initialReferenceAttitude;

- (void)disconnect;
- (id)init;
- (void)dealloc;
- (void)connect;

@end
