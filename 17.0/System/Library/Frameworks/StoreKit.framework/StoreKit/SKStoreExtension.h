@class NSString;

@interface SKStoreExtension : UIViewController <SKStoreExtensionServiceInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)serviceInterface;
+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)setupWithParameters:(id)a0;
- (void)openURL:(id)a0 sourceApplication:(id)a1 annotation:(id)a2;
- (void)presentRequestedViewControllerWithIdentifier:(id)a0;
- (void)setRequestedIdentifier:(id)a0;
- (void)setTabIdentifier:(id)a0;
- (BOOL)shouldOpenURL:(id)a0 sourceApplication:(id)a1 annotation:(id)a2;

@end
