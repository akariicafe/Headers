@class NSString, EAAccessory;

@interface PSGAccessoryDetailsController : PSListController <EAAccessoryDelegate> {
    EAAccessory *_accessory;
    BOOL _shouldEscape;
    BOOL _finishedAppearing;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)manufacturer;
- (id)serialNumber;
- (void)disconnect;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (id)firmwareRevision;
- (void)connect;
- (id)specifiers;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)modelNumber;
- (id)hardwareRevision;
- (void)accessoryDidDisconnect:(id)a0;
- (id)bonjourName;
- (void)_accessoryDidUpdate:(id)a0;
- (void)findAppForAccessory;

@end
