@interface WidgetKit._WidgetExtensionBaseContext : NSExtensionContext <EXExtensionContextHostConfigurationProviding>

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
+ (BOOL)_shouldSendHostApplicationStateNotifications;

- (id)init;
- (id)initWithInputItems:(id)a0 contextUUID:(id)a1;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (id)initWithInputItems:(id)a0;
- (void).cxx_destruct;

@end
