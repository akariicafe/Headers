@interface Settings.SettingsExtensionHostViewController : NSObject <_EXHostViewControllerDelegate> {
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ extensionProxies;
}

- (id)init;
- (void).cxx_destruct;
- (void)hostViewController:(id)a0 didBeginHosting:(id)a1;
- (void)hostViewController:(id)a0 didEndHosting:(id)a1 error:(id)a2;
- (void)hostViewControllerDidActivate:(id)a0;

@end
