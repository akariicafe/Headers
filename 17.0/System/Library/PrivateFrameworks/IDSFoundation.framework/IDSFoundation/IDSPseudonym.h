@class IDSURI, NSDictionary, IDSPseudonymProperties, NSString;

@interface IDSPseudonym : NSObject <NSSecureCoding, IDSDestinationProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) IDSURI *URI;
@property (readonly, nonatomic) IDSURI *maskedURI;
@property (readonly, nonatomic) IDSPseudonymProperties *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)destinationURIs;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithURI:(id)a0 maskedURI:(id)a1 properties:(id)a2;
- (BOOL)isEqualToPseudonym:(id)a0;
- (id)withUpdatedProperties:(id)a0;

@end
