@class NSString;

@interface SKPurchaseIntent : NSObject {
    NSString *_bundleId;
    NSString *_productIdentifer;
    NSString *_appName;
    NSString *_productName;
}

- (void)send:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithBundleId:(id)a0 productIdentifier:(id)a1;
- (id)initWithBundleId:(id)a0 productIdentifier:(id)a1 appName:(id)a2 productName:(id)a3;

@end
