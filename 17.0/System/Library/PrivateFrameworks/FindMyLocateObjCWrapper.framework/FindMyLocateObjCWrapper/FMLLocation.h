@class FMLPlaceMark, NSArray, NSString;

@interface FMLLocation : NSObject

@property (retain, nonatomic) FMLPlaceMark *address;
@property (nonatomic) double altitude;
@property (nonatomic) double longitude;
@property (nonatomic) double speed;
@property (nonatomic) int floorLevel;
@property (nonatomic) double horizontalAccuracy;
@property (copy, nonatomic) NSArray *labels;
@property (nonatomic) double latitude;
@property (nonatomic) double timestamp;
@property (nonatomic) double verticalAccuracy;
@property (nonatomic) long long locationType;
@property (copy, nonatomic) NSString *coarseAddressLabel;
@property (readonly, nonatomic) long long type;

- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithAddress:(id)a0 altitude:(double)a1 longitude:(double)a2 speed:(double)a3 floorLevel:(int)a4 horizontalAccuracy:(double)a5 labels:(id)a6 latitude:(double)a7 timestamp:(double)a8 verticalAccuracy:(double)a9 locationType:(long long)a10 coarseAddressLabel:(id)a11;
- (id)locationTypeDescription;

@end
