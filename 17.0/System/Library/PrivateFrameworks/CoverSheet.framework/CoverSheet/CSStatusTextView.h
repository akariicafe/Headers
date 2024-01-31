@class NSString, NSArray, SBUILegibilityLabel, _UILegibilitySettings;

@interface CSStatusTextView : UIView <SBUILegibility> {
    SBUILegibilityLabel *_internalLegalTextLabel;
    SBUILegibilityLabel *_deviceInformationLabel;
    SBUILegibilityLabel *_supervisionLabel;
    SBUILegibilityLabel *_provisionalEnrollmentLabel;
    unsigned long long _transactionCount;
}

@property (copy, nonatomic) NSString *internalLegalText;
@property (copy, nonatomic) NSString *supervisionText;
@property (copy, nonatomic) NSArray *deviceInformationText;
@property (copy, nonatomic) NSString *provisionalEnrollmentText;
@property (nonatomic) double strength;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_font;
- (void)_updateInternalLegalLabel;
- (void)updateTextsWithBlock:(id /* block */)a0;
- (double)_nonLegalTextParagraphSpacing;
- (double)_spacingBetweenNonLegalLabels;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_largeFont;
- (double)_nonLegalLabelFontLeading;
- (void)_updateLegibilityStrength;
- (void)_updateDeviceInformationLabel;
- (void).cxx_destruct;
- (void)_updateTextViews;
- (void)_updateProvisionalEnrollmentLabel;
- (double)_lineHeightOfNonLegalLabels;
- (void)layoutSubviews;
- (void)_updateSupervisionLabel;
- (void)_updateTextViewsIfNecessary;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
