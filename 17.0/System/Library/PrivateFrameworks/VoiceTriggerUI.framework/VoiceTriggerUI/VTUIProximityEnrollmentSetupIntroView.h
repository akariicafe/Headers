@class VTUIButton, NSString, NSArray, SSRVoiceProfileManager, UIImageView, VTUIProximityContainerView, UIButton, UITextView, UILabel, VTUIStyle;
@protocol VTUIEnrollmentDelegate;

@interface VTUIProximityEnrollmentSetupIntroView : VTUIProximityView <UITextViewDelegate> {
    UIImageView *_orbImage;
    VTUIProximityContainerView *_containerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UITextView *_termsAndConds;
    VTUIStyle *_vtStyle;
    SSRVoiceProfileManager *_voiceProfileMgr;
    NSString *_languageCode;
    BOOL _supportsCompactTrigger;
}

@property (retain, nonatomic) NSArray *viewConstraints;
@property (weak, nonatomic) id<VTUIEnrollmentDelegate> enrollmentDelegate;
@property (readonly, nonatomic) VTUIButton *setupButton;
@property (readonly, nonatomic) VTUIButton *notNowButton;
@property (retain, nonatomic) UIButton *dismissButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)_setupContent;
- (void)_setupPhoneLandscapeConstraints;
- (void)_setupConstraintsToSize:(struct CGSize { double x0; double x1; })a0;
- (void)_setupPortraitConstraints;
- (void)_setupTermsAndConditions;

@end
