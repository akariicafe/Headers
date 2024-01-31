@interface DeviceDiscoveryUI.CNDDUISecureContactViewController : CNContactViewController

+ (BOOL)_isSecureForRemoteViewService;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (id)initWithCoder:(id)a0;

@end
