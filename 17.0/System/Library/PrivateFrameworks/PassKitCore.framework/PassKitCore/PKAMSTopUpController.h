@protocol AMSURLProtocolDelegate, AMSPurchaseDelegate, NSURLSessionDelegate;

@interface PKAMSTopUpController : NSObject

@property (weak, nonatomic) id<AMSURLProtocolDelegate, NSURLSessionDelegate, AMSPurchaseDelegate> taskDelegate;

- (void).cxx_destruct;
- (id)_bag;
- (void)_executeAMSURLRequestForBagKey:(id)a0 completion:(id /* block */)a1;
- (void)requestDTUConfigurationWithCompletion:(id /* block */)a0;
- (void)requestPurchaseWithAmount:(id)a0 promotionConfiguration:(id)a1 completion:(id /* block */)a2;

@end
