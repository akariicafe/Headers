@class NSString, NSData;

@interface PKPaymentRemoteCredentialFIDOProfile : NSObject

@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier;
@property (readonly, copy, nonatomic) NSString *accountHash;
@property (readonly, copy, nonatomic) NSData *keyHash;

- (id)init;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
