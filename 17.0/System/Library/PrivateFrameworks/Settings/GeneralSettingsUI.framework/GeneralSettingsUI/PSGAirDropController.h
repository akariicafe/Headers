@class NSString, SFAirDropDiscoveryController, PSSpecifier;

@interface PSGAirDropController : PSListController <SFAirDropDiscoveryControllerDelegate> {
    SFAirDropDiscoveryController *_airDropDiscoveryController;
    PSSpecifier *_groupSpecifier;
    PSSpecifier *_offSpecifier;
    PSSpecifier *_contactsOnlySpecifier;
    PSSpecifier *_everyoneSpecifier;
    PSSpecifier *_nearbySharingGroupSpecifier;
    PSSpecifier *_nearbySharingSpecifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)loadView;
- (id)specifiers;
- (void)discoveryControllerSettingsDidChange:(id)a0;
- (void)discoveryControllerVisibilityDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)isNearbySharingSupported;
- (void)_refreshFooterForSpecifier:(id)a0;
- (void)_updateSpecifiersFromPreferences;
- (id)isNearbySharingEnabled:(id)a0;
- (void)setNearbySharingEnabled:(id)a0 specifier:(id)a1;

@end
