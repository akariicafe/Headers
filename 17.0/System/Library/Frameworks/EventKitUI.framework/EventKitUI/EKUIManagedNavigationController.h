@class NSString;

@interface EKUIManagedNavigationController : UINavigationController <EKUIManagedViewController>

@property (nonatomic) BOOL forceCanBeDirectlyManagedToNo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
