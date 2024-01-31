@class NSString;

@interface SUUIDismissingProductViewController : SKStoreProductViewController <SKStoreProductViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)productViewControllerDidFinish:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
