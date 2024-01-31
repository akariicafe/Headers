@class _CRKCardSectionViewControllerRegistry;

@interface _CRKCardSectionViewControllerFactory : NSObject {
    _CRKCardSectionViewControllerRegistry *_registry;
}

+ (id)_sharedInstance;
+ (id)cardSectionViewControllerForCardSection:(id)a0;
+ (void)registerCardSectionViewControllerClass:(Class)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_cardSectionViewControllerForCardSection:(id)a0;
- (void)_registerCardSectionViewControllerClass:(Class)a0;

@end
