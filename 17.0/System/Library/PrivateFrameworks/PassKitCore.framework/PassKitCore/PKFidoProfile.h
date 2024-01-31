@class NSString;

@interface PKFidoProfile : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *relyingPartyIdentifier;
@property (retain, nonatomic) NSString *accountHash;
@property (retain, nonatomic) NSString *keyHash;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
