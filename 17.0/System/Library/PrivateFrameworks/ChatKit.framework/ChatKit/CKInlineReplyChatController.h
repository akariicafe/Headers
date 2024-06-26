@class IMMessageItem, NSString, CKChatController, UINavigationBarAppearance, NSDictionary, CKInlineReplyCollectionViewController, CKTranscriptOverlayTransitionContext, UIVisualEffectView;
@protocol CKInlineReplyInteractionDelegate, CKTranscriptOverlayTransitionDelegate;

@interface CKInlineReplyChatController : CKChatController <CKTranscriptOverlayViewControllerProtocol>

@property (readonly, nonatomic) CKInlineReplyCollectionViewController *inlineCollectionViewController;
@property (nonatomic) BOOL isInitialLoad;
@property (nonatomic) BOOL isInitialSizing;
@property (nonatomic) BOOL animatingIn;
@property (nonatomic) BOOL animatingOut;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (copy, nonatomic) NSString *threadIdentifier;
@property (retain, nonatomic) IMMessageItem *threadOriginator;
@property (retain, nonatomic) CKTranscriptOverlayTransitionContext *transitionContext;
@property (nonatomic) BOOL showNavbarKeyline;
@property (retain, nonatomic) UINavigationBarAppearance *navBarAppearance;
@property (weak, nonatomic) CKChatController *parentChatController;
@property (readonly, nonatomic) BOOL wantsBackingTranscriptToIgnoreContentOffsetChanges;
@property (nonatomic) BOOL shouldReloadInsetsForFloatingKeyboard;
@property (readonly, nonatomic) NSDictionary *originatorMessageSummaryInfo;
@property (weak, nonatomic) id<CKTranscriptOverlayTransitionDelegate> transcriptOverlayTransitionDelegate;
@property (weak, nonatomic) id<CKInlineReplyInteractionDelegate> interactionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_gradientReferenceViewClass;
+ (id)stringForContentType:(unsigned char)a0;
+ (Class)transcriptControllerClass;

- (id)inputViewController;
- (id)inputController;
- (id)inputAccessoryView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)becomeFirstResponder;
- (void)viewIsAppearing:(BOOL)a0;
- (void)_doneButtonPressed;
- (void)reloadInputViews;
- (void)tapGestureRecognized:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })calculateTranscriptMarginInsets;
- (BOOL)isModal;
- (double)throwAnimationFinalFrameOffset:(id)a0;
- (void)_saveDraftState;
- (void)_animateIn:(BOOL)a0;
- (void)_animateOut;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentInsetForSendAnimation;
- (id)_defaultTranscriptNavBarAppearance;
- (void)_didSendCompositionInConversation:(id)a0;
- (id)_imMessageForIMMessageItem:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_initialFrameForCollectionView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_initialFrameForGradientReferenceView;
- (id)_navigationBarAppearanceWithKeyline:(BOOL)a0;
- (void)_requestDismissal;
- (void)_restoreDraftState;
- (void)_setInitialScrollPositionIfNecessary;
- (void)_updateNavigationUI;
- (id)_visibleGUIDs;
- (double)accessoryViewHeight;
- (void)appCardDidChangeEntryViewAlignmentHeight:(double)a0 animated:(BOOL)a1;
- (void)applyInitialContextToCollectionViewIfNeeded;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })calculateTranscriptSafeAreaInsets;
- (void)cleanUpDarkEffectStyle;
- (void)collectMetricsForSending:(id)a0;
- (struct CGSize { double x0; double x1; })contentSizeForPinning;
- (void)dismissController;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })gradientFrameWithInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)initWithConversation:(id)a0 threadIdentifier:(id)a1 threadOriginator:(id)a2 transitionContext:(id)a3 originatorMessageSummaryInfo:(id)a4 parentChatController:(id)a5;
- (BOOL)isInline;
- (BOOL)isUnanimated;
- (void)messageEntryViewDidBeginEditingNotAlreadyActive:(id)a0;
- (BOOL)messageEntryViewWidth:(double *)a0 andOffset:(double *)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })navigationBarInsetsWithoutPalette;
- (id)parentViewControllerForPluginViewControllerInMessageEntryView:(id)a0;
- (void)reloadEntryViewIfNeeded;
- (void)sendMessage:(id)a0 forConversation:(id)a1 newComposition:(BOOL)a2;
- (void)sendMessage:(id)a0 forConversation:(id)a1 onService:(id)a2 newComposition:(BOOL)a3;
- (void)setIsShowingPreview:(BOOL)a0;
- (void)setTargetFirstResponder:(long long)a0;
- (void)setUpStyleForDarkEffect;
- (BOOL)shouldListParticipantsInTitle;
- (BOOL)shouldShowDoneButton;
- (void)stageAssetArchive:(id)a0 skipShelf:(BOOL)a1 completionHandler:(id /* block */)a2;
- (long long)targetFirstResponder;
- (double)throwAnimationManagerTopHeaderHeight:(id)a0;
- (BOOL)throwAnimationUsesAnimatedReloadForMessages:(id)a0;
- (void)transcriptCollectionViewController:(id)a0 collectionViewContentSizeDidChange:(struct CGSize { double x0; double x1; })a1;
- (void)transcriptCollectionViewController:(id)a0 didScroll:(struct CGPoint { double x0; double x1; })a1;
- (double)transcriptCollectionViewController:(id)a0 targetAlphaForChatItem:(id)a1;
- (void)transcriptCollectionViewControllerChatItemsDidChange:(id)a0;
- (BOOL)transcriptCollectionViewControllerIsPresentedInModalInlineReply:(id)a0;
- (void)transcriptCollectionViewControllerRestingStateDidChange:(id)a0;
- (void)updateActiveEntryViewPositioningGuide;
- (void)updateScrollGeometry;
- (double)visibleInputViewHeight;

@end
