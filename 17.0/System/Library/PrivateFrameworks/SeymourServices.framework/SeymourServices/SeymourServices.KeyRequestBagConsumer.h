@interface SeymourServices.KeyRequestBagConsumer : NSObject <AMSURLProtocolDelegate, NSURLSessionDelegate> {
    void /* unknown type, empty encoding */ accountProvider;
    void /* unknown type, empty encoding */ bagConsumer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_amsSession;
}

- (void)AMSURLSession:(id)a0 task:(id)a1 handleAuthenticateRequest:(id)a2 completion:(id /* block */)a3;
- (id)init;
- (void).cxx_destruct;

@end
