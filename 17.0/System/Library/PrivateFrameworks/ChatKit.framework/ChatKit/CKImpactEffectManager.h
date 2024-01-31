@class UIWindow, CKBalloonView, NSIndexSet, CABackdropLayer, UIScrollView, CKAudioController, NSString;
@protocol CKSendAnimationManagerDelegate, CKSendAnimationBalloonProvider;

@interface CKImpactEffectManager : NSObject <CKAudioControllerDelegate, CKSendAnimationManager>

@property (retain, nonatomic) UIWindow *expressiveSendAnimationWindow;
@property (retain, nonatomic) CKBalloonView *expressiveSendAnimationBalloon;
@property (retain, nonatomic) CKBalloonView *originalBalloonView;
@property (retain, nonatomic) UIScrollView *expressiveSendScrollView;
@property (retain, nonatomic) CABackdropLayer *expressiveSendAnimationBackdrop;
@property (retain, nonatomic) CKAudioController *audioController;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) NSIndexSet *undoSendChatItems;
@property (weak, nonatomic) id<CKSendAnimationManagerDelegate> delegate;
@property (readonly, nonatomic) NSString *animatingIdentifier;
@property (nonatomic) BOOL isDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CKSendAnimationManagerDelegate> sendAnimationManagerDelegate;
@property (weak, nonatomic) id<CKSendAnimationBalloonProvider> sendAnimationBalloonProvider;

+ (id)effectIdentifiers;
+ (BOOL)identifierIsAnimatedImpactEffect:(id)a0;
+ (BOOL)identifierIsValidImpactEffect:(id)a0;
+ (BOOL)identifierShouldPlayInWindow:(id)a0;
+ (id)localizedEffectNameForEffectWithIdentifier:(id)a0;
+ (id)maskingStringForID:(id)a0;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_audioSessionOptionsWillChange:(id)a0;
- (void)_animateLastMessage:(id)a0 withEffectIdentifier:(id)a1 beginAnimationFromTranscriptPresentedState:(BOOL)a2;
- (void)_cleanupExpressiveSendComponents;
- (void)_renderEffectInView;
- (void)_renderEffectInWindow;
- (id)_sendAnimationContextForIdentifier:(id)a0 message:(id)a1 isSender:(BOOL)a2 beginAnimationFromTranscriptPresentedState:(BOOL)a3;
- (void)_sizeAnimationWindow;
- (void)_visibleCells:(id *)a0 aboveItem:(id)a1;
- (void)animateMessages:(id)a0;
- (void)animateMessages:(id)a0 withEffectIdentifier:(id)a1 beginAnimationFromTranscriptPresentedState:(BOOL)a2;
- (void)animationDidFinishWithContext:(id)a0;
- (void)animationWillBeginWithContext:(id)a0;
- (id)cloneBalloonForAnimationWithChatItem:(id)a0;
- (void)matchScrollViewOffset:(id)a0;
- (void)playSoundForEffectIdentifier:(id)a0;
- (void)playSoundForPopAnimation;
- (void)playUndoSendAnimationForChatItem:(id)a0;
- (void)popAnimationDidBegin;
- (void)setupAudioPlayerWithURL:(id)a0;
- (void)stopAllEffects;
- (void)stopPlayingSound;

@end
