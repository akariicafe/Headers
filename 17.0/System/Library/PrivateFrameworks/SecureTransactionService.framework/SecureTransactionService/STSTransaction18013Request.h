@class NSString, NSDictionary, NSData;

@interface STSTransaction18013Request : NSObject

@property (retain, nonatomic) NSString *credentialIdentifier;
@property (retain, nonatomic) NSDictionary *elementsByNamespace;
@property (retain, nonatomic) NSData *authenticationACL;
@property (nonatomic) BOOL readerAuthenticated;
@property (retain, nonatomic) NSString *readerMerchantId;

- (void).cxx_destruct;

@end
