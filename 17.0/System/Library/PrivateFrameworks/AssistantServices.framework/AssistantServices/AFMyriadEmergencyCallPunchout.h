@class NSObject;
@protocol OS_dispatch_queue;

@interface AFMyriadEmergencyCallPunchout : NSObject {
    NSObject<OS_dispatch_queue> *_myriadEmergencyCallingQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)initiateEmergencyCallMyriad;

@end
