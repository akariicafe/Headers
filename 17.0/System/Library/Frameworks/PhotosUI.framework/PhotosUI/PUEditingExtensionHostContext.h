@interface PUEditingExtensionHostContext : NSExtensionContext <PUEditingExtensionHost>

@property (copy) id /* block */ contentEditingOutputCommitHandler;
@property (copy) id /* block */ hideNavigationControllerHandler;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void).cxx_destruct;
- (void)commitContentEditingOutput:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)setHideNavigationController:(BOOL)a0;

@end
