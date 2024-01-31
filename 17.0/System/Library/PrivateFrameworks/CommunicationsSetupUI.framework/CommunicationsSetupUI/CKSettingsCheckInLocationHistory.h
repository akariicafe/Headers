@class PSSpecifier;

@interface CKSettingsCheckInLocationHistory : PSListController

@property (retain) PSSpecifier *selectionGroup;
@property (retain) PSSpecifier *noLocationHistorySelector;
@property (retain) PSSpecifier *fullLocationHistorySelector;
@property (retain) PSSpecifier *sampleMapDataGroup;
@property (retain) PSSpecifier *noLocationHistoryMap;
@property (retain) PSSpecifier *fullLocationHistoryMap;
@property (retain) PSSpecifier *sampleDevicesDataGroup;
@property (retain) PSSpecifier *noLocationHistoryDevices;
@property (retain) PSSpecifier *fullLocationHistoryDevices;

- (id)init;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)specifiers;
- (void).cxx_destruct;
- (id)getSelectionGroupFooterText;
- (id)sampleDevicesDataSpecifier;
- (id)sampleMapDataSpecifier;
- (void)updateSampleDataSpecifiersAnimated:(BOOL)a0;

@end
