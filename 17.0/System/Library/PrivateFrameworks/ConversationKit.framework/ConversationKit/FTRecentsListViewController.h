@interface FTRecentsListViewController : UIViewController <UICollectionViewDelegate, SCUIInterventionViewControllerDelegate, UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ recentCallProvider;
    void /* unknown type, empty encoding */ detailControllerFactory;
    void /* unknown type, empty encoding */ avatarViewControllerSettings;
    void /* unknown type, empty encoding */ conversationManager;
    void /* unknown type, empty encoding */ indexPathForMenu;
    void /* unknown type, empty encoding */ $__lazy_storage_$_callCreator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_reportSpamManager;
    void /* unknown type, empty encoding */ meCardSharingSettingsViewControllerObserver;
    void /* unknown type, empty encoding */ dataSourceLoadSink;
    void /* unknown type, empty encoding */ linkCoordinator;
    void /* unknown type, empty encoding */ headerView;
    void /* unknown type, empty encoding */ featureFlags;
    void /* unknown type, empty encoding */ $__lazy_storage_$_linkController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataSource;
    void /* unknown type, empty encoding */ $__lazy_storage_$_supplementaryViewProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cellProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cellBackgroundConfiguration;
    void /* unknown type, empty encoding */ cellRegistrationForRecentsCallItemCalls;
    void /* unknown type, empty encoding */ cellRegistrationForRecentsSensitveCallItemCalls;
    void /* unknown type, empty encoding */ cellRegistrationForRecentsCallItemOngoingCalls;
    void /* unknown type, empty encoding */ cellRegistrationForRecentsCallItemLinks;
    void /* unknown type, empty encoding */ sectionHeaderViewRegistrationForSupplementalView;
    void /* unknown type, empty encoding */ headerButtonsViewRegistration;
    void /* unknown type, empty encoding */ $__lazy_storage_$_deleteButtonItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_flexibleSpaceButtonItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionLayoutConfiguration;
    void /* unknown type, empty encoding */ $__lazy_storage_$_avatarViewControllerDelegate;
    void /* unknown type, empty encoding */ pseudonymForDeferredLinkDetailPresentation;
    void /* unknown type, empty encoding */ messageUUIDForDeferredPresentation;
    void /* unknown type, empty encoding */ onboardingController;
}

- (id)collectionView:(id)a0 previewForHighlightingContextMenuWithConfiguration:(id)a1;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 contextMenuConfigurationForItemAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)didConfirmForInterventionViewController:(id)a0;
- (void)didRejectForInterventionViewController:(id)a0;
- (void)didEnterBackgroundNotification:(id)a0;
- (void)startEditing;
- (void)stopEditing;
- (void)accessibilityPrepareHeaderView:(id)a0;
- (void)dismissMoreHelp;
- (void)deleteButtonAction:(id)a0;
- (void)didSelectAccessoryViewForLinkWithSender:(id)a0;
- (void)didSelectAccessoryViewForOngoingCallWithSender:(id)a0;
- (void)didSelectAccessoryViewForRecentCallWithSender:(id)a0;
- (void)didTapNewCallButton;
- (void)didTapNewLinkButtonFrom:(id)a0;
- (void)dismissContactsModal;
- (void)willEnterForegroundNotification:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithCoder:(id)a0;

@end
