@class ObjectTrackingAgent, NSObject;
@protocol OS_dispatch_semaphore;

@interface DKTrackingAgent : NSObject {
    ObjectTrackingAgent *_agent;
    NSObject<OS_dispatch_semaphore> *_isTrackingSemaphore;
    BOOL _isTracking;
    NSObject<OS_dispatch_semaphore> *_isButtonEnabledSemaphore;
    BOOL _trackingButtonEnabled;
}

- (BOOL)tracking;
- (id)init;
- (void)dealloc;
- (void)stop;
- (void).cxx_destruct;
- (BOOL)docked;
- (id)getSelectedBodyIds;
- (id)getSelectedFaceIds;
- (id)initWithClientApplicationID:(id)a0;
- (void)trackWithMetadata:(id)a0 image:(id)a1 cameraPortType:(id)a2 cameraIntrinsics:(id)a3 referenceDimensions:(struct CGSize { double x0; double x1; })a4 orientation:(int)a5 completionHandler:(id /* block */)a6;
- (id)getTrackedObjects;
- (void)processImageWithImage:(id)a0 faces:(id)a1;
- (void)setRectOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 completion:(id /* block */)a1;
- (void)trackWithMetadata:(id)a0 cameraPortType:(id)a1 cameraIntrinsics:(id)a2 referenceDimensions:(struct CGSize { double x0; double x1; })a3 orientation:(int)a4 completionHandler:(id /* block */)a5;
- (BOOL)trackingButtonEnabled;

@end
