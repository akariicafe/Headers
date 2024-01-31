@class SMSessionDestinationEta, RTLocation, NSData, CLLocation;

@interface SMSessionDestination : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) RTLocation *location;
@property (readonly, nonatomic) CLLocation *clLocation;
@property (readonly, nonatomic) SMSessionDestinationEta *eta;
@property (readonly, nonatomic) double radius;
@property (readonly, nonatomic) unsigned long long destinationType;
@property (readonly, nonatomic) NSData *destinationMapItem;

+ (id)destinationTypeToString:(unsigned long long)a0;
+ (unsigned long long)convertPlaceTypeToDestinationType:(unsigned long long)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)outputToDictionary;
- (id)initWithLocation:(id)a0 eta:(id)a1 radius:(double)a2 destinationType:(unsigned long long)a3 destinationMapItem:(id)a4;
- (id)initWithCLLocation:(id)a0 eta:(id)a1 radius:(double)a2 destinationType:(unsigned long long)a3 destinationMapItem:(id)a4;

@end
