@class CKScheduledUpdater, NSTimer, NSDate, NSExtensionContext, CKFullScreenBalloonViewControllerNotification, STLockoutViewController, NSString, CKRaiseGesture, CKMessageEntryViewController, CKMessageEntryView;
@protocol CKNotificationChatControllerDelegate;

@interface CKNotificationChatController : CKCoreChatController <UITextInputPayloadDelegate, CKMessageEntryViewDelegate, CKMessageEntryViewInputDelegate>

@property (retain, nonatomic) CKMessageEntryViewController *entryViewController;
@property (retain, nonatomic) CKScheduledUpdater *typingUpdater;
@property (retain, nonatomic) CKRaiseGesture *raiseGesture;
@property (nonatomic) BOOL shouldAllowReplyFromLockScreen;
@property (retain, nonatomic) NSDate *notificationViewWillAppearDate;
@property (retain, nonatomic) NSTimer *notificationViewDismissalTimer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastKnownKeyboardFrame;
@property (nonatomic) BOOL allowedByScreenTime;
@property (retain, nonatomic) STLockoutViewController *lockoutViewController;
@property (readonly, nonatomic) CKMessageEntryView *entryView;
@property (weak, nonatomic) NSExtensionContext *urlOpenContext;
@property (weak, nonatomic) id<CKNotificationChatControllerDelegate> delegate;
@property (weak, nonatomic) CKFullScreenBalloonViewControllerNotification *notificationFullScreenBalloonController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)inputAccessoryViewController;
- (id)inputAccessoryView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewLayoutMarginsDidChange;
- (void)dealloc;
- (BOOL)inputAccessoryViewControllerEnabled;
- (void)setSendingMessage:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)becomeFirstResponder;
- (void)handlePayload:(id)a0 withPayloadId:(id)a1;
- (void)setConversation:(id)a0;
- (void)fullScreenBalloonViewController:(id)a0 willDisappearWithSendAnimation:(BOOL)a1;
- (double)balloonMaxWidth;
- (void)messageEntryViewPhotoButtonHit:(id)a0;
- (void)setLocalUserIsComposing:(BOOL)a0 withPluginBundleID:(id)a1 typingIndicatorData:(id)a2;
- (void)__raiseGestureRecognized:(id)a0;
- (void)_allowedByScreenTimeChanged:(id)a0;
- (BOOL)_deviceIsPasscodeLocked;
- (void)_dismissFullScreenBubbleViewControllerAnimated:(BOOL)a0 withSendAnimation:(BOOL)a1 completion:(id /* block */)a2;
- (id)_fullScreenBalloonViewControllerWithChatItem:(id)a0;
- (void)_handleKeyboardDidChangeFrameNotification:(id)a0;
- (void)_launchMessagesForInputMode:(id)a0;
- (double)_maxEntryViewHeight;
- (id)_menuTitleForChatItem:(id)a0;
- (void)_messageReceivedInCurrentTranscript:(id)a0;
- (void)_openMessagesForChat:(id)a0;
- (void)_raiseToListenSettingChanged:(id)a0;
- (void)_setConversationDeferredSetup;
- (void)_setEntryViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animated:(BOOL)a1;
- (void)_setupShouldShowReplyFromLockScreen;
- (void)_updateEntryViewFrameIfNeeded:(BOOL)a0;
- (void)_updateTitleAnimated:(BOOL)a0;
- (void)backgroundViewTapGestureRecognized:(id)a0;
- (BOOL)constrainToPresentingVCBounds;
- (BOOL)forceWindowedPresentation;
- (void)fullScreenBalloonViewController:(id)a0 didAppearAnimated:(BOOL)a1;
- (void)fullScreenBalloonViewController:(id)a0 sendMessageAcknowledgment:(long long)a1 forChatItem:(id)a2;
- (void)fullScreenBalloonViewController:(id)a0 verticallyScrollTranscriptByAmount:(double)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)fullScreenBalloonViewController:(id)a0 willAppearAnimated:(BOOL)a1;
- (void)fullScreenBalloonViewControllerDidDisappear:(id)a0;
- (void)fullScreenBalloonViewControllerHandleDismissTap:(id)a0;
- (id)initWithConversation:(id)a0 entryViewTraitCollection:(id)a1;
- (BOOL)isSafeToMarkAsRead;
- (id)launchURLForInputMode:(id)a0;
- (Class)lockoutViewControllerClass;
- (BOOL)messageEntryShouldHideCaret:(id)a0;
- (void)messageEntryView:(id)a0 didInsertPluginPayload:(id)a1;
- (void)messageEntryView:(id)a0 didLongPressPlusButton:(id)a1;
- (void)messageEntryView:(id)a0 didMoveToWindow:(id)a1;
- (void)messageEntryView:(id)a0 didSelectPlusButton:(id)a1;
- (void)messageEntryView:(id)a0 didTapMediaObject:(id)a1;
- (BOOL)messageEntryView:(id)a0 shouldInsertMediaObjects:(id)a1;
- (id)messageEntryViewActiveSendMenuPresentation:(id)a0;
- (void)messageEntryViewBrowserButtonHit:(id)a0;
- (void)messageEntryViewDidBeginEditingNotAlreadyActive:(id)a0;
- (void)messageEntryViewDidChange:(id)a0 isTextChange:(BOOL)a1 isShelfChange:(BOOL)a2;
- (void)messageEntryViewDidEndEditing:(id)a0;
- (void)messageEntryViewHandwritingButtonHit:(id)a0;
- (long long)messageEntryViewHighLightInputButton:(id)a0;
- (void)messageEntryViewInputDidTakeFocus:(id)a0;
- (double)messageEntryViewMaxHeight:(id)a0;
- (struct CGSize { double x0; double x1; })messageEntryViewMaxShelfPluginViewSize:(id)a0;
- (void)messageEntryViewPlusButtonHit:(id)a0;
- (void)messageEntryViewRaiseGestureAutoSend:(id)a0;
- (void)messageEntryViewRecordingDidChange:(id)a0;
- (void)messageEntryViewSafeAreaInsetsDidChange:(id)a0;
- (void)messageEntryViewSendButtonHit:(id)a0;
- (void)messageEntryViewSendButtonHitWhileDisabled:(id)a0;
- (BOOL)messageEntryViewShouldBeginEditing:(id)a0;
- (BOOL)messageEntryViewShouldVerticallyInsetForPresentedAppCard:(id)a0;
- (BOOL)messageEntryViewWidth:(double *)a0 andOffset:(double *)a1;
- (id)parentViewControllerForPluginViewControllerInMessageEntryView:(id)a0;
- (BOOL)pluginButtonsEnabled;
- (BOOL)preserveModalPresentationStyle;
- (id)progressBar;
- (void)raiseGestureRecognized:(id)a0;
- (void)registerForTextInputPayloadHandling;
- (void)sendComposition:(id)a0;
- (void)sendCurrentLocationMessage:(id)a0;
- (void)setEntryView:(id)a0;
- (BOOL)shouldShowEntryView;
- (void)showFullScreenAcknowledgmentPickerForChatItem:(id)a0;
- (void)transcriptCollectionViewController:(id)a0 balloonView:(id)a1 longPressedForItemWithIndexPath:(id)a2;
- (void)transcriptCollectionViewController:(id)a0 balloonView:(id)a1 tappedForChatItem:(id)a2;
- (void)transcriptCollectionViewController:(id)a0 collectionViewContentSizeDidChange:(struct CGSize { double x0; double x1; })a1;
- (void)transcriptCollectionViewControllerChatItemsDidChange:(id)a0;
- (void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)a0;
- (void)unregisterForTextInputPayloadHandling;
- (void)updateRaiseGesture;
- (void)updateTyping;
- (BOOL)wantsReplyButton;
- (BOOL)wantsWindowedPresentation;

@end
