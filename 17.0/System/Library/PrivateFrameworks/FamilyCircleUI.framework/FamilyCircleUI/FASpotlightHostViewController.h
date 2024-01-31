@class NSString, _UIRemoteViewController;

@interface FASpotlightHostViewController : _UIRemoteViewController <_UIRemoteViewControllerContaining>

@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceViewControllerInterface;
+ (id)requestViewControllerWithContactID:(id)a0 completion:(id /* block */)a1;


@end
