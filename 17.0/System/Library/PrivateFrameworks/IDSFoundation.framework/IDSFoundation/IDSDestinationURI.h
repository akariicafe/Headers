@class IDSURI;

@interface IDSDestinationURI : IDSDestination

@property (readonly, nonatomic) IDSURI *uri;

+ (BOOL)supportsSecureCoding;

- (id)destinationURIs;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithURIString:(id)a0;
- (id)initWithURI:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)destinationLightweightStatus;

@end
