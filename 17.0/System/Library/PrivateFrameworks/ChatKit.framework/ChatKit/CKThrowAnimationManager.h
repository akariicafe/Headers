@class UIView, NSString, CKTranscriptUnavailabilityIndicatorCell, CKSendAnimationContext, UIImageView, CKTranscriptTypingIndicatorCell, CKTranscriptNotifyAnywayButtonCell, CKChatControllerDummyAnimator;
@protocol CKSendAnimationBalloonProvider, CKThrowAnimationManagerDelegate, CKSendAnimationManagerDelegate;

@interface CKThrowAnimationManager : NSObject <CKSendAnimationManager, CKQuickReplyAnimationProvider>

@property (retain, nonatomic) CKSendAnimationContext *currentContext;
@property (retain, nonatomic) UIView *sendAnimationWindow;
@property (retain, nonatomic) CKChatControllerDummyAnimator *animator;
@property (retain, nonatomic) CKTranscriptTypingIndicatorCell *fakeTypingIndicatorCell;
@property (retain, nonatomic) CKTranscriptUnavailabilityIndicatorCell *fakeUnavailabilityIndicatorCell;
@property (retain, nonatomic) CKTranscriptNotifyAnywayButtonCell *fakeNotifyAnywayButtonCell;
@property (weak, nonatomic) id<CKThrowAnimationManagerDelegate> throwManagerDelegate;
@property (retain, nonatomic) UIView *quickReplySnapshot;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } audioMessageSourceRect;
@property (retain, nonatomic) UIImageView *audioRecordingPillViewSnapshot;
@property (weak, nonatomic) id<CKSendAnimationManagerDelegate> sendAnimationManagerDelegate;
@property (weak, nonatomic) id<CKSendAnimationBalloonProvider> sendAnimationBalloonProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)_removeAllAnimations;
- (void).cxx_destruct;
- (id)_collectionViewController;
- (double)_changeInEntryViewHeight;
- (id)_entryView;
- (void)_hideAddedChatItems;
- (long long)_indexOfLastChatItemThatWillNotStickToTheBottom:(id)a0;
- (unsigned long long)_indexOfLastVisibleChatItemForChatItems:(id)a0;
- (void)_prepareToAnimateMessages:(id)a0;
- (void)_removeFakeTypingIndicatorIfNecessary;
- (void)_sendMessageAndPinTranscript;
- (void)_setupFakeTypingAndUnavailabilityIndicatorsIfNecessary;
- (void)_setupThrowBalloonViews;
- (void)_setupThrowFrames;
- (void)_shiftFakeTypingIndicator;
- (void)_snapshotLiveBubbleIfNecessary;
- (BOOL)_transcriptWillShiftDueToThrowAnimation;
- (void)animateMessages:(id)a0;
- (void)animateQuickReplyMessages:(id)a0;
- (void)animationDidFinishWithContext:(id)a0;
- (void)animationWillBeginWithContext:(id)a0;
- (id)lastVisibleCellOfType:(Class)a0 inCollectionView:(id)a1;
- (void)playSoundForPopAnimation;
- (void)popAnimationDidBegin;
- (double)scrollViewOffsetForBottomAligningChatItemAtIndex:(long long)a0;

@end
