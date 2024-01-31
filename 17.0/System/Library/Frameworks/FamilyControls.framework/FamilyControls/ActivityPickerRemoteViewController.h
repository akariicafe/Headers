@interface ActivityPickerRemoteViewController : _UIRemoteViewController <FamilyControls.ActivityPickerClientInterface> {
    void /* unknown type, empty encoding */ didSelectCallback;
    void /* unknown type, empty encoding */ didCancelCallback;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)didCancel;
- (void)didSelectWithApplications:(id)a0 categories:(id)a1 webDomains:(id)a2 untokenizedApplications:(id)a3 untokenizedCategories:(id)a4 untokenizedWebDomains:(id)a5;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
