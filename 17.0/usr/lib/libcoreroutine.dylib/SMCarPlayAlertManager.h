@class RTContactsManager, RTDefaultsManager, NSObject, RTStarkManager;
@protocol OS_dispatch_queue;

@interface SMCarPlayAlertManager : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) RTContactsManager *contactsManager;
@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) RTStarkManager *starkManager;

- (void).cxx_destruct;
- (id)_getCarPlayContactNameFromSessionManagerState:(id)a0 error:(id *)a1;
- (id)_getCarPlayUserInfoForSessionManagerState:(id)a0;
- (void)_postCarPlayNotificationForNotificationType:(unsigned long long)a0 sessionManagerState:(id)a1 handler:(id /* block */)a2;
- (id)initWithQueue:(id)a0 defaultsManager:(id)a1 contactsManager:(id)a2 starkManager:(id)a3;
- (void)postCarPlayNotificationForNotificationType:(unsigned long long)a0 sessionManagerState:(id)a1 handler:(id /* block */)a2;

@end
