@class NSString;

@interface _AXRemoteNearbyDevicesViewController : _UIRemoteViewController <AXRemoteViewServiceExportedInterface>

@property (copy, nonatomic) id /* block */ dismissHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)presentNearbyDevicesViewControllerWithConnectionHandler:(id /* block */)a0 dismissalHandler:(id /* block */)a1;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;

@end
