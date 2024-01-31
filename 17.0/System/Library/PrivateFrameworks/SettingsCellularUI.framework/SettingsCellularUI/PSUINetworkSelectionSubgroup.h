@class NSMutableArray, PSSpecifier, NSString, CoreTelephonyClient, PSListController;

@interface PSUINetworkSelectionSubgroup : NSObject <CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientRegistrationDelegate, PSSpecifierGroup>

@property (weak, nonatomic) PSListController *listController;
@property (weak, nonatomic) PSSpecifier *parentSpecifier;
@property (retain, nonatomic) CoreTelephonyClient *ctClient;
@property (retain, nonatomic) NSMutableArray *bundleControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)networkSelected:(id)a0 success:(BOOL)a1 mode:(id)a2;
- (void)willEnterForeground;
- (id)getLogger;
- (id)specifiers;
- (void).cxx_destruct;
- (void)operatorNameChanged:(id)a0 name:(id)a1;
- (id)initWithListController:(id)a0 groupSpecifier:(id)a1;
- (id)initWithListController:(id)a0 groupSpecifier:(id)a1 parentSpecifier:(id)a2;
- (id)localizedCellularNetworkName:(id)a0;
- (void)reloadCellularNetworkSpecifier;

@end
