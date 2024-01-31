@class HMDHAPAccessory, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDAccessoryFirmwareUpdatePolicy : NSObject <HMDAccessoryFirmwareUpdatePolicy>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) BOOL status;
@property (readonly, weak) HMDHAPAccessory *accessory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)notify:(BOOL)a0;
- (BOOL)evaluate;
- (void)evaluateAndNotify;
- (id)initWithAccessory:(id)a0 workQueue:(id)a1;

@end
