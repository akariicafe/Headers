@class ASDServiceBroker;

@interface ASDStoreKitExternalNotificationSheet : NSObject {
    ASDServiceBroker *_serviceBroker;
}

+ (id)sharedInstance;
+ (id)interface;

- (id)init;
- (void).cxx_destruct;
- (void)presentSheetIfNeededForProcessHandle:(id)a0 completion:(id /* block */)a1;

@end
