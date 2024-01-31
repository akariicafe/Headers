@class NSCountedSet, NSString, CKTranscriptBalloonCell, CABasicAnimation;

@interface CKTranscriptCollectionView : CKEditableCollectionView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) CKTranscriptBalloonCell *swipeTargetBalloonCell;
@property (retain, nonatomic) NSCountedSet *transcriptDynamicsDisabledReasons;
@property (nonatomic) BOOL ignoresContentOffsetChanges;
@property (nonatomic) BOOL ignoresReloadDataRequests;
@property (nonatomic) BOOL ignoresScrollToBottom;
@property (readonly, nonatomic) BOOL dynamicsDisabled;
@property (retain, nonatomic) CABasicAnimation *transcriptCustomScrollAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (unsigned long long)_edgesPropagatingSafeAreaInsetsToSubviews;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)reloadData;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_customScrollAnimation;
- (void)__ck_scrollToBottom:(BOOL)a0;
- (void)_updateScrollingLockStateForRecognizer:(id)a0;
- (void)beginDisablingTranscriptDynamicsForReason:(id)a0;
- (void)endDisablingTranscriptDynamicsForReason:(id)a0;
- (id)indexPathForItemAtPoint:(struct CGPoint { double x0; double x1; })a0 inSection:(long long)a1;
- (void)swipeToReplyGestureHandler:(id)a0;

@end
