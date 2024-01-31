@class UIColor, UIStackView, NSTimer, UILabel, WBSTOTPGenerator;

@interface SFAccountDetailTOTPTableViewCell : UITableViewCell {
    UILabel *_subtitleLabel;
    UILabel *_verificationCodeLabel;
    UIStackView *_titleAndVerificationCodeStackView;
    WBSTOTPGenerator *_generator;
    NSTimer *_codeUpdateTimer;
}

@property (retain, nonatomic) UIColor *overrideVerificationCodeLabelTextColor;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)_attributedSubtitleString;
- (id)_attributedSubtitleStringWithRemainingSeconds:(unsigned long long)a0;
- (id)_formattedCode;
- (void)_startTOTPTimerIfNeeded;
- (void)_updateCodeAndLabels;
- (void)_updateTitleAndVerificationCodeStackView;
- (void)_updateVerificationCodeLabelTextColor;
- (void)configureWithGenerator:(id)a0;

@end
