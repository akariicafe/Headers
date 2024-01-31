@class UIViewController, CKAppCardPresentationOverseerSwift;
@protocol CKBrowserViewControllerProtocol, CKAppCardPresentationOverseerDelegate;

@interface CKAppCardPresentationOverseer : NSObject

@property (retain, nonatomic) CKAppCardPresentationOverseerSwift *swiftOverseer;
@property (readonly, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *browserViewController;
@property (readonly, nonatomic) UIViewController *appCardContainerViewController;
@property (readonly, nonatomic) BOOL shouldAnimatePresentation;
@property (readonly, nonatomic) BOOL shouldAnimateDismissal;
@property (nonatomic) double appCardDismissPadding;
@property (weak, nonatomic) id<CKAppCardPresentationOverseerDelegate> delegate;
@property (readonly, nonatomic) BOOL isPresentingInSendMenuPopover;
@property (readonly, nonatomic) BOOL isPresentingInSheetController;

- (void).cxx_destruct;
- (BOOL)isExpanded;
- (void)dismissCardAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)checkForTouchInExtensionWith:(id /* block */)a0;
- (void)dismissCardAnimated:(BOOL)a0 overrideExceptions:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithPresentingViewController:(id)a0 sendDelegate:(id)a1;
- (BOOL)isPresentingCard;
- (void)presentCardWithStyle:(unsigned long long)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)presentPopoverFromView:(id)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
- (BOOL)presentedAppBypassesSendMenu;
- (void)requestPresentationStyle:(unsigned long long)a0;
- (void)requestPresentationStyle:(unsigned long long)a0 animated:(BOOL)a1;
- (id)updateCurrentBrowserForPlugin:(id)a0 dataSource:(id)a1;
- (BOOL)updateCurrentBrowserWithDataSource:(id)a0;
- (void)updatePopoverLocation:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 completion:(id /* block */)a1;

@end
