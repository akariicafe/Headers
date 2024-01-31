@class AFSettingsConnection, NSObject;
@protocol OS_dispatch_queue;

@interface AFMyriadAdvertisementContextManager : NSObject {
    AFSettingsConnection *_settingsConnection;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)initWithQueue:(id)a0;
- (void)reset;
- (void)pushMyriadAdvertisementContext:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)_settingsConnection;
- (void)_resetSettingsConnection;
- (void)triggerABCForType:(id)a0 subType:(id)a1 context:(id)a2;

@end
