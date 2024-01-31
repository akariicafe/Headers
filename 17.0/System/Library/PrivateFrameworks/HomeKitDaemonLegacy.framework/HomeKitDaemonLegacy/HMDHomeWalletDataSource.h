@class NSString;

@interface HMDHomeWalletDataSource : HMFObject <HMDHomeWalletDataSource>

@property int passCodeChangeNotificationToken;
@property (readonly, getter=isResidentCapable) BOOL residentCapable;
@property (readonly) BOOL isWatch;
@property (readonly) long long accessoryWriteMaxRetryCount;
@property (readonly) double accessoryWriteRetryInterval;
@property (readonly) long long walletKeyColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)canNotifyAboutExpressModeWithCompletion:(id /* block */)a0;
- (id)numberValueFromNoBackupStoreWithKey:(id)a0;
- (void)persistNumberValueToNoBackupStore:(id)a0 withKey:(id)a1;
- (BOOL)registerForPasscodeChangeNotificationWithQueue:(id)a0 callback:(id /* block */)a1;
- (void)showExpressEnabledUserNotificationForWalletKeyWithPassUniqueID:(id)a0 completion:(id /* block */)a1;

@end
