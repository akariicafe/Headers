@class NSHashTable, NSArray, CATRemoteTaskOperation, NSSet, NSString, NSDictionary, CRKSecureCodedUserDefaultsObject, CRKStudentDaemonProxy;

@interface CRKCourseEnrollmentController : NSObject <CRKStudentDaemonProxyObserver, CATTaskOperationNotificationDelegate, CRKSettingsPaneInfoProvider> {
    CATRemoteTaskOperation *mBrowseOperation;
    CRKSecureCodedUserDefaultsObject *mStoredCourses;
    BOOL mConfigurationFetched;
}

@property (class, readonly, nonatomic) CRKCourseEnrollmentController *sharedEnrollmentController;

@property (copy, nonatomic) NSArray *courses;
@property (copy, nonatomic) NSArray *courseInvitations;
@property (copy, nonatomic) NSSet *acceptedInvitationIdentifiers;
@property (retain, nonatomic) NSDictionary *observingInstructorIdentifiersByCourseIdentifiers;
@property (nonatomic) unsigned long long configurationType;
@property (retain, nonatomic) CATRemoteTaskOperation *fetchActiveInstructorsOperation;
@property (copy, nonatomic) NSSet *activeInstructors;
@property (nonatomic) BOOL settingsUIVisible;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) CRKStudentDaemonProxy *studentDaemonProxy;
@property (readonly, nonatomic) long long iCloudAccountStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL supportsRemoteLearning;

+ (id)keyPathsForValuesAffectingSupportsRemoteLearning;

- (void)applicationWillEnterForeground:(id)a0;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)taskOperation:(id)a0 didPostNotificationWithName:(id)a1 userInfo:(id)a2;
- (void)applicationDidEnterBackground:(id)a0;
- (id)invitationWithCourseIdentifier:(id)a0;
- (void)fetchCoursesOperationDidFinish:(id)a0;
- (BOOL)isCourseActive:(id)a0;
- (id)activeCourseIdentifiers;
- (id)activeCourses;
- (id)activeInstructorsWithIdentifier:(id)a0 forCourse:(id)a1;
- (void)addEnrollmentObserver:(id)a0;
- (id)anonymousInstructorUsersForCourse:(id)a0;
- (BOOL)canBrowseForInvitations;
- (id)courseWithIdentifier:(id)a0;
- (id)coursesBySortingCourses:(id)a0;
- (void)daemonProxy:(id)a0 didReceiveNotificationWithName:(id)a1 userInfo:(id)a2;
- (void)daemonProxyDidConnect:(id)a0;
- (void)daemonProxyDidDisconnect:(id)a0;
- (void)didUpdateActiveCourses;
- (void)didUpdateCourses;
- (void)didUpdateInvitations;
- (void)didUpdateSettingsUIVisibility;
- (void)disconnectInstructorWithIdentifier:(id)a0 forCourse:(id)a1;
- (void)disconnectOperationDidFinish:(id)a0;
- (void)fetchActiveInstructors;
- (void)fetchActiveInstructorsOperationDidFinish:(id)a0;
- (void)fetchConfiguration;
- (void)fetchConfigurationTypeOperationDidFinish:(id)a0;
- (void)fetchCourseInvitations;
- (void)fetchCourseInvitationsOperationDidFinish:(id)a0;
- (void)fetchCourses;
- (void)fetchStoredCourses;
- (id)initWithStudentDaemonProxy:(id)a0;
- (BOOL)instructor:(id)a0 isForCourse:(id)a1;
- (id)instructorUsersForCourse:(id)a0;
- (void)invitationWithIdentifierDidFail:(id)a0 withLocalizedReason:(id)a1;
- (BOOL)isInstructorWithIdentifier:(id)a0 activeForCourse:(id)a1;
- (BOOL)isInstructorWithIdentifier:(id)a0 disconnectableForCourse:(id)a1;
- (BOOL)isInstructorWithIdentifier:(id)a0 observingStudentScreenForCourse:(id)a1;
- (BOOL)isStudentScreenBeingObservedForCourse:(id)a0;
- (id)observersRespondingToSelector:(SEL)a0;
- (void)startBrowsingForInvitations;
- (void)startLongRunningOperations;
- (void)stopBrowsingForInvitations;
- (void)stopLongRunningOperations;
- (void)storeCourses;
- (id)syntheticUserForAnonymousInstructor:(id)a0;
- (void)updateInvitationBrowsingStatus;
- (BOOL)updateScreenObservingInstructors;
- (void)updateSettingsUIVisibility;

@end
