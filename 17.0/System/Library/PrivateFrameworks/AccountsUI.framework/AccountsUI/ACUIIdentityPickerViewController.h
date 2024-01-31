@class NSString, NSArray;
@protocol ACUIIdentityPickerViewControllerDelegate;

@interface ACUIIdentityPickerViewController : PSListController {
    id<ACUIIdentityPickerViewControllerDelegate> _delegate;
    NSArray *_identities;
    NSArray *_emailAddresses;
    BOOL _userInteractiveSwitch;
    BOOL _userInteractiveIdentityList;
    BOOL _allowIdentitySelectionForDisabledSwitch;
}

@property (readonly, nonatomic) NSString *property;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)specifiers;
- (void).cxx_destruct;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (BOOL)_allowIdentitySelection;
- (void)_finishedFetchingIdentities:(id)a0;
- (id)_identitySpecifiers;
- (struct __SecIdentity { } *)_identityToAutoselectWithEnabled:(BOOL)a0;
- (BOOL)_isPropertyEnabled;
- (struct __SecIdentity { } *)_selectedIdentity;
- (void)_setPropertyEnabled:(BOOL)a0 identity:(struct __SecIdentity { } *)a1;
- (void)_setValue:(id)a0 forSwitchSpecifier:(id)a1;
- (id)_specifiersForIdentities:(id)a0;
- (void)_updateCell:(id)a0 selected:(BOOL)a1;
- (id)_valueForSwitchSpecifier:(id)a0;

@end
