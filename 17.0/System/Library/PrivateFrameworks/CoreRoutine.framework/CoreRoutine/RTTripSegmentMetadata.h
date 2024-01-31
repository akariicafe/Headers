@class NSArray, NSString;

@interface RTTripSegmentMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *roadClass;
@property (readonly, nonatomic) NSArray *formOfWay;
@property (readonly, nonatomic) NSArray *locationType;
@property (readonly, nonatomic) NSString *startLocationName;
@property (readonly, nonatomic) NSString *endLocationName;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRoadClass:(id)a0 formOfWay:(id)a1 locationType:(id)a2 startLocationName:(id)a3 endLocationName:(id)a4;

@end
