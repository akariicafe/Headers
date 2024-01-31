@class NSMutableArray;
@protocol HAP2Accessory;

@interface HAP2CharacteristicTuple : NSObject

@property (readonly, nonatomic) id<HAP2Accessory> accessory;
@property (readonly, nonatomic) NSMutableArray *values;

- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0;

@end
