@class NSString;

@interface STWebRemoteViewController : _UIRemoteViewController <STWebServiceDelegate>

@property BOOL URLIsBlocked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (void)instantiateWebViewControllerWithConnectionHandler:(id /* block */)a0;

- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)setURLIsBlocked:(BOOL)a0 replyHandler:(id /* block */)a1;

@end
