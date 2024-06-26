@class CKChatEagerUploadController, UITextInputPayloadController, CKScheduledUpdater, IMBalloonPluginDataSource, UINavigationController, CKAppCardPresentationOverseer, CKMessagePartChatItem, CKHandwritingPresentationController, UIViewController, CKKeyboardContentViewController, CKMessageEntryView, IMScheduledUpdater, NSString, CKDeviceOrientationManager, CKBrowserSwitcherViewController, IMBalloonPlugin;
@protocol CKChatInputControllerDelegate, CKBrowserViewControllerProtocol, CKExternalPluginViewControllerProvider;

@interface CKChatInputController : NSObject <CKMessageEntryViewInputDelegate, CKPhotoBrowserViewControllerSendDelegate, CKHandwritingViewControllerSendDelegate, CKBrowserViewControllerStoreSendDelegate, CKPluginEntryViewControllerDelegate, CKExpandedAppViewControllerDelegate, CKDeviceOrientationManagerDelegate, CKBrowserSwitcherViewControllerDelegate, CKBrowserTransitionCoordinatorDelegate, CKHandwritingPresentationControllerDelegate, CKBrowserAppManagerViewControllerDelegate, CKAppMenuViewControllerDelegate, UIViewControllerTransitioningDelegate, UIPopoverPresentationControllerDelegate, CKSendMenuViewControllerDelegate, CKAppCardPresentationOverseerDelegate, CKAppSelectionInterface>

