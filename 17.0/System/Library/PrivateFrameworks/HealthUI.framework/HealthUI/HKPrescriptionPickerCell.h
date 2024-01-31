@class UIStackView, NSString, UISwitch, UILabel, HKVisionPrescription, UIButton;
@protocol HKPrescriptionPickerCellDelegate;

@interface HKPrescriptionPickerCell : UITableViewCell

@property (class, readonly, copy) NSString *defaultReuseIdentifier;

@property (retain, nonatomic) UILabel *primaryLabel;
@property (retain, nonatomic) UILabel *secondaryLabel;
@property (retain, nonatomic) UIButton *showDetailsButton;
@property (retain, nonatomic) UIStackView *sampleInfoStackView;
@property (retain, nonatomic) UIStackView *contentStackView;
@property (retain, nonatomic) UISwitch *toggleView;
@property (copy, nonatomic) HKVisionPrescription *prescription;
@property (nonatomic, getter=isOn) BOOL on;
@property (weak, nonatomic) id<HKPrescriptionPickerCellDelegate> delegate;

- (void)_setupConstraints;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_setupSubviews;
- (void)_didTapShowDetailsButton;
- (void)_didToggleSwitch:(id)a0;

@end
