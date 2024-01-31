@class NSString, MKSRPServer;
@protocol MKPOSTSRPRouterDelegate;

@interface MKPOSTSRPRouter : NSObject <MKHTTPRouter> {
    MKSRPServer *_srp;
}

@property (weak, nonatomic) id<MKPOSTSRPRouterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSRP:(id)a0;
- (void)server:(id)a0 didReceiveRequest:(id)a1 response:(id)a2;

@end
