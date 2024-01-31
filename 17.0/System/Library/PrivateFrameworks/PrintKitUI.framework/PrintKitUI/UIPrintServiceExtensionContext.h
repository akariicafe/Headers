@interface UIPrintServiceExtensionContext : NSExtensionContext

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)init;
- (void)dealloc;
- (void)_gatherPrintersForPrintInfo:(id)a0 reply:(id /* block */)a1;

@end
