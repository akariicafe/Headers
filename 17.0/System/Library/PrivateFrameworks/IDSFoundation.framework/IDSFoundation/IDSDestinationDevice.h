@class IDSURI;

@interface IDSDestinationDevice : IDSDestination

@property (retain, nonatomic) IDSURI *destinationURI;
@property (nonatomic) BOOL isGuest;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isDeviceURI:(id)a0;

- (id)destinationURIs;
- (BOOL)isDevice;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithRapportPublicIdentifierURI:(id)a0;
- (id)initWithDeviceURI:(id)a0;
- (id)initWithURI:(id)a0 isGuest:(BOOL)a1;
- (id)initWithIDSDeviceURI:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
