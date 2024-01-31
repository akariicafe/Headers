@class NSArray, NSString;

@interface IDSDestination : NSObject <IDSDestinationProtocol, NSCopying>

@property (class, readonly, nonatomic) NSArray *classesForStrictUnarchiving;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic, getter=isGuest) BOOL guest;
@property (readonly, nonatomic, getter=isDevice) BOOL device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)destinationWithDestinations:(id)a0;
+ (id)destinationWithDeviceURI:(id)a0;
+ (id)destinationWithRapportPublicIdentifierURI:(id)a0;
+ (id)destinationWithStrings:(id)a0;
+ (id)destinationWithURI:(id)a0;
+ (id)destinationWithAlias:(id)a0 pushToken:(id)a1;
+ (id)defaultPairedDeviceDestination;
+ (id)destinationWithGroup:(id)a0;
+ (id)destinationWithString:(id)a0;
+ (id)destinationWithStringURI:(id)a0 isLightWeight:(BOOL)a1;
+ (id)sentinelSelfAliasDestination;

- (id)destinationURIs;
- (BOOL)isEqualToDestination:(id)a0;
- (id)normalizedURIStrings;
- (id)normalizedURIs;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
