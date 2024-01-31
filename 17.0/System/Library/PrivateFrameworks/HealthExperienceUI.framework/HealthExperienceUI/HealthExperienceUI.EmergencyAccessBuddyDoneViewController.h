@interface HealthExperienceUI.EmergencyAccessBuddyDoneViewController : OBWelcomeController <CTStewieStateMonitorDelegate> {
    void /* unknown type, empty encoding */ flow;
    void /* unknown type, empty encoding */ emergencyStatus;
    void /* unknown type, empty encoding */ stewieStateMonitor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_queue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_isStewieSupported;
    void /* unknown type, empty encoding */ $__lazy_storage_$_reviewMedicalIDReminderBullet;
    void /* unknown type, empty encoding */ $__lazy_storage_$_stewieTryOutModeBullet;
    void /* unknown type, empty encoding */ $__lazy_storage_$_stewieTryOutModeView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_stewieTryOutFootnote;
}

- (void)stateChanged:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 contentLayout:(long long)a3;
- (void)didTapDone:(id)a0;

@end
