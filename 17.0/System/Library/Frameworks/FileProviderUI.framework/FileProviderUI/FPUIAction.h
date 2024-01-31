@class FPProviderDomain;

@interface FPUIAction : UIDocumentBrowserActionDescriptor

@property (readonly, nonatomic) FPProviderDomain *fpProviderDomain;
@property (readonly, nonatomic) BOOL isNonUIAction;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 uiActionProviderIdentifier:(id)a1 fileProviderIdentifier:(id)a2 displayName:(id)a3 predicate:(id)a4 displayInline:(BOOL)a5 isNonUIAction:(BOOL)a6;
- (id)initWithIdentifier:(id)a0 uiActionProviderIdentifier:(id)a1 fileProviderIdentifier:(id)a2 displayName:(id)a3 predicate:(id)a4 displayInline:(BOOL)a5 isNonUIAction:(BOOL)a6 fpProviderDomain:(id)a7;

@end
