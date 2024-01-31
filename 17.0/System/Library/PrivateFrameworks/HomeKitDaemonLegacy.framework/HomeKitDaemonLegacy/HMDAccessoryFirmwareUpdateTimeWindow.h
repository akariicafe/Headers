@class NSString, NSDateComponents;

@interface HMDAccessoryFirmwareUpdateTimeWindow : NSObject <HMFLogging>

@property (readonly) NSDateComponents *startTimeComponents;
@property (readonly) NSDateComponents *endTimeComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithStartTime:(id)a0 endTime:(id)a1;

@end
