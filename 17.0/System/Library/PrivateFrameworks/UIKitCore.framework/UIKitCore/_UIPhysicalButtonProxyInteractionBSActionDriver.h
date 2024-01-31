@class NSString;
@protocol _UIPhysicalButtonProxyInteractionDriverReceiving;

@interface _UIPhysicalButtonProxyInteractionBSActionDriver : NSObject <_UIPhysicalButtonProxyInteractionBSActionDriving> {
    id<_UIPhysicalButtonProxyInteractionDriverReceiving> _proxyReceiver;
}

@property (readonly, nonatomic) long long _driverType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_handleBSAction:(id)a0;
- (void)_installToViewIfNeeded:(id)a0;
- (void)_physicalButtonConfigurationsDidChange;
- (void)_uninstallFromViewIfNeeded:(id)a0;
- (id)initWithReceiver:(id)a0;

@end
