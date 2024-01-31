@class NSString;

@interface ASOHostContext : NSExtensionContext <ASOHostProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)serviceContext;
- (void)dismissOverlayWithReply:(id /* block */)a0;
- (void)presentOverlayWithConfiguration:(id)a0 delegate:(id)a1 reply:(id /* block */)a2;

@end
