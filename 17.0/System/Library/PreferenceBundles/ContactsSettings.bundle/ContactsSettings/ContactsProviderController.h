@class CNContactsProvider;

@interface ContactsProviderController : PSListController

@property (retain, nonatomic) CNContactsProvider *provider;

- (id)init;
- (id)specifiers;
- (void).cxx_destruct;
- (id)readToggleSwitchSpecifierValue:(id)a0;
- (void)setToggleSwitchSpecifierValue:(id)a0 specifier:(id)a1;

@end
