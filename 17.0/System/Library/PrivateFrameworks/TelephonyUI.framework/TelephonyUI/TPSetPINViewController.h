@class UIView, NSString, UILabel, TPPasscodeView, TPSimpleNumberPad;
@protocol TPSetPINViewControllerDelegate;

@interface TPSetPINViewController : UIViewController <TPSimpleNumberPadDelegate>

@property int initialState;
@property (nonatomic) int state;
@property unsigned int minPINLength;
@property unsigned int maxPINLength;
@property BOOL confirmPIN;
@property (retain) UILabel *statusLabel;
@property (retain) TPPasscodeView *passcodeView;
@property (retain) TPSimpleNumberPad *numberPad;
@property (retain) NSString *oldPIN;
@property (retain) NSString *unconfirmedPIN;
@property id<TPSetPINViewControllerDelegate> delegate;
@property (retain, nonatomic) NSString *promptTextForOldPIN;
@property (retain, nonatomic) NSString *promptTextForNewPIN;
@property (retain, nonatomic) NSString *promptTextForConfirmingNewPIN;
@property (retain, nonatomic) NSString *promptTextForSavingPIN;
@property (retain) UIView *customBackgroundView;

- (BOOL)wantsFullScreenLayout;
- (id)init;
- (void)dealloc;
- (void)loadView;
- (void).cxx_destruct;
- (void)_doneButtonTapped;
- (void)_cancelButtonTapped;
- (void)_updateStatusLabel;
- (id)_initForMinLength:(unsigned int)a0 maxLength:(unsigned int)a1 confirmPIN:(BOOL)a2;
- (void)_updateDeleteAllowed;
- (void)_updateNavBarButtons;
- (void)_updateUIForStateChange;
- (id)initForChangePINWithMinLength:(unsigned int)a0 maxLength:(unsigned int)a1 confirmPIN:(BOOL)a2;
- (id)initForNewPINWithMinLength:(unsigned int)a0 maxLength:(unsigned int)a1 confirmPIN:(BOOL)a2;
- (double)numberPadTopConstraintConstant;
- (void)resetWithErrorPrompt:(id)a0;
- (void)resetWithErrorPrompt:(id)a0 title:(id)a1;
- (void)simpleNumberPad:(id)a0 buttonPressedWithCharacter:(id)a1;
- (void)simpleNumberPadDeletePressed:(id)a0;

@end
