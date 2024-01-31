@class NSString;

@interface NEFilterControlExtensionProviderHostContext : NEFilterExtensionProviderHostContext <NEFilterControlExtensionProviderProtocol, NEFilterControlExtensionProviderHostProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)handleNewFlow:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleReport:(id)a0;
- (void)notifyRulesChanged;
- (void)provideRemediationMap:(id)a0;
- (void)provideURLAppendStringMap:(id)a0;

@end
