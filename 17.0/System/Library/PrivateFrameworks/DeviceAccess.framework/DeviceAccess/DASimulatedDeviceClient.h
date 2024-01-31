@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface DASimulatedDeviceClient : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
}

@property (copy, nonatomic) NSString *deviceBonjourServiceType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (id)init;
- (void)_invalidated;
- (id)descriptionWithLevel:(int)a0;
- (void)invalidate;
- (void)activate;
- (id)description;
- (void).cxx_destruct;

@end
