@class NSString;

@interface FBKDevicePickingNavigationController : UINavigationController <FBKDeviceChoiceDelegate>

@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)deviceChoicesController:(id)a0 didChooseDevices:(id)a1;
- (void)deviceChoicesControllerDidCancelWithController:(id)a0;
- (id)initWithDeviceChoices:(id)a0 allowsMultipleSelection:(BOOL)a1 completion:(id /* block */)a2;
- (void)pairedDevicesDidChangeWithAddedDevice:(id)a0 removed:(id)a1;
- (void)pairingViewDidCancel;
- (void)pairingViewDidClose;

@end
