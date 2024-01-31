@class NSString, CLLocation;

@interface INRestaurant : NSObject <INRestaurantExport, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *vendorIdentifier;
@property (copy, nonatomic) NSString *restaurantIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)_dictionaryRepresentation;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLocation:(id)a0 name:(id)a1 vendorIdentifier:(id)a2 restaurantIdentifier:(id)a3;
- (BOOL)location:(id)a0 equalToLocation:(id)a1;

@end
