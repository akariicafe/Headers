@class NSString;
@protocol INUIExtensionHostContextDelegate;

@interface _INUIExtensionHostContext : NSExtensionContext <_INUIExtensionContextHosting>

@property (weak, nonatomic) id<INUIExtensionHostContextDelegate> extensionHostContextDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_allowedItemPayloadClasses;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void).cxx_destruct;
- (void)willBeginEditing;
- (id)_errorHandlingExtensionContextProxy;
- (void)requestHandlingOfIntent:(id)a0;
- (void)setExtensionContextState:(id)a0 completion:(id /* block */)a1;

@end
