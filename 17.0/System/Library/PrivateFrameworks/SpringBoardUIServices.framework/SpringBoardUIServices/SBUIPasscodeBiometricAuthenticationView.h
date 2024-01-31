@class NSString, PKGlyphView, UIImageView, UIButton, SBUIPasscodePillButton, SBUIButton, UILayoutGuide, NSLayoutConstraint, UILabel;
@protocol SBUIPasscodeBiometricAuthenticationViewLayoutDelegate, SBUIPasscodeBiometricAuthenticationViewDelegate;

@interface SBUIPasscodeBiometricAuthenticationView : SBUIInteractionForwardingView

@property (copy, nonatomic, setter=_setTouchIDReason:) NSString *touchIDReason;
@property (copy, nonatomic, setter=_setFaceIDReason:) NSString *faceIDReason;
@property (copy, nonatomic, setter=_setFaceIDReason2:) NSString *faceIDReasonLine2;
@property (retain, nonatomic) SBUIButton *touchIDUsePasscodeButton;
@property (retain, nonatomic) SBUIPasscodePillButton *faceIDUsePasscodeButton;
@property (retain, nonatomic) PKGlyphView *touchIDGlyphView;
@property (retain, nonatomic) SBUIButton *emergencyCallButton;
@property (retain, nonatomic) SBUIButton *cancelButton;
@property (retain, nonatomic) UIButton *backgroundCancelButton;
@property (retain, nonatomic) UIButton *invisibleUsePasscodeButton;
@property (retain, nonatomic) UILabel *touchIDReasonLabel;
@property (retain, nonatomic) UILabel *faceIDLabel;
@property (retain, nonatomic) UILabel *faceIDReasonLabel;
@property (retain, nonatomic) UIImageView *faceIDLockIcon;
@property (retain, nonatomic) UILayoutGuide *faceIDLabelAndReasonHelperGuide;
@property (retain, nonatomic) UILayoutGuide *faceIDLabelAndReasonLayoutGuide;
@property (retain, nonatomic) UILayoutGuide *touchIDGlyphLayoutGuide;
@property (retain, nonatomic) UILayoutGuide *cancelButtonLayoutGuide;
@property (retain, nonatomic) NSLayoutConstraint *faceIDLabelFaceIDReasonBaselineConstraint;
@property (nonatomic) unsigned long long type;
@property (weak, nonatomic) id<SBUIPasscodeBiometricAuthenticationViewLayoutDelegate> layoutDelegate;
@property (weak, nonatomic) id<SBUIPasscodeBiometricAuthenticationViewDelegate> delegate;
@property (copy, nonatomic) NSString *unlockDestination;
@property (nonatomic) BOOL showsEmergencyCallButton;
@property (nonatomic) BOOL showsCancelButton;
@property (nonatomic) BOOL ancillaryButtonsVisible;
@property (nonatomic) BOOL faceIDUsePasscodeButtonVisible;
@property (nonatomic) BOOL showsLockIconForFaceID;
@property (copy, nonatomic) NSString *overrideFaceIDReason;
@property (copy, nonatomic) NSString *passcodeButtonTitle;

- (void)_updateConstraints;
- (void)_updateSubviews;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_cancelButtonHit;
- (void)_emergencyCallButtonHit;
- (void)_layoutAuthReasonLabel:(id)a0;
- (double)_leadingForFaceIDReason;
- (void)_noteContentSizeCategoryDidChange;
- (void)_setFaceIDReasonLine2:(id)a0;
- (void)_updateReasonTextIfPossible;
- (void)_usePasscodeButtonHit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layoutDelegate:(id)a1;
- (void)setAncillaryButtonsVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)setGlyphViewState:(long long)a0;
- (void)setGlyphViewState:(long long)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
