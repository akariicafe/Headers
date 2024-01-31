@class NSNotificationCenter;

@interface HMDAccessoryFirmwareUpdateSchedulerWingman : NSObject <HMDAccessoryFirmwareUpdateSchedulerWingman>

@property (readonly) NSNotificationCenter *notificationCenter;

- (id)newBackgroundSchedulerWithIdentifier:(id)a0;
- (id)newInitialDelayTimerWithDelay:(double)a0 options:(unsigned long long)a1;
- (id)policyForAccessory:(id)a0 sessionState:(unsigned long long)a1 workQueue:(id)a2;

@end
