@class EKCustomTitleView, EKEventDetailItem, _UIAccessDeniedView, NSMutableDictionary, NSDictionary, UITableView, EKEventViewController, UIViewController, EKUIRecurrenceAlertController, EKEventEditViewController, UIScrollView, UIView, NSString, EKEvent, EKUIEventStatusButtonsView, NSArray, SingleToolbarItemContainerView, EKEventTitleDetailItem;
@protocol EKEventViewDelegate, EKUIViewControllerNavigationDelegate;

@interface EKEventViewControllerDefaultImpl : UIViewController <EKEventTitleDetailItemDelegate, EKUIEventStatusButtonsViewDelegate, EKEventDetailTextCellDelegate, UIAlertViewDelegate, UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate, CUIKPasteboardManagerCutDelegate, CUIKPasteboardManagerCopyDelegate, EKEventDetailItemDelegate, EKEventEditViewDelegatePrivateAllInProcess, EKUINavigationDelegateProvider, EKEventViewControllerImpl> {
    NSArray *_items;
    EKEvent *_event;
    BOOL _ignoreDBChanges;
    long long _lastAuthorizationStatus;
    BOOL _shouldOverrideAuthorizationStatus;
    _UIAccessDeniedView *_accessDeniedView;
    EKEventDetailItem *_selectedEditItem;
    long long _disclosedTableSection;
    struct _NSRange { unsigned long long location; unsigned long long length; } _disclosedTableRange;
    long long _pendingStatus;
    EKEventEditViewController *_activeEventEditor;
    EKUIRecurrenceAlertController *_recurrenceAlertController;
    EKUIEventStatusButtonsView *_statusButtonsView;
    SingleToolbarItemContainerView *_statusButtonsContainerView;
    double _statusButtonsViewCachedFontSize;
    long long _lastOrientation;
    EKEventTitleDetailItem *_titleItem;
    EKCustomTitleView *_customTitle;
    EKEventDetailItem *_currentEditItem;
    UITableView *_tableView;
    BOOL _didAppear;
    BOOL _countedAppearance;
    BOOL _autoPop;
    BOOL _showsPreview;
    BOOL _hidePreview;
    BOOL _calendarPreviewIsInlineDayView;
    BOOL _inlineDayViewRespectsSelectedCalendarsFilter;
    BOOL _trustsStatus;
    BOOL _needsReload;
    BOOL _itemsNeedReload;
    BOOL _dead;
    BOOL _tableIsBeingEdited;
    BOOL _minimalMode;
    NSArray *_currentSections;
    unsigned long long _scrollToSection;
    UIView *_headerView;
    NSArray *_headerConstraints;
    NSArray *_tableViewTopConstraints;
    UIView *_blankFooterView;
    double _lastFooterLayoutWidth;
    BOOL _showingBlankFooterView;
    UIViewController *_presentationSourceViewController;
    NSMutableDictionary *_cellHeights;
    EKEventEditViewController *_editViewControllerForPasteboard;
    EKEventViewController *_strongSelf;
    id<EKUIViewControllerNavigationDelegate> _navigationDelegate;
}

@property (weak, nonatomic) UIViewController *presentationSourceViewController;
@property BOOL viewIsVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<EKUIViewControllerNavigationDelegate> navigationDelegate;
@property (retain, nonatomic) EKEvent *event;
@property (nonatomic) BOOL allowsEditing;
@property (nonatomic) BOOL allowsCalendarPreview;
@property (weak, nonatomic) id<EKEventViewDelegate> delegate;
@property (nonatomic) BOOL eventEditViewPresented;
@property (nonatomic) BOOL calendarPreviewIsInlineDayView;
@property (nonatomic) BOOL inlineDayViewRespectsSelectedCalendarsFilter;
@property (nonatomic, getter=isICSPreview) BOOL ICSPreview;
@property (nonatomic) BOOL allowsInviteResponses;
@property (nonatomic) BOOL showsAddToCalendarForICSPreview;
@property (nonatomic) BOOL showsUpdateCalendarForICSPreview;
@property (nonatomic) BOOL showsDeleteForICSPreview;
@property (nonatomic) BOOL allowsSubitems;
@property (nonatomic) BOOL showsDoneButton;
@property (nonatomic) BOOL showsOutOfDateMessage;
@property (nonatomic) BOOL showsDelegatorMessage;
@property (nonatomic) BOOL showsDelegateMessage;
@property (nonatomic) BOOL showsDetectedConferenceItem;
@property (nonatomic) BOOL minimalMode;
@property (nonatomic) BOOL noninteractivePlatterMode;
@property (nonatomic) BOOL isLargeDayView;
@property (retain, nonatomic) NSDictionary *context;
@property (nonatomic) int editorShowTransition;
@property (nonatomic) int editorHideTransition;
@property (readonly, nonatomic) UIScrollView *eventDetailsScrollView;
@property (readonly, nonatomic) UIViewController *eventDetailsViewController;

