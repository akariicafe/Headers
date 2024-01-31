@interface ACUISetupViewController : PSSetupController {
    BOOL _didAttemptDataclassSetup;
    BOOL _shouldForceMailSetup;
}

+ (id)_specifierForDataclassEditControllerClass:(Class)a0 withName:(id)a1 account:(id)a2;
+ (void)showAlternateCreationControllerForAccountType:(id)a0 username:(id)a1 fromViewController:(id)a2 specifier:(id)a3 completion:(id /* block */)a4;
+ (void)showDataclassConfigurationControllerForAccount:(id)a0 name:(id)a1 fromViewController:(id)a2 specifier:(id)a3 completion:(id /* block */)a4;

- (void)_dismissAndNotifyParent;
- (void)controller:(id)a0 didFinishSettingUpAccount:(id)a1;
- (void)finishedAccountSetup;

@end
