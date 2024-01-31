@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface IOKitHandler : NSObject <ConfigurableObjectProtocol> {
    unsigned long long _ioHdl;
    unsigned int _pwrConnect;
    unsigned int _pwrNotifier;
    struct IONotificationPort { } *_pwrPort;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _mostRecentAPWakeMachTime;
    unsigned long long _mostRecentAPSleepMachTime;
}

@property (readonly, nonatomic) unsigned long long mostRecentAPSleepMachTime;
@property (readonly, nonatomic) unsigned long long mostRecentAPWakeMachTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)a0;

- (id)init;
- (void)dealloc;
- (int)configureInstance:(id)a0;
- (int)read:(id)a0 returnedValues:(id)a1;
- (void).cxx_destruct;
- (void)disableIOKitAssertionNotifications;
- (void)disableIOKitPowerNotifications;
- (void)enableIOKitAssertionNotifications;
- (void)enableIOKitPowerNotifications;
- (unsigned long long)mostRecentAPSleepMachTime;
- (unsigned long long)mostRecentAPWakeMachTime;
- (void)reportIOPMAssertionException:(int)a0 pid:(int)a1;
- (void)updateMostRecentAPSleepTime;
- (void)updateMostRecentAPWakeTime;

@end
