@class NSString, NSArray, IMTranscriptPluginChatItem;

@interface CKTranscriptPluginChatItem : CKMessagePartChatItem

@property (retain, nonatomic) IMTranscriptPluginChatItem *imTranscriptPluginChatItem;
@property (readonly, nonatomic) BOOL isHandwriting;
@property (retain, nonatomic) NSString *conversationID;
@property (retain, nonatomic) NSArray *recipients;
@property (nonatomic) BOOL isBusiness;
@property (readonly, nonatomic) BOOL wantsTranscriptGroupMonograms;
@property (readonly, nonatomic) BOOL wantsBalloonGradient;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BOOL wantsOutline;
@property (readonly, nonatomic) IMTranscriptPluginChatItem *IMChatItem;
@property (readonly, nonatomic) BOOL isPlayed;
@property (readonly, nonatomic) BOOL isSaved;
@property (nonatomic) BOOL isAppearing;

+ (double)resultingMaxWidthWithBalloonMaxWidth:(double)a0 fullMaxWidth:(double)a1 transcriptTraitCollection:(id)a2;
+ (id)wolfHiddenSWYUIClientBundleIDs;

- (id)sender;
- (unsigned long long)layoutType;
- (id)message;
- (Class)cellClass;
- (id)contentViewControllerForContext:(id)a0;
- (id)dragItemProvider;
- (id)contact;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (BOOL)canForward;
- (BOOL)canCopy;
- (void).cxx_destruct;
- (id)menuTitle;
- (BOOL)shouldSnapshot;
- (id)cellIdentifier;
- (void)_cacheConversationID:(id)a0 recipients:(id)a1 isBusiness:(BOOL)a2;
- (void)_configureBalloonController:(id)a0 conversationID:(id)a1 recipients:(id)a2 isBusiness:(BOOL)a3;
- (id)balloonControllerForContext:(id)a0;
- (Class)balloonViewClass;
- (BOOL)canInlineReply;
- (BOOL)canPerformQuickAction;
- (id)compositionWithContext:(id)a0;
- (void)configureWithConversationID:(id)a0 recipients:(id)a1 isBusiness:(BOOL)a2 context:(id)a3;
- (id)extensibleViewControllerForContext:(id)a0;
- (id)extensibleViewForContext:(id)a0;
- (id)initWithIMChatItem:(id)a0 maxWidth:(double)a1;
- (id)layoutItemSpacingWithEnvironment:(id)a0 datasourceItemIndex:(long long)a1 allDatasourceItems:(id)a2 supplementryItems:(id)a3;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (id)loadTranscriptDrawerText;
- (void)performHostAppResumeWithContext:(id)a0;
- (id)pluginDisplayContainerForContext:(id)a0;
- (void)releaseBalloonControllerIfNeededForContext:(id)a0;
- (void)relinquishBalloonControllerForContext:(id)a0;
- (id)rtfDocumentItemsWithFormatString:(id)a0 selectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)shouldAllowExtraTallHeightForBundleID:(id)a0;
- (id)snapshotGUIDForPluginPayload:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })textAlignmentInsets;
- (char)transcriptOrientation;

@end
