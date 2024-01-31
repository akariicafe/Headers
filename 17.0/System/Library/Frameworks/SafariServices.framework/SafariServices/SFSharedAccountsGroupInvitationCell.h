@class KCSharingGroup;

@interface SFSharedAccountsGroupInvitationCell : SFAccountManagerPlatterWithDeclineButtonCell

@property (readonly, nonatomic) KCSharingGroup *group;

+ (unsigned long long)contentInset;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)configureWithGroup:(id)a0;

@end
