@class NSString;
@protocol HAENotificationCenterDelegate, HAENotificationCenterUserDelegate;

@interface HAENotificationCenter : NSObject {
    id<HAENotificationCenterDelegate> centerDelegate;
}

@property (readonly, weak, nonatomic) id<HAENotificationCenterUserDelegate> delegate;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) double liveMonitorWindowInSec;
@property (readonly, nonatomic) double liveThresholdInDBA;

+ (BOOL)connectedWiredDeviceIsHeadphone;
+ (BOOL)connectedWiredDeviceIsHeadphoneWithUUID:(id)a0;
+ (void)startNotificationCenterServer;

- (void)addHAENotificationEvent:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)addHAENotificationEvent:(id)a0 error:(id *)a1;
- (id)initWithBundleIdentifier:(id)a0;
- (void)setDelegate:(id)a0;

@end
