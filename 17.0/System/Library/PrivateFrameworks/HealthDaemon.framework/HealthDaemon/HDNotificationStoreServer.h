@class NSString, HDNotificationManager;

@interface HDNotificationStoreServer : HDStandardTaskServer <HKNotificationStoreServer> {
    HDNotificationManager *_notificationManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (id)createTaskServerWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 error:(id *)a4;

- (id)exportedInterface;
- (id)remoteInterface;
- (void).cxx_destruct;
- (void)remote_fetchBadgeForDomain:(long long)a0 completion:(id /* block */)a1;
- (void)remote_postCompanionUserNotificationOfType:(long long)a0 completion:(id /* block */)a1;
- (void)remote_postNotificationWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)remote_setBadge:(id)a0 forDomain:(long long)a1 completion:(id /* block */)a2;

@end
