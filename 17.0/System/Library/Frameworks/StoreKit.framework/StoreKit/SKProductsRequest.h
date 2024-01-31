@class NSSet, NSError, SKProductsResponse;
@protocol SKProductsRequestDelegate;

@interface SKProductsRequest : SKRequest {
    id _productsRequestInternal;
}

@property (readonly, nonatomic) NSSet *_productIdentifiers;
@property (weak, nonatomic) id<SKProductsRequestDelegate> delegate;

- (void)_start;
- (id)init;
- (id)initWithProductIdentifiers:(id)a0;
- (void).cxx_destruct;
- (void)_startWithCompletionHandler:(void (^)(SKProductsResponse *, NSError *))a0;
- (void)_logEventWithPrimaryError:(id)a0 mappedError:(id)a1;

@end
