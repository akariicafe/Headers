@class HMDCharacteristic, HMDCharacteristicResponse;

@interface HMDCharacteristicUpdateTuple : HMFObject

@property (retain, nonatomic) id value;
@property (readonly, nonatomic) HMDCharacteristic *characteristic;
@property (readonly, nonatomic) id updatedValue;
@property (readonly, nonatomic, getter=isBroadcast) BOOL broadcast;
@property (retain, nonatomic) HMDCharacteristicResponse *characteristicResponse;

+ (id)characteristicUpdateTuplesWithCharacteristics:(id)a0 isBroadcast:(BOOL)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCharacteristic:(id)a0 updatedValue:(id)a1 isBroadcast:(BOOL)a2;

@end
