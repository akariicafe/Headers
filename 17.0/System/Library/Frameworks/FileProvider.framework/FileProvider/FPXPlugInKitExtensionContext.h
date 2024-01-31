@class FPXExtensionContext;

@interface FPXPlugInKitExtensionContext : NSExtensionContext {
    FPXExtensionContext *_context;
}

@property (class, retain, nonatomic) Class principalClass;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void).cxx_destruct;

@end
