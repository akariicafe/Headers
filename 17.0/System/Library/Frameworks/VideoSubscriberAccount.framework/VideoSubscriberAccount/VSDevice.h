@class VSManagedProfileConnection, NSString, VSRemoteNotifier, NSMutableSet, NSOperationQueue, NSObject, VSPreferences;
@protocol OS_dispatch_queue;

@interface VSDevice : NSObject <VSManagedProfileConnectionObserver, VSRemoteNotifierDelegate>

@property (retain, nonatomic) NSString *productVersionString;
@property (retain, nonatomic) NSString *serialNumberString;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (retain, nonatomic) NSMutableSet *observers;
@property (nonatomic) void /* function */ *copyAnswer;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) VSPreferences *preferences;
@property (copy, nonatomic) id /* block */ newDeveloperSettingsFetchOperationBlock;
@property (retain, nonatomic) VSManagedProfileConnection *profileConnection;
@property (retain, nonatomic) VSRemoteNotifier *setTopBoxStateRemoteNotifier;
@property (retain, nonatomic) VSRemoteNotifier *developerSettingsRemoteNotifier;
@property (readonly, nonatomic, getter=isRunningAnInternalBuild) BOOL runningAnInternalBuild;
@property (readonly, nonatomic, getter=isRunningACustomerBuild) BOOL runningACustomerBuild;
@property (readonly, nonatomic) unsigned long long deviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentDevice;
+ (unsigned long long)_deviceTypeWithCopyAnswer:(void /* function */ *)a0;
+ (BOOL)_getMobileGestaltBoolean:(struct __CFString { } *)a0 withCopyAnswer:(void /* function */ *)a1;
+ (BOOL)_runningACustomerBuildWithCopyAnswer:(void /* function */ *)a0;
+ (BOOL)_runningAnInternalBuildWithCopyAnswer:(void /* function */ *)a0;
+ (id)_stringForKey:(struct __CFString { } *)a0 copyAnswer:(void /* function */ *)a1;

- (id)serialNumber;
- (id)init;
- (id)productVersion;
- (void)dealloc;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (BOOL)setIgnoreSetTopBoxProfile:(BOOL)a0;
- (void).cxx_destruct;
- (id)name;
- (void)remoteNotifier:(id)a0 didReceiveRemoteNotificationWithUserInfo:(id)a1;
- (id)accountDeletionConfirmationMessageForIdentityProviderDisplayName:(id)a0;
- (void)cloudConfigurationDidChange;
- (id)developerIdentityProviderDeletionConfirmationMessage;
- (void)fetchDeviceManagedSetTopBoxProfileWithCompletion:(id /* block */)a0;
- (void)fetchSetTopBoxProfileWithCompletion:(id /* block */)a0;
- (void)profileConnectionProfileChanged:(id)a0;
- (void)refreshSetTopBoxProfile:(id /* block */)a0;
- (id)stringForAMSDeviceFamilies;
- (id)stringForAMSPlatform;
- (id)stringForAMSPlatformAttributes;

@end
