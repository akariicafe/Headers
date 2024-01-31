@class HMDHome, NSString;

@interface HMDDeviceNotificationHandlerDefaultDataSource : NSObject <HMDDeviceNotificationHandlerDataSource>

@property (weak, nonatomic) HMDHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (id)timerWithType:(unsigned char)a0;

@end
