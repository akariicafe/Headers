@class NSString;

@interface SBPPTRunner : NSObject <CCUIPPTHostDelegate, NCNotificationViewControllerObserving>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_operationToRestoreVideoFromPIP;
+ (id)_operationToUnstashStashedPIP;
+ (id)_operationToStashPIP;
+ (id)_operationToPutVideoInPIP;
+ (BOOL)isAppLibraryTest:(id)a0;
+ (BOOL)isPageManagementTest:(id)a0;
+ (BOOL)isFocusModeTest:(id)a0;

- (void)_runPiPAutoUnstashAndRestoreByExitingSwitcherBackToAppTestWithOptions:(id)a0;
- (void)_runPageManagementTestWithName:(id)a0 options:(id)a1;
- (BOOL)runTestWithName:(id)a0 options:(id)a1;
- (void)_runFloatingDockBringupTestWithOptions:(id)a0;
- (void)_runPIPManualStashTestWithOptions:(id)a0;
- (id)_operationToDismissDashBoardForTestWithName:(id)a0;
- (void)_runNotificationReParkLongLookTransitionTestWithOptions:(id)a0;
- (void)_runPIPAutoStashByEnteringSwitcherTestWithOptions:(id)a0;
- (void)_runSiriTestWithName:(id)a0 options:(id)a1;
- (void)_runNotificationBannerTransitionTestWithOptions:(id)a0;
- (void)_runPIPBasicRestoreTestWithOptions:(id)a0;
- (void)assistantWillAppear:(id)a0 windowScene:(id)a1;
- (void)_runPIPAutoUnstashAndRestoreByExitingSwitcherBackToAppTestWithOptions:(id)a0;
- (void)longLookDidDismissForNotificationViewController:(id)a0;
- (void)_runCoverSheetDismissTestWithOptions:(id)a0;
- (BOOL)_runDashBoardTestWithName:(id)a0 options:(id)a1;
- (void)_runPiPBasicRestoreTestWithOptions:(id)a0;
- (id)_libraryViewController;
- (id)_operationToDismissCoverSheetForTestWithName:(id)a0;
- (void)assistantDidAppear:(id)a0 windowScene:(id)a1;
- (void)_runAppLibraryPadPresent;
- (void)_runScrollDeweyTest;
- (BOOL)_runCoverSheetTestWithName:(id)a0 options:(id)a1;
- (void)_runDashBoardDismissTestWithOptions:(id)a0;
- (void)_runPIPManualUnstashTestWithOptions:(id)a0;
- (void)_runPiPAutoStashByEnteringSwitcherTestWithOptions:(id)a0;
- (void)longLookWillDismissForNotificationViewController:(id)a0;
- (id)_mainDisplayWindowScene;
- (id)_mainDisplayWindowScene;
- (void)_configureParams:(id)a0 forScrollView:(id)a1;
- (void)_runCoverSheetPresentOverSafariTestWithOptions:(id)a0;
- (void)_runPiPManualUnstashTestWithOptions:(id)a0;
- (void)_runSwipeToDeweyTest;
- (void)_runPullToAppLibrarySearchTest;
- (void)_runPiPManualStashTestWithOptions:(id)a0;
- (void)_runLibrarySearchTest;
- (void)_runAppLibraryTestWithName:(id)a0 options:(id)a1;
- (void)_runFloatingDockDismissTestWithOptions:(id)a0;
- (void)_runNotificationClearLongLookTransitionTestWithOptions:(id)a0;
- (void)longLookWillPresentForNotificationViewController:(id)a0;
- (void)_runNotificationShortToLongLookTransitionTestWithOptions:(id)a0;
- (void)_runCoverSheetPresentTestWithOptions:(id)a0;
- (void)_runCoverSheetDismissToSafariTestWithOptions:(id)a0;
- (void)_setCoverSheetPresentationManagerTransitionCallbacksForTestName:(id)a0 operation:(id)a1;
- (void)prepareForControlCenterPPTHostState:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)longLookDidPresentForNotificationViewController:(id)a0;
- (void)_runPageManagementPresentTestWithName:(id)a0 options:(id)a1;
- (id)_operationToPresentCoverSheetForTestWithName:(id)a0;
- (void)_runFocusModePresentTestWithName:(id)a0 options:(id)a1;
- (void)_runSwipeFromDeweyTest;
- (void)_runScrollWithinExpandedPodTest;
- (void)_runFocusModeTestWithName:(id)a0 options:(id)a1;

@end
