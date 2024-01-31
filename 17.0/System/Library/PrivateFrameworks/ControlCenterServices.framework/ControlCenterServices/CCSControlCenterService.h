@class CCSRemoteServiceConnection;

@interface CCSControlCenterService : NSObject {
    CCSRemoteServiceConnection *_connection;
}

+ (id)sharedInstance;

- (id)_init;
- (void)requestEnableModuleWithIdentifier:(id)a0 force:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)presentModuleWithIdentifier:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)getEnabledStateOfModuleWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)requestDisableModuleWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestEnableModuleWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestAvailableModuleIdentifiersWithCompletionHandler:(id /* block */)a0;
- (void)setVisibility:(BOOL)a0 forModuleWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;

@end
