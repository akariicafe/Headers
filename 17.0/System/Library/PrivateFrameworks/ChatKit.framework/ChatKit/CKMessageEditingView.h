@class CKComposition, NSString, CKMessageEditingBalloonView, UIView, UIButton;
@protocol CKMessageEditingViewDelegate;

@interface CKMessageEditingView : UIView <CKMessageEditingBalloonViewDelegate>

@property (retain, nonatomic) CKMessageEditingBalloonView *messageEditingBalloonView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *rejectButton;
@property (nonatomic) long long messageEditingViewState;
@property (retain, nonatomic) CKComposition *originalComposition;
@property (readonly, nonatomic) CKComposition *currentComposition;
@property (readonly, nonatomic) UIView *balloonViewForAlignment;
@property (readonly, nonatomic) BOOL firstLayoutPassCompleted;
@property (weak, nonatomic) id<CKMessageEditingViewDelegate> messageEditingViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applyGrammarCheckingIndication;
- (id)init;
- (void)traitCollectionDidChange:(id)a0;
- (id)keyCommands;
- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_confirmButtonSelected:(id)a0;
- (void)_rejectButtonSelected:(id)a0;
- (void)_updateTextFieldWithOriginalComposition;
- (void)messageEditingBalloonViewContentDidChange:(id)a0;
- (void)resetMessageToOriginalContent;
- (id)styledAttributedStringFromString:(id)a0;
- (void)underlineWithProofreadingInfo:(id)a0;

@end
