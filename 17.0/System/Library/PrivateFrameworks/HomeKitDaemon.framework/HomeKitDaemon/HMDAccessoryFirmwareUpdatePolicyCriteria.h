@class NSArray, HMDAccessoryFirmwareUpdateTimeWindow;

@interface HMDAccessoryFirmwareUpdatePolicyCriteria : NSObject

@property BOOL noUserAtHome;
@property BOOL anyUserAtHome;
@property BOOL checkForScheduledAutomation;
@property (retain) NSArray *characteristicConfigurations;
@property (retain) HMDAccessoryFirmwareUpdateTimeWindow *updateTimeWindow;

- (id)init;
- (void).cxx_destruct;

@end