+ (id)_orderedActionsForMask:(long long)a0;
+ (void)adjustLayoutForCell:(id)a0 tableViewWidth:(double)a1 numRowsInSection:(unsigned long long)a2 cellRow:(unsigned long long)a3 forceLayout:(BOOL)a4;
+ (void)setDefaultDatesForEvent:(id)a0;

- (void)_localeChanged;
- (void)cut:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewLayoutMarginsDidChange;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)setToolbarItems:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)setNeedsReload;
- (void)pasteboardManager:(id)a0 presentAlert:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)attemptDisplayReviewPrompt;
- (id)items;
- (void)viewDidLoad;
- (void)copy:(id)a0;
- (id)toolbarItems;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)setShouldOverrideAuthorizationStatus:(BOOL)a0 withRemoteUIStatus:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (id)editorForPasteboardManager:(id)a0;
- (void)setTopInset:(double)a0;
- (void)loadView;
- (void)openAttendeesDetailItem;
- (id)navigationController;
- (void)_performEditKeyCommand;
- (double)topInset;
- (void)viewWillDisappear:(BOOL)a0;
- (void)didMoveToParentViewController:(id)a0;
- (void)editButtonTapped;
- (void)eventEditViewController:(id)a0 didCompleteWithAction:(long long)a1;
- (void)editButtonPressed;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)doneButtonTapped;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)fullReloadWithNewEvent:(id)a0;
- (BOOL)shouldShowEditButtonInline;
- (void)viewDidDisappear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (id)navigationItem;
- (void)setToolbarItems:(id)a0 animated:(BOOL)a1;
- (void)tableView:(id)a0 didHighlightRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didUnhighlightRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (id)accessDeniedView;
- (BOOL)allowContextProvider:(id)a0;
- (id)getCurrentContext;
- (void)_doneButtonTapped:(id)a0;
- (void)_pop;
- (id)_sectionAtIndex:(long long)a0;
- (id)viewTitle;
- (void)_deleteClicked:(id)a0;
- (void)_reloadIfNeeded;
- (void)_updateResponse;
- (void)_acceptProposedTimeWithSourceViewForPopover:(id)a0;
- (long long)_actionsMask;
- (void)_addToCalendarClicked:(id)a0;
- (BOOL)_backingEventAllowsEditing;
- (BOOL)_canPerformEditKeyCommand;
- (void)_cancelProposedTime;
- (void)_clearCustomTitle;
- (void)_configureItemsForStoreConstraintsGivenCalendar:(id)a0;
- (void)_deleteSuggestionTapped:(id)a0;
- (id /* block */)_detachSheetHandler;
- (void)_dismissEditor:(BOOL)a0 deleted:(BOOL)a1;
- (id)_ekEventViewController;
- (void)_eventEditViewControllerDidCompleteWithAction:(long long)a0;
- (id)_footerLabelContainingText:(id)a0;
- (struct CGSize { double x0; double x1; })_idealSize;
- (id)_indexPathForAttendeesDetailItem;
- (id)_indexPathForSection:(unsigned long long)a0;
- (BOOL)_isDisplayingDeletableEvent;
- (BOOL)_isDisplayingInvitation;
- (BOOL)_isDisplayingSelfOrganizedInvitation;
- (BOOL)_isDisplayingSuggestion;
- (id)_itemAtIndexPath:(id)a0 section:(id *)a1 subitemIndex:(unsigned long long *)a2;
- (void)_keyboardWasHidden:(id)a0;
- (void)_keyboardWasShown:(id)a0;
- (BOOL)_navigationBarShouldBeHidden;
- (void)_notifyDetailItemsOfVisibilityOnScreen;
- (void)_performDelete:(long long)a0 editor:(id)a1;
- (BOOL)_performSave:(long long)a0 animated:(BOOL)a1;
- (void)_prepareEventForEdit;
- (void)_presentDetachSheetFromBarButtonItem:(id)a0;
- (void)_presentDetachSheetFromView:(id)a0;
- (void)_presentValidationAlert:(id)a0;
- (id)_proposedDate;
- (BOOL)_refreshEventAndReload;
- (void)_rejectProposedTime;
- (void)_saveStatus:(long long)a0 sourceViewForPopover:(id)a1;
- (void)_saveStatus:(long long)a0 span:(long long)a1;
- (unsigned long long)_sectionForDetailItem:(id)a0;
- (void)_setNeedsReloadIncludingItems;
- (void)_setNeedsReloadIncludingItems:(BOOL)a0;
- (void)_setObservesKeyboardNotifications:(BOOL)a0;
- (void)_setUpForEvent;
- (BOOL)_shouldDisplayDelegateOrOutOfDateMessage;
- (BOOL)_shouldDisplayDoneButton;
- (BOOL)_shouldDisplayStatusButtons;
- (BOOL)_shouldPopSelf;
- (BOOL)_shouldShowEditButton;
- (BOOL)_shouldShowInlineButtonFromDelegate;
- (id)_statusButtonsContainerView;
- (id)_statusButtonsView;
- (void)_storeChanged:(id)a0;
- (void)_teardownTableView;
- (void)_unsubscribeClicked:(id)a0;
- (void)_updateAccessDeniedViewWithNewStatus:(long long)a0;
- (void)_updateHeaderAndFooterIfNeeded;
- (void)_updateNavBarAnimated:(BOOL)a0;
- (void)_updateResponseVisibility;
- (void)_updateStatusButtonsActions;
- (void)_updateTableContentForSizeCategoryChange:(id)a0;
- (void)_updateTableContentInsetForKeyboard:(id)a0;
- (id)_viewControllerForEditorPresentation;
- (id)activeEventEditor;
- (void)completeWithAction:(long long)a0;
- (void)detailItem:(id)a0 performActionsOnCellAtIndexPath:(id)a1 actions:(id /* block */)a2;
- (void)detailItem:(id)a0 wantsIndexPathsScrolledToVisible:(id)a1;
- (void)detailItem:(id)a0 wantsRowInsertions:(id)a1 rowDeletions:(id)a2 rowReloads:(id)a3;
- (void)detailItem:(id)a0 wantsRowReload:(id)a1;
- (id)editorForEventDetailItem:(id)a0;
- (void)eventDetailItem:(id)a0 requestPresentShareSheetWithActivityItems:(id)a1 withPopoverSourceView:(id)a2;
- (void)eventDetailItemAccessoryButtonTapped:(id)a0;
- (BOOL)eventDetailItemShouldPresentShareSheet:(id)a0;
- (void)eventDetailItemWantsRefeshForHeightChange;
- (void)eventDetailItemWantsRefresh:(id)a0;
- (void)eventItem:(id)a0 wantsViewControllerPresented:(id)a1;
- (void)eventItemDidCommit:(id)a0;
- (void)eventItemDidEndEditing:(id)a0;
- (void)eventItemDidSave:(id)a0;
- (void)eventItemDidStartEditing:(id)a0;
- (void)eventStatusButtonsView:(id)a0 calculatedFontSizeToFit:(double)a1;
- (void)eventStatusButtonsView:(id)a0 didSelectAction:(long long)a1 appliesToAll:(BOOL)a2 ifCancelled:(id /* block */)a3;
- (double)eventStatusButtonsViewButtonFontSize:(id)a0;
- (BOOL)hideCalendarPreview;
- (void)invokeAction:(long long)a0 eventStatusButtonsView:(id)a1;
- (id)optionalModel;
- (id)pasteboardManagerForEventEditViewController:(id)a0;
- (void)presentEditorAnimated:(BOOL)a0;
- (void)resetBackgroundColor;
- (void)setActiveEventEditor:(id)a0;
- (void)setHideCalendarPreview:(BOOL)a0;
- (id)statusButtons;
- (double)tableViewSectionContentWidth;
- (void)updateTitleWithScrollView:(id)a0 animation:(BOOL)a1;
- (id)viewControllerForEventItem:(id)a0;

@end
