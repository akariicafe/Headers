@class NSString, CRKCourseEnrollmentController, CRKUserDefaultsObject;

@interface CRKDefaultSettingsUIVisibilityProvider : NSObject <CRKCourseEnrollmentControllerObserver, CRKSettingsUIVisibilityProvider> {
    CRKUserDefaultsObject *mUIPreviouslyVisible;
    CRKCourseEnrollmentController *mEnrollmentController;
}

@property BOOL settingsUIVisible;
@property (copy, nonatomic) NSString *paneStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)connectToDaemon;
- (void)enrollmentControllerDidUpdateActiveCourses:(id)a0;
- (void)enrollmentControllerDidUpdateSettingsUIVisibility:(id)a0;
- (BOOL)isAnyCourseActiveInEnrollmentController:(id)a0;
- (void)migrateOldUserDefaultsValues;
- (void)updatePaneStatus;
- (void)updatePreviouslyVisibleDefaultWithValue:(BOOL)a0;
- (void)updateVisibilityState;

@end