@property (retain, nonatomic) CKMessageEntryView *entryView;
@property (retain, nonatomic) CKKeyboardContentViewController *currentInputViewController;
@property (nonatomic, getter=isInputViewVisible) BOOL inputViewVisible;
@property (nonatomic) BOOL inputViewWillBecomeVisible;
@property (retain, nonatomic) CKKeyboardContentViewController *switcherInputViewController;
@property (retain, nonatomic) CKBrowserSwitcherViewController *browserSwitcher;
@property (retain, nonatomic) CKAppCardPresentationOverseer *appCardPresentationOverseer;
@property (nonatomic) BOOL currentPluginAppDidRecieveTouchForSendAPI;
@property (retain, nonatomic) CKDeviceOrientationManager *orientationManager;
@property (nonatomic) long long lastSeenOrientation;
@property (retain, nonatomic) UINavigationController *presentedBrowserNavigationController;
@property (retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *macBrowserViewController;
@property (weak, nonatomic) UINavigationController *wolfBrowserNavController;
@property (nonatomic) BOOL dismissPluginAfterReplaceAlertInteractedWith;
@property (nonatomic) BOOL keyboardIsHiding;
@property (nonatomic) BOOL keyboardIsVisible;
@property (nonatomic) BOOL isDismissingAppCardForKeyboardPresentation;
@property (nonatomic) BOOL inCollapseOrExpandAnimation;
@property (retain, nonatomic) IMScheduledUpdater *dismissEntryViewShelfUpdater;
@property (nonatomic) unsigned long long savedStyleForDragCompletion;
@property (retain, nonatomic) CKScheduledUpdater *orientationUpdater;
@property (retain, nonatomic) CKHandwritingPresentationController *handwritingPresentationController;
@property (nonatomic) BOOL shouldSuppressStatusBarForHandwriting;
@property (nonatomic) BOOL shouldSuppressStatusBarForSendMenu;
@property (nonatomic) BOOL shouldRestoreAppSwitcher;
@property (nonatomic) BOOL didDismissAppCardForStickerDrag;
@property (retain, nonatomic) UIViewController *statusBarStyleViewController;
@property (retain, nonatomic) UITextInputPayloadController *textInputPayloadController;
@property (copy, nonatomic) id /* block */ insertPayloadCompletionHandler;
@property (retain, nonatomic) IMBalloonPluginDataSource *deferredPluginDataSource;
@property (retain, nonatomic) CKChatEagerUploadController *eagerUploadController;
@property (retain, nonatomic) CKMessagePartChatItem *stickerPickerMessagePartChatItem;
@property (weak, nonatomic) id<CKChatInputControllerDelegate> delegate;
@property (weak, nonatomic) id<CKExternalPluginViewControllerProvider> externalPluginControllerProvider;
@property (retain, nonatomic) IMBalloonPlugin *browserPlugin;
@property (retain, nonatomic) IMBalloonPluginDataSource *browserPluginDataSource;
@property (readonly, nonatomic) BOOL browserShouldAutorotate;
@property (readonly, nonatomic) BOOL appStoreIsDisplayed;
@property (readonly, nonatomic) BOOL appManagerIsDisplayed;
@property (readonly, nonatomic) BOOL appModalIsDisplayed;
@property (readonly, nonatomic) BOOL isDismissingAppModal;
@property (readonly, nonatomic) unsigned long long browserSupportedInterfaceOrientations;
@property (nonatomic) BOOL preventResignFirstResponder;
@property (nonatomic) double appCardDismissPadding;
@property (readonly, nonatomic) BOOL isAppCardPresented;
@property (readonly, nonatomic) BOOL presentedAppBypassesSendMenu;
@property (readonly, nonatomic) BOOL isAppCardDismissing;
@property (readonly, nonatomic) BOOL isAppCardAppearing;
@property (readonly, nonatomic) BOOL isAppCardUsingSheetPresentation;
@property (readonly, nonatomic) BOOL isAppCardPresentationStyleExpanded;
@property (nonatomic) BOOL isAppCardUsingPopoverPresentation;
@property (nonatomic) BOOL shouldBlurForMessageEditing;
@property (nonatomic) BOOL _isRunningPPT;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismiss;
- (id)inputViewController;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)init;
- (void)dealloc;
- (void)showKeyboard;
- (void)presentationControllerDidDismiss:(id)a0;
- (void).cxx_destruct;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void)handlePayload:(id)a0 withPayloadId:(id)a1;
- (id)participantHandles;
- (BOOL)_isRunningInMVS;
- (id)appIconOverride;
- (id)_formattedPayload:(id)a0 forPayloadID:(id)a1;
- (void)_launchAppExtensionForDebugging;
- (void)_presentSendMenuWithCompletion:(id /* block */)a0;
- (void)messageEntryViewPhotoButtonHit:(id)a0;
- (id)_adamIDFromPluginPayloadData:(id)a0;
- (double)_appCardHeightWithSafeArea;
- (id)_browserViewControllerForInterfaceOrientationMethods;
- (BOOL)_currentPluginIsDT;
- (BOOL)_currentPluginIsPhotos;
- (void)_deferredCommitPayload:(id)a0;
- (void)_deferredCommitSticker:(id)a0;
- (void)_deferredDismissToKeyboardAndFocusEntryView:(id)a0;
- (void)_deferredRequestFullScreenModalForPluginIdentifier:(id)a0 dataSource:(id)a1 preferredContentSize:(struct CGSize { double x0; double x1; })a2;
- (void)_deferredRequestPresentationStyleExpanded:(id)a0;
- (void)_dismissAppCardIfNecessaryAnimatedAndResetFirstResponderPrevention:(BOOL)a0 focusEntryView:(BOOL)a1;
- (void)_dismissAppCardIfNecessaryAnimatedAndResetFirstResponderPrevention:(BOOL)a0 overrideExceptions:(BOOL)a1 focusEntryView:(BOOL)a2;
- (void)_dismissBrowserViewControllerAndReloadInputViews:(BOOL)a0;
- (void)_dismissCompactSwitcherOverKeyboardWithCompletion:(id /* block */)a0;
- (id)_entryViewSnapshotWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_handleOrientation;
- (void)_informDelegateOfUpdatedAppCardHeightAnimated:(BOOL)a0;
- (BOOL)_isAppBrowserFullScreen;
- (BOOL)_isBusinessConversation;
- (BOOL)_isCombinedStickersApp;
- (BOOL)_isiMessageConversation;
- (void)_loadPhotosBrowser;
- (void)_loadPhotosBrowserCollapsingEntryField:(BOOL)a0;
- (void)_openContainingBundleID:(id)a0 applicationService:(id)a1 withURL:(id)a2 pluginID:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)_pluginCanMessageAPI:(id)a0;
- (void)_presentCompactSwitcherOverKeyboardWithCompletion:(id /* block */)a0;
- (void)_presentPluginWithBundleID:(id)a0 sendingTextInputPayload:(id)a1 withPayloadID:(id)a2;
- (void)_presentPluginWithBundleID:(id)a0 sendingTextInputPayload:(id)a1 withPayloadID:(id)a2 style:(unsigned long long)a3;
- (void)_reconfigurePluginDataSourceWithBalloonControllerIfNecessary;
- (void)_setupObserverForLaunchAppExtensionForDebugging;
- (BOOL)_shouldDeferCallbackForInsertingPayload;
- (BOOL)_shouldSendTypingIndicatorDataForPluginIdentifier:(id)a0;
- (BOOL)_shouldShowHandwriting;
- (void)_showFullScreenBrowser:(id)a0;
- (void)_stageStickerWithFileURL:(id)a0 accessibilityLabel:(id)a1;
- (void)_stageStickerWithIdentifier:(id)a0 representations:(id)a1 effectType:(id)a2 name:(id)a3 externalURI:(id)a4 accessibilityLabel:(id)a5 metadata:(id)a6 ckAttributionInfo:(id)a7;
- (void)_startEditingPayload:(id)a0;
- (id)_stickerPickerPlugin;
- (BOOL)_switcherPluginCanMessageAPI;
- (BOOL)_switcherPluginCanMessageAPIOnBehalfOfPlugin:(id)a0;
- (BOOL)_switcherPluginHasTouchTokenForDirectSend;
- (id)activeSendMenuPresentationForAppCardOverseer;
- (void)adjustSupportedInterfaceOrientationForPluginID:(id)a0 requiredPortrait:(BOOL *)a1;
- (void)appCardDidMoveToWindow:(id)a0;
- (void)appCardOverseerCardDidChangeHeight:(double)a0 isBelowKeyboardDetent:(BOOL)a1 isDragging:(BOOL)a2 isGeneratingEndOfDragAnimations:(BOOL)a3;
- (double)appCardOverseerCompactHeightExcludingSafeArea;
- (void)appCardOverseerDidDismissAppCard;
- (void)appCardOverseerDidPresentAppCard;
- (void)appCardOverseerDidRecognizeTouchTracker;
- (void)appCardOverseerDidRequestPresentationSendMenuWithCompletion:(id /* block */)a0;
- (void)appCardOverseerViewStateDidChange:(BOOL)a0;
- (void)appCardOverseerWillDismissAppCard;
- (void)appCardOverseerWillPresentAppCard;
- (void)appMenuViewController:(id)a0 didSelectMenuItem:(id)a1;
- (void)appSelectionInterfaceSelectedItem:(id)a0;
- (id)appTitleOverride;
- (void)applicationWillAddDeactivationReasonNotification:(id)a0;
- (id)balloonPluginForIndexPath:(id)a0;
- (void)browserAppManagerDidSelectPlugin:(id)a0;
- (void)browserTransitionCoordinatorDidCollapseOrDismiss:(id)a0 withReason:(long long)a1;
- (void)browserTransitionCoordinatorDidTransitionOrPresentToFullscreen:(id)a0 withReason:(long long)a1;
- (void)browserTransitionCoordinatorWillCollapseOrDismiss:(id)a0 withReason:(long long)a1;
- (void)browserTransitionCoordinatorWillTransitionOrPresentToFullscreen:(id)a0 withReason:(long long)a1;
- (void)browserWillDismiss;
- (BOOL)canHandleClientActionFromUrl:(id)a0;
- (void)canShowBrowserForPluginIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)chatControllerReceivedKeyboardDidHideNotification:(id)a0;
- (void)chatControllerReceivedKeyboardDidShowNotification:(id)a0;
- (void)chatControllerReceivedKeyboardWillHideNotification:(id)a0;
- (void)chatControllerReceivedKeyboardWillShowNotification:(id)a0;
- (void)checkForTouchInRemoteProcessIfNecessaryWithCompletion:(id /* block */)a0;
- (void)clearBrowserViewControllerIfNecessary;
- (void)commitPayload:(id)a0;
- (void)commitPayload:(id)a0 forPlugin:(id)a1 allowAllCommits:(BOOL)a2 completionHandler:(id /* block */)a3;
- (BOOL)commitPayloadBypassingValidation:(id)a0 forPlugin:(id)a1;
- (void)commitSticker:(id)a0 atScreenCoordinate:(struct CGPoint { double x0; double x1; })a1 scale:(double)a2 rotation:(double)a3 stickerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (void)commitSticker:(id)a0 forPlugin:(id)a1 bypassValidation:(BOOL)a2 stickerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)commitSticker:(id)a0 forPlugin:(id)a1 stickerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)commitSticker:(id)a0 stickerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)commitSticker:(id)a0 withDragTarget:(id)a1 draggedSticker:(id)a2;
- (void)commitStickerBypassingValidation:(id)a0 forPlugin:(id)a1 stickerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)composeRecipientViewDidBecomeFirstResponder:(id)a0;
- (id)conversationForSendMenu;
- (long long)determineSendMenuPresentationStyleCompatibleWithTraitCollection:(id)a0;
- (void)deviceOrientationManager:(id)a0 orientationDidChange:(long long)a1;
- (void)didBeginDraggingSticker:(id)a0;
- (void)didBeginInstallingAppWithBundleIdentifier:(id)a0;
- (void)didSelectPlugin:(id)a0;
- (void)didStageAssetArchive:(id)a0 identifier:(id)a1;
- (void)didTransitionFromOrientation:(long long)a0 toOrientation:(long long)a1;
- (void)dismissAndReloadInputViews:(BOOL)a0;
- (void)dismissAndReloadInputViews:(BOOL)a0 forPlugin:(id)a1;
- (void)dismissAppCardIfNecessary;
- (void)dismissAppCardIfNecessaryAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)dismissAppCardIfNecessaryAnimated:(BOOL)a0 isFocusingKeyboard:(BOOL)a1 completion:(id /* block */)a2;
- (void)dismissAppCardIfNecessaryAnimated:(BOOL)a0 isFocusingKeyboard:(BOOL)a1 overrideExceptions:(BOOL)a2 completion:(id /* block */)a3;
- (void)dismissBrowserViewController;
- (void)dismissEntryViewShelf;
- (void)dismissPlugin;
- (void)dismissPluginAppAfterReplaceAlertInteractedWithIfNeeded;
- (void)dismissStickerPicker:(id /* block */)a0;
- (void)dismissToKeyboard:(BOOL)a0;
- (id)dragControllerTranscriptDelegate;
- (void)eagerUploadCancelIdentifier:(id)a0;
- (void)eagerUploadPayload:(id)a0 identifier:(id)a1 replace:(BOOL)a2;
- (void)entryViewDidChangeSize;
- (void)expandedAppViewController:(id)a0 hasUpdatedLastTouchDate:(id)a1;
- (void)expandedAppViewController:(id)a0 wantsToSwitchToPlugin:(id)a1 datasource:(id)a2;
- (void)expandedAppViewControllerDidTransitionFromOrientation:(long long)a0 toOrientation:(long long)a1;
- (void)expandedAppViewControllerSwitcherDidSelectAppManager:(id)a0;
- (void)expandedAppViewControllerSwitcherDidSelectAppStore:(id)a0;
- (void)expandedAppViewControllerWantsToCollapse:(id)a0;
- (void)forceDismissBrowserWithoutAnimation;
- (void)handleClientActionFromUrl:(id)a0 context:(id)a1;
- (void)handleMoneyActionWithAmount:(id)a0 currencies:(id)a1;
- (void)handleTextInputPayload:(id)a0 withPayloadID:(id)a1 forPlugin:(id)a2;
- (BOOL)handwritingIsDisplayed;
- (void)handwritingPresentationControllerDidHideHandwriting:(id)a0;
- (void)handwritingPresentationControllerDidShowHandwriting:(id)a0;
- (void)handwritingPresentationControllerWillHideHandwriting:(id)a0;
- (BOOL)isEntryViewFirstResponder;
- (BOOL)isHandwritingLandscape;
- (BOOL)isKeyboardSnapshotted;
- (BOOL)isPresentingStickerPicker;
- (void)launchAndShowBrowserForPlugin:(id)a0 dataSource:(id)a1 style:(unsigned long long)a2;
- (void)launchAndShowBrowserForPlugin:(id)a0 dataSource:(id)a1 style:(unsigned long long)a2 presentationConfiguration:(id)a3;
- (id)localizedTitleForClientActionFromUrl:(id)a0 context:(id)a1;
- (void)macShowBrowserForPlugin:(id)a0 dataSource:(id)a1 style:(unsigned long long)a2 presentationConfiguration:(id)a3;
- (void)macShowExpandedBrowser:(id)a0 presentationConfiguration:(id)a1;
- (BOOL)messageEntryShouldHideCaret:(id)a0;
- (void)messageEntryView:(id)a0 didLongPressPlusButton:(id)a1;
- (void)messageEntryView:(id)a0 didSelectPluginAtIndex:(id)a1;
- (void)messageEntryView:(id)a0 didSelectPlusButton:(id)a1;
- (void)messageEntryView:(id)a0 touchCancelForPlusButton:(id)a1;
- (void)messageEntryView:(id)a0 touchDownInsidePlusButton:(id)a1;
- (void)messageEntryView:(id)a0 touchDragEnterForPlusButton:(id)a1;
- (void)messageEntryView:(id)a0 touchDragExitForPlusButton:(id)a1;
- (void)messageEntryView:(id)a0 touchUpOutsidePlusButton:(id)a1;
- (void)messageEntryViewBrowserButtonHit:(id)a0;
- (void)messageEntryViewDidCollapse:(id)a0;
- (void)messageEntryViewDidExpand:(id)a0;
- (void)messageEntryViewHandwritingButtonHit:(id)a0;
- (long long)messageEntryViewHighLightInputButton:(id)a0;
- (void)messageEntryViewInputDidTakeFocus:(id)a0;
- (void)messageEntryViewPhotoButtonTouchCancel:(id)a0;
- (void)messageEntryViewPhotoButtonTouchDown:(id)a0;
- (void)messageEntryViewPhotoButtonTouchUpOutside:(id)a0;
- (void)messageEntryViewSelectedAppMenuItem:(id)a0;
- (BOOL)messageEntryViewShouldResignFirstResponder:(id)a0;
- (BOOL)messageEntryViewShouldVerticallyInsetForPresentedAppCard:(id)a0;
- (void)notifyBrowserViewControllerOfMatchingNewMessages:(id)a0;
- (void)openAppExtensionWithAdamID:(id)a0;
- (void)openURL:(id)a0 applicationIdentifier:(id)a1 pluginID:(id)a2 completionHandler:(id /* block */)a3;
- (void)openURL:(id)a0 pluginID:(id)a1 completionHandler:(id /* block */)a2;
- (id)pluginBundleID;
- (void)prepareForSuspend;
- (void)presentAlertWithTitle:(id)a0 message:(id)a1 buttonTitle:(id)a2 completion:(id /* block */)a3;
- (void)presentAppManager;
- (void)presentAppStoreForAdamID:(id)a0;
- (void)presentAppStoreForURL:(id)a0;
- (void)presentAppStoreForURL:(id)a0 fromSourceApplication:(id)a1;
- (void)presentModernCardForPlugin:(id)a0 dataSource:(id)a1 presentationStyle:(unsigned long long)a2;
- (void)presentPluginWithBundleID:(id)a0 appLaunchPayload:(id)a1;
- (void)presentStickerPickerWithChatItem:(id)a0;
- (void)presentViewControllerWithPluginChatItem:(id)a0 presentationStyle:(unsigned long long)a1;
- (void)presentViewControllerWithPluginChatItem:(id)a0 presentationStyle:(unsigned long long)a1 presentationConfiguration:(id)a2;
- (unsigned long long)presentationStyleInOrientation:(long long)a0 inPopover:(BOOL)a1 forPluginID:(id)a2;
- (void)registerForTextInputPayloadHandling:(BOOL)a0 isGroupChat:(BOOL)a1;
- (void)registerForTextInputPayloadHandlingForSenderHandleID:(id)a0 receiverHandleID:(id)a1;
- (void)requestPhotoBrowserInitFromDraft:(id)a0;
- (void)requestPhotoBrowserToAppendFinalImagesToComposition;
- (void)requestPhotoBrowserToEnumerateSelectedImagesUsingBlock:(id /* block */)a0;
- (void)requestPhotoBrowserToPrepareForDraft;
- (void)requestPhotoBrowserToUnstageImages:(id)a0;
- (void)requestPresentationStyleExpanded:(BOOL)a0;
- (void)requestPresentationStyleExpanded:(BOOL)a0 forPlugin:(id)a1;
- (void)requestPresentationStyleFullScreenModalForPlugin:(id)a0 dataSource:(id)a1 preferredContentSize:(struct CGSize { double x0; double x1; })a2 skipValidation:(BOOL)a3;
- (void)requestPresentationStyleFullScreenModalForPlugin:(id)a0 dataSource:(id)a1 skipValidation:(BOOL)a2;
- (void)requestPresentationStyleFullScreenModalForPlugin:(id)a0 preferredContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)sendMenuDidAppear:(id)a0 presentationStyle:(long long)a1;
- (id)sendMenuOriginatingView;
- (void)sendMenuViewController:(id)a0 didSelectExtensionIdentifier:(id)a1;
- (void)sendMenuViewControllerDidFinishDismissAnimation:(id)a0;
- (void)sendMenuViewControllerRequestDismiss:(id)a0;
- (void)sendMenuViewControllerWillPerformFullScreenDismissAnimation:(id)a0;
- (void)setConversationAndRecipientsForBrowser:(id)a0;
- (void)setEntryViewHidden:(BOOL)a0;
- (void)setInputViewVisible:(BOOL)a0 entryFieldCollapsed:(BOOL)a1 animated:(BOOL)a2;
- (void)setInputViewVisible:(BOOL)a0 entryFieldCollapsed:(BOOL)a1 animated:(BOOL)a2 messageDelegate:(BOOL)a3;
- (void)setLocalUserIsTyping:(BOOL)a0;
- (BOOL)shouldInterfaceBeRestrictedToPortraitForPluginID:(id)a0;
- (BOOL)shouldPresentAppCardInSendMenuWithTraitCollection:(id)a0;
- (BOOL)shouldPreventAppFromDisplayingForBundleIdentifier:(id)a0;
- (BOOL)shouldShowMoneyActionWithAmount:(id)a0 currencies:(id)a1;
- (void)showBrowserForPlugin:(id)a0 dataSource:(id)a1 style:(unsigned long long)a2;
- (void)showBrowserForPlugin:(id)a0 dataSource:(id)a1 style:(unsigned long long)a2 presentationConfiguration:(id)a3;
- (void)showBrowserForPluginIdentifier:(id)a0 style:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)showDTCompose;
- (void)showEntryViewShelf:(id)a0;
- (void)showEntryViewShelf:(id)a0 forPlugin:(id)a1 completion:(id /* block */)a2;
- (void)showFindMyPlugin;
- (void)showFunCamera;
- (void)showFunCamera:(id)a0;
- (void)showHandwritingBrowser;
- (void)showHandwritingBrowserWithExistingPayload:(id)a0;
- (void)showModalViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)showPhotosBrowser;
- (void)showPhotosBrowserCollapsingEntryField:(BOOL)a0;
- (void)showPhotosExtension;
- (void)showPluginWithExtensionIdentifier:(id)a0;
- (void)stageAssetArchive:(id)a0 skipShelf:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)startEditingPayload:(id)a0;
- (void)startEditingPayload:(id)a0 dismiss:(BOOL)a1;
- (void)startEditingPayload:(id)a0 dismiss:(BOOL)a1 forPlugin:(id)a2;
- (void)startEditingPayload:(id)a0 dismiss:(BOOL)a1 forPlugin:(id)a2 completion:(id /* block */)a3;
- (void)startEditingPayloadBypassingValidation:(id)a0 forPlugin:(id)a1 completion:(id /* block */)a2;
- (void)stickerDropAnimationFinished;
- (void)stickerDruidDragStarted;
- (void)stickerPickerWasHidden;
- (void)swipeDismissBrowser;
- (void)switcherViewController:(id)a0 didSelectPluginAtIndexPath:(id)a1;
- (void)switcherViewController:(id)a0 hasUpdatedLastTouchDate:(id)a1;
- (void)switcherViewControllerDidCollapse:(id)a0;
- (void)switcherViewControllerDidFinishSwitching:(id)a0 toViewController:(id)a1;
- (void)switcherViewControllerDidSelectAppManager:(id)a0 shouldRestoreAppSwitcher:(BOOL)a1;
- (void)switcherViewControllerDidSelectAppStore:(id)a0 shouldRestoreAppSwitcher:(BOOL)a1;
- (void)switcherViewControllerWillAppear:(id)a0;
- (void)switcherViewControllerWillDisappear:(id)a0;
- (id)targetConversation;
- (void)unregisterForTextInputPayloadHandling;
- (void)willSendComposition;
- (id)workingDirForDraft;
- (id)workingDraftDirForPluginIdentifier:(id)a0;

@end
