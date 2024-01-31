@class NSString, NSData;

@interface PCCAttestation : NSObject

@property (retain, nonatomic) NSString *certificate;
@property (retain, nonatomic) NSData *applicationEnclaveQuote;
@property (retain, nonatomic) NSData *quotingEnclaveQuote;
@property (retain, nonatomic) NSData *routingToken;

- (void).cxx_destruct;
- (id)initWithCertificate:(id)a0 applicationEnclaveQuote:(id)a1 quotingEnclaveQuote:(id)a2 routingToken:(id)a3;

@end
