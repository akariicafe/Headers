@interface PKPaymentInformationEventExtensionBaseContext : NSExtensionContext

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)remoteContext;
- (id)remoteContextWithErrorHandler:(id /* block */)a0;

@end
