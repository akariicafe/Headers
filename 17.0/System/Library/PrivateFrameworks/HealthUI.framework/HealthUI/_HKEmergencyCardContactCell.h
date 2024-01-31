@class UILabel, _HKEmergencyContact;

@interface _HKEmergencyCardContactCell : UITableViewCell

@property (retain, nonatomic) UILabel *relationshipLabel;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *phoneNumberLabel;
@property (retain, nonatomic) _HKEmergencyContact *contact;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (void)dealloc;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_setupIndividualViews;
- (void)setContact:(id)a0 showRelationship:(BOOL)a1 showPhoneIcon:(BOOL)a2;
- (void)setupViewHeirarchy;

@end
