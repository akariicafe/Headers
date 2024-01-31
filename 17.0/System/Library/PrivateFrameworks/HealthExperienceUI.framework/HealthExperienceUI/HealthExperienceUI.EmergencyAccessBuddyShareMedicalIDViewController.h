@interface HealthExperienceUI.EmergencyAccessBuddyShareMedicalIDViewController : OBWelcomeController {
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ medicalIDCache;
    void /* unknown type, empty encoding */ shareButton;
    void /* unknown type, empty encoding */ dontShareButton;
    void /* unknown type, empty encoding */ flow;
    void /* unknown type, empty encoding */ emergencyStatus;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 contentLayout:(long long)a3;
- (void)didTapLearnMore:(id)a0;
- (void)didTapCancel:(id)a0;
- (void)didTapDontShare:(id)a0;
- (void)didTapShare:(id)a0;

@end
