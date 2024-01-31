@class NSString, NSError, FKApplePayRowViewModelCollection;

@interface FinanceKitUI.ApplePayOrderFetchController : NSObject {
    void /* unknown type, empty encoding */ store;
}

+ (id)makeFetchController;

- (id)init;
- (void).cxx_destruct;
- (void)fetchAllRowViewModelsForTransactionWithIdentifier:(NSString *)a0 completionHandler:(void (^)(FKApplePayRowViewModelCollection *, NSError *))a1;

@end
