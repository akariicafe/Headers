@class PXPeopleScalableAvatarView, PHPerson;

@interface PXPeopleNamePickerPersonCell : PXPeopleNamePickerCell

@property (readonly, weak, nonatomic) PXPeopleScalableAvatarView *personAvatarView;
@property (weak, nonatomic) PHPerson *person;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
