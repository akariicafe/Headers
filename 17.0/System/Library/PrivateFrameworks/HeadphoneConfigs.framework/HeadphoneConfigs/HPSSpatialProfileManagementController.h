@interface HPSSpatialProfileManagementController : PSListController

- (id)init;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)specifiers;
- (void)cancelEnrollment;
- (void)presentProfileEnrollmentController:(id)a0;
- (void)promptResetProfile:(id)a0;
- (void)resetProfile:(id)a0;
- (void)spatialAudioProfileUpdateHandler:(id)a0;
- (void)userDidTapSpatialProfilePrivacyLink:(id)a0;

@end
