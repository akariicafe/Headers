@class NSMutableDictionary;

@interface _CRKCardSectionViewControllerRegistry : NSObject {
    NSMutableDictionary *_cardSectionViewControllerClassNameForCardSectionClassName;
}

- (id)init;
- (void).cxx_destruct;
- (Class)cardSectionViewControllerClassForCardSectionClass:(Class)a0;
- (void)registerCardSectionViewControllerClass:(Class)a0 forCardSectionClass:(Class)a1;

@end
