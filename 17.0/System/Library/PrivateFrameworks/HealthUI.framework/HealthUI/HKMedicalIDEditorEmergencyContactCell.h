@class _HKEmergencyContact;

@interface HKMedicalIDEditorEmergencyContactCell : HKMedicalIDEditorCell

@property (retain, nonatomic) _HKEmergencyContact *contact;

- (id)formattedValue;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_labelTapped:(id)a0;

@end
