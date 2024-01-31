@class NSString, MAAutoAssetSelector, NSObject;
@protocol OS_dispatch_queue;

@interface MAAutoAssetMonitor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) id /* block */ statusChangeNotificationBlock;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationDispatchQueue;
@property (readonly, retain, nonatomic) NSString *autoAssetClientName;
@property (readonly, retain, nonatomic) MAAutoAssetSelector *assetSelector;

+ (id)defaultDispatchQueue;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)registerForNotifications:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (void)registerForNotifications:(id)a0 completion:(id /* block */)a1;
- (void)cancelRegistration:(id /* block */)a0;
- (id)cancelRegistrationSync;
- (id)initForClientName:(id)a0 forAssetSelector:(id)a1 error:(id *)a2 notifyingStatusChanges:(id /* block */)a3;
- (id)initForClientName:(id)a0 forAssetSelector:(id)a1 notifyingFromQueue:(id)a2 error:(id *)a3 notifyingStatusChanges:(id /* block */)a4;
- (id)registerForNotificationsSync;
- (id)registerForNotificationsSync:(id)a0;

@end
