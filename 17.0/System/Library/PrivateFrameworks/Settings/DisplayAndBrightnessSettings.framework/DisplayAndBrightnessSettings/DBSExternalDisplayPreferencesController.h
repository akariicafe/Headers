@class SBSConnectedDisplayInfo, NSString, DBSZoomAndProSpecifiers;

@interface DBSExternalDisplayPreferencesController : PSListController <DBSZoomAndProSpecifiersDelegate, DBSDisplayZoomSelectionControllerDelegate>

@property (retain, nonatomic) DBSZoomAndProSpecifiers *_zoomAndProSpecifierVendor;
@property (readonly, nonatomic) SBSConnectedDisplayInfo *externalDisplayInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)specifiers;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)valueForSpecifier:(id)a0;
- (void)connectedDisplayDidUpdate:(id)a0;
- (id)displayModeSpecifiers;
- (void)displayZoomDidUpdate;
- (id)externalAutoBrightnessValueForSpecifier:(id)a0;
- (void)externalBrightnessDidUpdate:(id)a0;
- (id)externalBrightnessSpecifiers;
- (id)externalBrightnessValueForSpecifier:(id)a0;
- (id)getProModeEnabled;
- (void)handleDBSExternalDBSDisplayPreferencesControllerExternalDisplayManagerExternalAutoBrightnessAvailablityDidChangeNotification:(id)a0;
- (void)handleDBSExternalDBSDisplayPreferencesControllerExternalDisplayManagerExternalAutoBrightnessValueDidChangeNotification:(id)a0;
- (void)handleDBSExternalDisplayManagerExternalBrightnessAvailablityDidChangeNotification:(id)a0;
- (void)insertExternalBrightnessSpecifiers;
- (id)localizedMagnifyModeName;
- (id)matchContentEnabled:(id)a0;
- (void)presentModalFineTuneController;
- (void)presentModalMagnifyController;
- (BOOL)proModeSupported;
- (void)removeExternalBrightnessSpecifiers;
- (void)setExternalAutoBrightnessValue:(id)a0 specifier:(id)a1;
- (void)setExternalBrightnessValue:(id)a0 specifier:(id)a1;
- (void)setMatchContentEnabled:(id)a0 specifier:(id)a1;
- (void)setProModeEnabled:(BOOL)a0;
- (unsigned long long)supportedZoomModesCount;

@end
