@class NSString, _UIPhysicalButtonConfigurationSet;
@protocol _UIPhysicalButtonProxyInteractionDelegate;

@interface _UIPhysicalButtonProxyInteraction : _UIPhysicalButtonInteraction <_UIPhysicalButtonProxyInteractionDriverReceiving> {
    id<_UIPhysicalButtonProxyInteractionDelegate> _proxyDelegate;
}

@property (readonly, copy, nonatomic) _UIPhysicalButtonConfigurationSet *_configurationSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_driver:(id)a0 didCreateProposedAction:(id)a1;
- (id)_driverClasses;
- (BOOL)_isProxyInteraction;
- (void)_proxyDriver:(id)a0 didReceiveBSAction:(id)a1;

@end
