@class NSMutableSet, SBRootFolder, SBFolderController, NSString, SBHIconModel, SBHIconManager, NSHashTable;

@interface SBHHomeScreenUsageMonitor : NSObject <SBFolderObserver, SBLeafIconObserver, BSDescriptionProviding> {
    NSHashTable *_observers;
    NSMutableSet *_visibleHomeScreenWidgetIcons;
}

@property (retain, nonatomic) SBHIconModel *iconModel;
@property (retain, nonatomic) SBRootFolder *rootFolder;
@property (retain, nonatomic) SBFolderController *rootFolderController;
@property (nonatomic) BOOL delayedLayoutDidChangeNotification;
@property (nonatomic) unsigned long long homeScreenDisappearanceReasons;
@property (nonatomic) BOOL currentPageIndexDidChangeWhileScrolling;
@property (readonly, weak, nonatomic) SBHIconManager *iconManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)folder:(id)a0 listHiddenDidChange:(id)a1;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isContentVisible;
- (void)leafIcon:(id)a0 didChangeActiveDataSource:(id)a1;
- (void)folder:(id)a0 didAddIcons:(id)a1 removedIcons:(id)a2;
- (void)iconManagerDidChangeRootViewController:(id)a0;
- (unsigned long long)listModelIndexForRootFolderController:(id)a0;
- (void)noteAddWidgetSheetWillPresent;
- (void)noteCurrentPageIndexChanged:(unsigned long long)a0;
- (void)folder:(id)a0 didRemoveLists:(id)a1 atIndexes:(id)a2;
- (void)noteEditingModeEntered;
- (void)noteIconManagerContentOccludedChanged;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)folder:(id)a0 didReplaceIcon:(id)a1 withIcon:(id)a2;
- (void)noteIconManagerCoverSheetTodayViewDidAppear;
- (void)noteIconManagerCoverSheetTodayViewDidDisappear;
- (void)noteIconManagerOverlayTodayViewDidDisappear;
- (void)noteIconManagerRootFolderControllerViewDidDisappear;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)noteIconManagerRootFolderControllerViewWillAppear;
- (void)resetIconModel;
- (void)noteIconManagerTodayViewAtLocation:(long long)a0 didScrollToRevealIcons:(id)a1;
- (void)noteLayoutChanged;
- (void)noteUserDislikedSiriSuggestionOnWidgetIconStackSuggestion:(id)a0;
- (void)noteUserDislikedWidgetIconStackSuggestion:(id)a0;
- (void)noteUserTappedWidgetIcon:(id)a0 withURL:(id)a1;
- (void).cxx_destruct;
- (void)noteWidgetDiscoverabilityDidAcceptSuggestion:(id)a0;
- (void)noteWidgetDiscoverabilityDidEnterEditingMode;
- (id)initWithIconManager:(id)a0;
- (void)noteWidgetDiscoverabilityDidRejectSuggestion:(id)a0;
- (void)noteWidgetDiscoverabilityStarted;
- (void)iconManagerDidChangeIconModel:(id)a0;
- (void)noteWidgetIconAdded:(id)a0;
- (void)noteWidgetIconRemoved:(id)a0;
- (void)noteWidgetIconStack:(id)a0 changedActiveWidget:(id)a1;
- (void)notifyForEveryTodayViewWidgetVisibilityOnCoverSheet:(BOOL)a0;
- (void)iconManagerEditingDidChange:(id)a0;
- (void)notifyRootFolderControllerViewWillAppear;
- (id)succinctDescription;
- (void)leafIcon:(id)a0 didAddIconDataSource:(id)a1;
- (void)noteIconManagerOverlayTodayViewDidAppear;
- (void)leafIcon:(id)a0 didRemoveIconDataSource:(id)a1;
- (void)folder:(id)a0 didMoveList:(id)a1 fromIndex:(unsigned long long)a2 toIndex:(unsigned long long)a3;
- (void)resetRootFolderController;
- (void)folder:(id)a0 didAddList:(id)a1;
- (void)noteUserConfiguredIcon:(id)a0;
- (void)addObserver:(id)a0;
- (void)rootFolderControllerCurrentPageIndexDidChange:(id)a0;
- (void)rootFolderControllerDidEndScrolling:(id)a0;
- (void)noteUserAddedWidgetIconStackSuggestion:(id)a0;
- (void)updateVisibilityReasons;
- (void)updateVisibleWidgetIcons;
- (void)notifyForEveryHomeScreenWidgetVisibility;
- (void)iconModelDidLayOut:(id)a0;

@end
