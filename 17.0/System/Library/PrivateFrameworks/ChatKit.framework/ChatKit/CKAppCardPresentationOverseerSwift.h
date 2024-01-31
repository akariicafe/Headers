@class UIViewController;
@protocol CKBrowserViewControllerProtocol;

@interface CKAppCardPresentationOverseerSwift : NSObject <UISheetPresentationControllerDelegate, UIPopoverPresentationControllerDelegate> {
    void /* unknown type, empty encoding */ container;
    void /* unknown type, empty encoding */ presentingViewController;
    void /* unknown type, empty encoding */ sendDelegate;
    void /* unknown type, empty encoding */ tracker;
}

@property (nonatomic, readonly) BOOL shouldUseSendMenuPresentation;
@property (nonatomic, readonly) UIViewController<CKBrowserViewControllerProtocol> *browserViewController;
@property (nonatomic, readonly) UIViewController *containerViewController;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ appCardDismissPadding;
@property (nonatomic, readonly) BOOL isPresentingInSendMenuPopover;
@property (nonatomic, readonly) BOOL isPresentingInSheetController;
@property (nonatomic, readonly) BOOL isPresentingCard;
@property (nonatomic, readonly) BOOL presentedAppBypassesSendMenu;
@property (nonatomic, readonly) BOOL isExpanded;
@property (nonatomic, readonly) BOOL shouldAnimatePresentation;
@property (nonatomic, readonly) BOOL shouldAnimateDismissal;

- (void)presentationControllerDidDismiss:(id)a0;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void)_sheetPresentationControllerDidInvalidateCurrentPresentedViewFrame:(id)a0;
- (void)sheetPresentationControllerDidChangeSelectedDetentIdentifier:(id)a0;
- (void)appCardContainerViewController:(id)a0 didMoveToWindow:(id)a1;
- (void)appCardContainerViewControllerDidDismissWithContainer:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })appCardContainerViewControllerEdgeInsetsForChildrenWithContainer:(id)a0;
- (void)containerVerticalSizeClassDidChangeFor:(id)a0;
- (void)updateCornerRadiusWithPresentedViewFrameFor:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)checkForTouchInExtensionWith:(id /* block */)a0;
- (void)dismissCardWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)dismissCardWithAnimated:(BOOL)a0 overrideExceptions:(BOOL)a1 completion:(id /* block */)a2;
- (void)extensionRemoteConnectionWasInterruptedWithNotification:(id)a0;
- (id)initWithPresentingViewController:(id)a0 sendDelegate:(id)a1;
- (void)presentCardWithStyle:(unsigned long long)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)presentPopoverFrom:(id)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
- (void)requestWithPresentationStyle:(unsigned long long)a0;
- (void)requestWithPresentationStyle:(unsigned long long)a0 animated:(BOOL)a1;
- (BOOL)updateCurrentBrowserFor:(id)a0;
- (id)updateCurrentBrowserFor:(id)a0 dataSource:(id)a1;
- (void)updatePopoverLocation:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 completion:(id /* block */)a1;

@end
