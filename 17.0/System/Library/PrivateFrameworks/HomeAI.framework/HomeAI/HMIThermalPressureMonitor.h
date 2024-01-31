@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMIThermalPressureMonitor : HMFObject <HMFLogging> {
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _osThermalPressureLevelNotificationToken;
}

@property (readonly) long long thermalPressureLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)shortDescription;
+ (id)logCategory;

@end
