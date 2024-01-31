@class NSString, NSData;

@interface SEFidoKeySignResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *relyingParty;
@property (readonly) NSString *relyingPartyAccountHash;
@property (readonly) NSData *fidoKeyHash;
@property (readonly) NSData *fidoAssertion;
@property (readonly) NSData *signedChallenge;

+ (id)withRelyingParty:(id)a0 relyingPartyAccountHash:(id)a1 fidoKeyHash:(id)a2 fidoAssertion:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
