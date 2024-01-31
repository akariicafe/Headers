@class NSString, SKStoreProductViewController;

@interface PKStoreProductViewControllerDismisser : NSObject <SKStoreProductViewControllerDelegate> {
    SKStoreProductViewController *_productViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
