@class NSObject, NSOperationQueue, CMMotionActivity, CMMotionActivityManager;
@protocol OS_dispatch_queue, VCCoreMotionManagerDelegate;

@interface VCCoreMotionManager : NSObject {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id<VCCoreMotionManagerDelegate> _coreMotionManagerDelegate;
    CMMotionActivityManager *_motionActivityManager;
    NSOperationQueue *_motionActivityQueue;
}

@property (readonly) CMMotionActivity *motionActivity;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)setMotionActivity:(id)a0;
- (id)coreMotionManagerDelegate;
- (unsigned char)getMotionActivityValueForMotionActivity:(id)a0;
- (void)setCoreMotionManagerDelegate:(id)a0;
- (void)startMonitoringMotionActivity;
- (void)stopMonitoringMotionActivity;

@end
