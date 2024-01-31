@interface VUIMLFactory : NSObject

+ (id)sharedInstance;
+ (void)_registerElements;

- (id)init;
- (id)imageForResource:(id)a0;
- (id)URLForResource:(id)a0;
- (id)_URLForResource:(id)a0 inBundle:(id)a1;
- (Class)collectionViewCellClassForElement:(id)a0;
- (id)imageProxyForElement:(id)a0 withLayout:(id)a1;
- (id)viewControllerForElement:(id)a0 existingViewController:(id)a1;
- (id)viewForElement:(id)a0 existingView:(id)a1;

@end
