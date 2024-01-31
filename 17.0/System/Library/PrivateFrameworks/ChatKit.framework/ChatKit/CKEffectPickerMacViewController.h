@class UILabel, CKChatControllerDummyAnimator, CKFullScreenEffectManager, UIVisualEffectView, UIViewController, UIButton, UIView, NSLayoutConstraint, NSString, CKMessageEntryView, CKEffectPreviewCollectionViewController, CKComposition, UIVibrancyEffect, CKEffectSelectionViewController, CKBalloonView;
@protocol CKEffectPickerViewControllerDelegate;

@interface CKEffectPickerMacViewController : UIViewController <CKEffectPreviewCollectionViewControllerDelegate, CKEffectSelectionViewControllerDelegate, CKEffectPickerViewControllerProtocol>

@property (retain, nonatomic) CKEffectSelectionViewController *selectionViewController;
@property (retain, nonatomic) CKChatControllerDummyAnimator *dummyAnimator;
@property (retain, nonatomic) UIView *balloonContainer;
@property (retain, nonatomic) CKBalloonView *balloonView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIVisualEffectView *titleContainerView;
@property (retain, nonatomic) UIVibrancyEffect *titleVibrancyEffect;
@property (retain, nonatomic) UIView *sendButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) CKComposition *composition;
@property (nonatomic) struct CGPoint { double x; double y; } balloonViewOrigin;
@property (nonatomic) char color;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *balloonWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *balloonHeightConstraint;
@property (nonatomic) BOOL hasSelectedDefaultEffect;
@property (retain, nonatomic) CKFullScreenEffectManager *fsem;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL showingInStandAloneWindow;
@property (retain, nonatomic) NSString *effectIdentifier;
@property (retain, nonatomic) UIViewController *wolfEffectSelectionVC;
@property (weak, nonatomic) UIViewController *effectsPresentingViewController;
@property (weak, nonatomic) UIView *effectsPresentingView;
@property (readonly, weak, nonatomic) CKMessageEntryView *entryView;
@property (weak, nonatomic) id<CKEffectPickerViewControllerDelegate> delegate;
@property (retain, nonatomic) UIView *effectPreviewOverlayView;
@property (retain, nonatomic) CKEffectPreviewCollectionViewController *effectCollectionViewController;
@property (nonatomic) BOOL isInlineReply;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)keyCommands;
- (void).cxx_destruct;
- (BOOL)effectShouldDisplayOverBalloon:(id)a0;
- (void)showCloseButton;
- (void)placeSendButton;
- (id)_defaultSendAnimationContextForAnimationPreview;
- (void)closeButtonPressed:(id)a0;
- (void)createBalloonView;
- (id)createSendButton;
- (void)createTranscriptBlurBackground;
- (void)dismissViewControllerKeepingSideMount:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)effectCollectionViewController:(id)a0 willDisplayEffect:(id)a1;
- (BOOL)effectSelectionViewController:(id)a0 didSelectEffectWithIdentifier:(id)a1;
- (void)handleTouchMoved:(struct CGPoint { double x0; double x1; })a0;
- (void)handleTouchUp:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithComposition:(id)a0 balloonViewOrigin:(struct CGPoint { double x0; double x1; })a1 color:(char)a2;
- (id)initWithEntryView:(id)a0 balloonViewOrigin:(struct CGPoint { double x0; double x1; })a1 color:(char)a2 isInlineReply:(BOOL)a3;
- (void)keyCommandReturn:(id)a0;
- (void)placeBalloonContainer:(id)a0;
- (void)presentPicker;
- (void)setCloseButtonYPosition:(double)a0;
- (void)startAnimationPreviewForIdentifier:(id)a0;
- (void)touchUpInsideSendButton:(id)a0;
- (void)updateColor:(char)a0;
- (void)updateHintTransition:(double)a0;

@end
