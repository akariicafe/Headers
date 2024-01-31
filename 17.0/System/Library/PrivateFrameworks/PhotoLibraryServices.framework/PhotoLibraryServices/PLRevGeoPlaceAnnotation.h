@class NSString;

@interface PLRevGeoPlaceAnnotation : NSObject <NSCopying>

@property (nonatomic) int placeLevel;
@property (retain, nonatomic) NSString *placeName;

- (id)init;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
