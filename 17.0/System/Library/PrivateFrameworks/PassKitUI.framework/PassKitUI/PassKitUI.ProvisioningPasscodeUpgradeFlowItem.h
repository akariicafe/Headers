@interface PassKitUI.ProvisioningPasscodeUpgradeFlowItem : NSObject <PKPasscodeUpgradeFlowRenderer> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ requirements;
    void /* unknown type, empty encoding */ feature;
    void /* unknown type, empty encoding */ passcodeController;
    void /* unknown type, empty encoding */ isRequirementOptional;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ dismissalConfiguration;
}

- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (id)topViewController;
- (id)init;
- (void).cxx_destruct;

@end
