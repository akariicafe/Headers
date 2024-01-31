@class NSString, BluetoothDevice;

@interface AccessoryControlListItemsController : PSListItemsController {
    BluetoothDevice *_currentDevice;
    struct { BOOL normal; BOOL anc; BOOL transparency; BOOL autoANC; } _listeningModeConfigs;
    NSString *_currentSelectedSpecifier;
    BOOL _autoANCSupported;
}

- (id)init;
- (void)dealloc;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)specifiers;
- (void).cxx_destruct;
- (void)listItemSelected:(id)a0;
- (id)listeningModeCombinations;

@end
