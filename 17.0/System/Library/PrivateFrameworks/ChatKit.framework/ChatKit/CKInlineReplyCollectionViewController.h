@class NSDictionary, CKInlineReplyTransitionProperties;

@interface CKInlineReplyCollectionViewController : CKTranscriptCollectionViewController

@property (retain, nonatomic) NSDictionary *currentFrameMapForNextReload;
@property (retain, nonatomic) NSDictionary *targetFrameMapForAnimateOut;
@property (retain, nonatomic) NSDictionary *currentBalloonOffsetMap;
@property (nonatomic, getter=isAnimatingIn) BOOL animatingIn;
@property (nonatomic, getter=isAnimatingOut) BOOL animatingOut;
@property (retain, nonatomic) CKInlineReplyTransitionProperties *transitionProperties;

+ (id)chatItemsDidChangeNotification;

- (void)didMoveToParentViewController:(id)a0;
- (void).cxx_destruct;
- (BOOL)isModal;
- (BOOL)_canUseOpaqueMask;
- (id)_replyTranscriptBubbleFilterForUserInterfaceStyle:(long long)a0;
- (id)balloonOffsetMapForLayout:(id)a0 resetsOffsetMapAfterUse:(BOOL)a1;
- (void)configureCell:(id)a0 forCKChatItem:(id)a1 atIndexPath:(id)a2;
- (void)fetchEarlierMessagesForConversation:(id /* block */)a0;
- (void)fetchRecentMessagesForConversation:(id /* block */)a0;
- (id)imChatItems;
- (id)initWithConversation:(id)a0 delegate:(id)a1 notifications:(id)a2 balloonMaxWidth:(double)a3 marginInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a4 collectionViewSize:(struct CGSize { double x0; double x1; })a5;
- (BOOL)isInline;
- (void)loadEarlierMessagesForConversation;
- (void)loadRecentMessagesForConversation;
- (id)overrideCurrentFrameMapForLayout:(id)a0;
- (id)overrideTargetFrameMapForLayout:(id)a0;
- (void)performCollectionViewReloadForAnimateOut;
- (void)setCollectionViewCurrentFramesForNextLayout:(id)a0;
- (void)setCollectionViewTargetFrames:(id)a0;
- (void)setScrollAnchor:(double)a0;
- (BOOL)shouldEndShowingEditHistoryOnViewDisappearance;
- (id)transcriptBackgroundColor;

@end
