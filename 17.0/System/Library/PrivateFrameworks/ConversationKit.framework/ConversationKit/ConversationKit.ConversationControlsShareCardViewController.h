@interface ConversationKit.ConversationControlsShareCardViewController : UIViewController {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ conversationControlsManager;
    void /* unknown type, empty encoding */ updateSheetDetent;
    void /* unknown type, empty encoding */ foregroundAppCancellable;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundMaterialView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_headerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollViewContent;
    void /* unknown type, empty encoding */ $__lazy_storage_$_controlsView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sharePlayDiscoverabilityView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_gelatoDiscoverabilityView;
}

@property (nonatomic) long long modalPresentationStyle;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)didTapCloseButton;
- (void)didTapCollaborateButton;
- (void)didTapEndSharePlay;
- (void)didTapScreenShareButton;

@end
