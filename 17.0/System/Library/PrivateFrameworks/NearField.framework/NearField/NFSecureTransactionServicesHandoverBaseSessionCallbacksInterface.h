@class NSXPCInterface;

@interface NFSecureTransactionServicesHandoverBaseSessionCallbacksInterface : NSObject

@property (readonly, nonatomic) NSXPCInterface *protocolInterface;

+ (id)interface;

- (id)initWithProtocol:(id)a0;
- (void).cxx_destruct;
- (void)setupInterface;

@end
