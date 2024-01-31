@class PKFamilyMember, NSNumberFormatter, UIImage, NSPersonNameComponentsFormatter;

@interface PKAccountInvitationChooseMemberRow : NSObject {
    UIImage *_photoImage;
    NSPersonNameComponentsFormatter *_nameFormatter;
    NSNumberFormatter *_ageFormatter;
}

@property (readonly, nonatomic) PKFamilyMember *familyMember;
@property (readonly, nonatomic, getter=isEligible) BOOL eligible;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_updateConfiguration:(id)a0;
- (id)cellForTableView:(id)a0 atIndexPath:(id)a1;
- (id)initWithFamilyMember:(id)a0 photoImage:(id)a1 eligibility:(BOOL)a2;

@end
