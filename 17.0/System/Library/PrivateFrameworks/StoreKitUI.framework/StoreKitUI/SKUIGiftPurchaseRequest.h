@class SKUIURLConnectionRequest;

@interface SKUIGiftPurchaseRequest : NSObject {
    SKUIURLConnectionRequest *_request;
}

- (void).cxx_destruct;
- (id)_requestWithURL:(id)a0 bodyDictionary:(id)a1;
- (id)initWithDonation:(id)a0 configuration:(id)a1;
- (id)initWithGift:(id)a0 configuration:(id)a1;
- (void)purchaseWithCompletionBlock:(id /* block */)a0;

@end
