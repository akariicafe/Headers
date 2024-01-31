@class NSString, _UIRemoteViewController;

@interface FLHostViewController : _UIRemoteViewController <_UIRemoteViewControllerContaining, FLExtensionHostInterface>

@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (id)exportedInterface;
- (id)serviceViewControllerInterface;

@end
