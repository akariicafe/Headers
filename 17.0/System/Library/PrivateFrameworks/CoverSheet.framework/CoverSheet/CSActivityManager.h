@class CSListItemSection, DMFApplicationPolicyMonitor, NSMutableDictionary, NSString, ACActivityCenter, NSMutableArray;
@protocol CSListItemManaging;

@interface CSActivityManager : NSObject <ACUISActivityHostViewControllerDelegate, CSListItemSceneHostEnvironmentObserving, CSListItemProviding>

@property (retain, nonatomic) NSMutableDictionary *activityIdentifiersToSupplemantaryItems;
@property (retain, nonatomic) NSMutableDictionary *bundleIdentifiersToItems;
@property (retain, nonatomic) NSMutableDictionary *activityItemsByBundleId;
@property (retain, nonatomic) NSMutableDictionary *descriptorByActivityIdentifier;
@property (retain, nonatomic) NSMutableDictionary *activityHostViewControllersByActivityIdentifier;
@property (retain, nonatomic) NSMutableArray *hiddenItems;
@property (readonly, nonatomic) DMFApplicationPolicyMonitor *applicationPolicyMonitor;
@property (retain, nonatomic) ACActivityCenter *activityCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<CSListItemManaging> itemManager;
@property (readonly, nonatomic) unsigned long long itemCount;
@property (readonly, copy, nonatomic) CSListItemSection *section;
@property (nonatomic) BOOL listHasAdditionalContent;
@property (readonly, nonatomic) id /* block */ itemsGroupSortComparator;
@property (readonly, nonatomic) id /* block */ itemsViewControllerSortComparator;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)restrictsTouchesOnAllHostedScenes:(BOOL)a0;
- (void)didAddNewSceneHostEnvironment;
- (void)_addActivityListItemForContentUpdate:(id)a0;
- (void)_addActivityWithContentUpdate:(id)a0;
- (void)_addAppActivitiesRecordForBundleId:(id)a0 activityItem:(id)a1;
- (id)_appNameForBundleIdentifier:(id)a0;
- (id)_authorizationActionsForOptionsType:(long long)a0 item:(id)a1 configuration:(id)a2;
- (id)_buildConfigurationFromViewController:(id)a0;
- (void)_clearAuthorizationOptionsIfNecessaryForGroupingIdentifier:(id)a0;
- (id)_createdDateForItemWithViewController:(id)a0;
- (void)_endAllActivitiesForBundleId:(id)a0;
- (void)_handleActivityExceedingReducedPushBudgetWithIdentifier:(id)a0;
- (void)_hostShouldCancelTouchesWithIdentifier:(id)a0;
- (BOOL)_itemIsNowPlaying:(id)a0;
- (id)_latestActivityCreationDateForGroupingIdentifier:(id)a0;
- (id)_primaryActionTitleForAuthorizationOptionsType:(long long)a0;
- (double)_relevanceScoreForItemWithViewController:(id)a0;
- (void)_removeActivityWithContentUpdate:(id)a0;
- (void)_removeAppActivitiesRecordForBundleId:(id)a0 activityItem:(id)a1;
- (id)_secondaryActionTitleForAuthorizationOptionsType:(long long)a0;
- (void)_sendAnalyticsEventWithName:(id)a0 payloadBuilder:(id /* block */)a1;
- (void)_setActivitiesEnabled:(BOOL)a0 forBundleId:(id)a1;
- (void)_setFrequentUpdatesEnabled:(BOOL)a0 forBundleId:(id)a1;
- (void)_setHidden:(BOOL)a0 forItem:(id)a1;
- (BOOL)_shouldHandleActivityWithContentUpdate:(id)a0;
- (BOOL)_shouldSetBlackBackgroundForViewController:(id)a0;
- (void)_significantUserInteractionBeganForIdentifier:(id)a0;
- (void)_significantUserInteractionEndedForIdentifier:(id)a0;
- (id)_summaryTextForAuthorizationOptionsType:(long long)a0 appName:(id)a1;
- (void)_unlockAndLaunchAppIfPossible:(id)a0 withAction:(id)a1;
- (void)_updateActivityIfNeededWithContentUpdate:(id)a0;
- (void)_updateAllApplicationMonitoringPolicies;
- (void)_updateForScreenTimeLimitForBundleId:(id)a0 policy:(id)a1;
- (void)activityHostViewController:(id)a0 requestsLaunchWithAction:(id)a1;
- (void)activityHostViewControllerBackgroundTintColorDidChange:(id)a0;
- (void)activityHostViewControllerHostShouldCancelTouches:(id)a0;
- (void)activityHostViewControllerSignificantUserInteractionBegan:(id)a0;
- (void)activityHostViewControllerSignificantUserInteractionEnded:(id)a0;
- (void)activityHostViewControllerTextColorDidChange:(id)a0;
- (void)addActivityWithContentUpdate:(id)a0;
- (void)handleActivityExceedingReducedPushBudgetForIdentifier:(id)a0;
- (void)handleRemovedItems:(id)a0;
- (void)removeActivityWithContentUpdate:(id)a0;
- (void)restrictsTouches:(BOOL)a0 onHostedSceneInViewController:(id)a1;
- (void)setActivityHidden:(BOOL)a0 forIdentifier:(id)a1;
- (void)updateActivityWithContentUpdate:(id)a0;

@end
