@interface HMDAccessoryFirmwareUpdateSessionWingman : NSObject <HMDAccessoryFirmwareUpdateSessionWingman>

@property (readonly) unsigned long long initialSessionState;

- (id)newSchedulerWithAccessory:(id)a0 firmwareUpdateSession:(id)a1 workQueue:(id)a2;

@end
