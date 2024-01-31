@class NSString, IDSURI;

@interface SKPresenceOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isPersonal;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (retain, nonatomic) IDSURI *clientSpecifiedURI;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithServiceIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;

@end
