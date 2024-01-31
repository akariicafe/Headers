@class UILabel, NSString, UISwitch, UIActivityIndicatorView, UIStackView, UIImageView, PKPassSnapshotter, PKTransitBalanceModel, NSLayoutConstraint, PKPaymentPass, UIColor;
@protocol PKPaymentPreferenceCardCellAccessoryViewDelegate;

@interface PKPaymentPreferenceCardCell : PKPaymentPreferenceCell {
    BOOL _isRightToLeft;
    BOOL _editing;
    UIActivityIndicatorView *_activityIndicator;
    UIStackView *_labelStackView;
    UIColor *_subTextLabelColorOverride;
    NSLayoutConstraint *_labelStackTrailingAnchorToCell;
    unsigned int _snapshotCounter;
}

@property (weak, nonatomic) id<PKPaymentPreferenceCardCellAccessoryViewDelegate> delegate;
@property (nonatomic) long long accessoryViewType;
@property (retain, nonatomic) PKPaymentPass *pass;
@property (retain, nonatomic) PKPassSnapshotter *passSnapshotter;
@property (retain, nonatomic) PKTransitBalanceModel *transitBalanceModel;
@property (retain, nonatomic) UIColor *mainLabelColor;
@property (retain, nonatomic) UIColor *subTextLabelColor;
@property (retain, nonatomic) UIColor *disabledMainLabelColor;
@property (retain, nonatomic) UIColor *disabledSubTextLabelColor;
@property (retain, nonatomic) UIColor *activityIndicatorColor;
@property (readonly, nonatomic) UILabel *displayLabel;
@property (readonly, nonatomic) UILabel *censoredPANLabel;
@property (readonly, nonatomic) UILabel *additionalContextLabel;
@property (readonly, nonatomic) UIImageView *cardArtView;
@property (readonly, nonatomic) UISwitch *actionSwitch;
@property (readonly, nonatomic) UILabel *disclosureLabel;
@property (readonly, nonatomic) UIImageView *disclosureView;
@property (copy, nonatomic) NSString *availabilityString;
@property (copy, nonatomic) NSString *subTextOverrideString;
@property (copy, nonatomic) NSString *additionalContextString;
@property (copy, nonatomic) NSString *disclosureString;
@property (nonatomic) BOOL showBillingAddress;
@property (nonatomic) BOOL dimCardArt;
@property (nonatomic, getter=isActivityIndicatorActive) BOOL activityIndicatorActive;

+ (double)textOffset;

- (void)_setupConstraints;
- (void)_updateAccessoryView;
- (void)prepareForReuse;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)setHasError:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)setUserInteractionEnabled:(BOOL)a0;
- (void)_updateLabelTextColors;
- (void)_calculateAccessoryLayout;
- (void)_performSwitchToggle:(id)a0;
- (void)_updateAdditionalContextLabel;
- (void)_updateCellContent;
- (void)_updateCensoredPANLabel;
- (void)_updateDisclosureLabel;
- (double)heightThatFitsLabels;
- (void)pk_applyAppearance:(id)a0;

@end
