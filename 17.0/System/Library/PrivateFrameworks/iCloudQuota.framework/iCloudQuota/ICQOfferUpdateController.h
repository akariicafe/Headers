@class NSURLSession;

@interface ICQOfferUpdateController : NSObject {
    NSURLSession *_sharedURLSession;
}

- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (void)performOfferUpdateWithContext:(id)a0 completion:(id /* block */)a1;

@end
