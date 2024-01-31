@class NSString;

@interface WFShareActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFShareActionUserInterface>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) NSString *userInterfaceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)excludedActivityTypes;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (void)finishWithExtensionItems:(id)a0 error:(id)a1;
- (void)presentActivityViewControllerForItems:(id)a0 isContentManaged:(BOOL)a1;
- (void)presentExtensionViewControllerForItems:(id)a0 extensionBundleIdentifier:(id)a1 extensionPointIdentifier:(id)a2 isContentManaged:(BOOL)a3;
- (void)presentItems:(id)a0 extensionBundleIdentifier:(id)a1 extensionPointIdentifier:(id)a2 isContentManaged:(BOOL)a3;
- (void)prewarmInput:(id)a0 completion:(id /* block */)a1;
- (void)showWithArchivedItems:(id)a0 isContentManaged:(BOOL)a1 extensionBundleIdentifier:(id)a2 extensionPointIdentifier:(id)a3 completionHandler:(id /* block */)a4;

@end
