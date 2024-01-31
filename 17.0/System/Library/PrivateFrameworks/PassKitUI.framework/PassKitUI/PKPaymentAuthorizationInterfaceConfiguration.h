@class NSString;
@protocol PKPaymentAuthorizationPresenter, PKPaymentAuthorizationHostProtocol;

@interface PKPaymentAuthorizationInterfaceConfiguration : NSObject

@property (readonly, nonatomic) NSString *relevantPassID;
@property (readonly, nonatomic) id<PKPaymentAuthorizationPresenter> presenter;
@property (readonly, nonatomic) id<PKPaymentAuthorizationHostProtocol> host;
@property (readonly, nonatomic) unsigned long long supportedOrientations;

- (void).cxx_destruct;
- (id)initWithRelevantPassID:(id)a0 presenter:(id)a1 host:(id)a2 supportedOrientations:(unsigned long long)a3;

@end
