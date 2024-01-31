@class NSString, CKPinnedConversationRichLinkActivityItem, LPLinkView;

@interface CKPinnedConversationRichLinkBubble : CKPinnedConversationTailedActivityItemView <LPLinkViewDelegate> {
    double _pillCornerRadius;
    long long _activityItemViewContentScale;
}

@property (retain, nonatomic) LPLinkView *linkView;
@property (readonly, nonatomic) CKPinnedConversationRichLinkActivityItem *richLinkActivityItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contentSizeCategoryDidChange:(id)a0;
- (void).cxx_destruct;
- (void)linkViewNeedsResize:(id)a0;
- (double)pillCornerRadius;
- (void)_updateLinkMetadata;
- (void)_updatePillCornerRadius;
- (long long)activityItemViewContentScale;
- (long long)contentViewContentMode;
- (double)contentViewHorizontalInsetForPillCornerRadius;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentViewPadding;
- (id)initWithRichLinkActivityItem:(id)a0;
- (void)setActivityItem:(id)a0;
- (void)setActivityItemViewContentScale:(long long)a0;
- (BOOL)supportsActivityItemViewContentScale;
- (BOOL)supportsAlignmentWithOriginationSubAvatarFrame;

@end
