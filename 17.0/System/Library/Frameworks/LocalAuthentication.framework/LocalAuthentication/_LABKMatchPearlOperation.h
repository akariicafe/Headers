@class BKMatchPearlOperation;
@protocol BKMatchPearlOperationDelegate;

@interface _LABKMatchPearlOperation : _LABKMatchOperation

@property (readonly, nonatomic) BKMatchPearlOperation *_BKMatchPearlOperation;
@property (weak, nonatomic) id<BKMatchPearlOperationDelegate> delegate;

- (id)delegate;
- (void)matchOperation:(id)a0 providedFaceOcclusionInfo:(id)a1;
- (void)matchOperation:(id)a0 providedFaceWUPoseEligibilityInfo:(id)a1;
- (void)matchOperation:(id)a0 providedFeedback:(long long)a1;
- (void)matchOperation:(id)a0 requestedPasscodeShortcutWithReason:(unsigned long long)a1;

@end
