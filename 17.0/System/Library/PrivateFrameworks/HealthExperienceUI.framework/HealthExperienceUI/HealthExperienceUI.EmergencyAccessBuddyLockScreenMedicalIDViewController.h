@interface HealthExperienceUI.EmergencyAccessBuddyLockScreenMedicalIDViewController : OBTableWelcomeController {
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ medicalIDCache;
    void /* unknown type, empty encoding */ initialShowWhenLocked;
    void /* unknown type, empty encoding */ switchCell;
    void /* unknown type, empty encoding */ diffableDataSource;
    void /* unknown type, empty encoding */ tableViewHeight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tableViewHeightLayoutConstraint;
    void /* unknown type, empty encoding */ flow;
    void /* unknown type, empty encoding */ emergencyStatus;
}

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 adoptTableViewScrollView:(BOOL)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 adoptTableViewScrollView:(BOOL)a3;
- (void)didTapCancel:(id)a0;
- (void)didTapNext:(id)a0;

@end
