@class HMFTimer, NSDateFormatter, NSString, HMDAccessoryFirmwareUpdateTimeWindow;

@interface HMDAccessoryFirmwareUpdateTimeWindowPolicy : HMDAccessoryFirmwareUpdatePolicy <HMFTimerDelegate, NSCopying>

@property (readonly, nonatomic) HMDAccessoryFirmwareUpdateTimeWindow *updateTimeWindow;
@property (retain, nonatomic) HMFTimer *reevaluateTimer;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (BOOL)evaluate;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_startReevaluateTimer:(id)a0;
- (void)_stopReevaluateTimer;
- (id)initWithAccessory:(id)a0 timeWindow:(id)a1 workQueue:(id)a2;

@end
