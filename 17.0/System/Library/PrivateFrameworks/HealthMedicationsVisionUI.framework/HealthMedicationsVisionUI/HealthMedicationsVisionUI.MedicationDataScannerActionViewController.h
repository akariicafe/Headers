@interface HealthMedicationsVisionUI.MedicationDataScannerActionViewController : OBWelcomeFullCenterContentController {
    void /* unknown type, empty encoding */ primaryButtonTitle;
    void /* unknown type, empty encoding */ primaryButtonImage;
    void /* unknown type, empty encoding */ primaryButton;
    void /* unknown type, empty encoding */ cancelButtonTitle;
    void /* unknown type, empty encoding */ cancelButton;
    void /* unknown type, empty encoding */ titleText;
    void /* unknown type, empty encoding */ detailText;
    void /* unknown type, empty encoding */ detailMaxNumberOfLines;
    void /* unknown type, empty encoding */ contentHeaderView;
    void /* unknown type, empty encoding */ contentHeaderHeight;
    void /* unknown type, empty encoding */ topPaddingConstraint;
    void /* unknown type, empty encoding */ customContentView;
    void /* unknown type, empty encoding */ actionHandler;
    void /* unknown type, empty encoding */ cancelHandler;
    void /* unknown type, empty encoding */ showsBackground;
    void /* unknown type, empty encoding */ $__lazy_storage_$_blurView;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 contentLayout:(long long)a3;
- (void)hxui_primaryFooterButtonTapped;
- (void)hxui_secondaryFooterButtonTapped;

@end
