@class NSString;

@interface PCMapLocation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *countryName;
@property (retain, nonatomic) NSString *locationName;
@property (nonatomic) float latitude;
@property (nonatomic) float longitude;
@property (retain, nonatomic) NSString *airportCode;
@property (retain, nonatomic) NSString *airportName;

+ (id)dictionaryFromArrayOfLocations:(id)a0;
+ (void)removeLocationsFromArray:(id)a0 withinDistance:(float)a1 ofSameLocationsInDictionary:(id)a2;

- (id)init;
- (id)stringRepresentation;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqualToLocation:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasSamePositionAsLocation:(id)a0 tolerance:(float)a1;

@end
