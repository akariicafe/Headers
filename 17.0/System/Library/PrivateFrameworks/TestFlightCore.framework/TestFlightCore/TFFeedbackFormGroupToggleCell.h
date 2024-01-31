@class UISwitch, TFFeedbackEntryGroupToggle;

@interface TFFeedbackFormGroupToggleCell : TFFeedbackFormBaseCell

@property (readonly, nonatomic) UISwitch *toggleSwitch;
@property (retain, nonatomic) TFFeedbackEntryGroupToggle *groupToggleEntry;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)applyContentsOfEntry:(id)a0;
- (void)didUpdateToggleSwitchValue:(id)a0;
- (unsigned long long)displayableDataType;
- (void)setDisplayedDataGroupInclusionBool:(BOOL)a0;

@end
