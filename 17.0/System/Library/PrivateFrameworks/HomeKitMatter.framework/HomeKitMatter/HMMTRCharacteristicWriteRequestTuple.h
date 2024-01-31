@class HAPCharacteristicWriteRequestTuple;

@interface HMMTRCharacteristicWriteRequestTuple : HMFObject

@property (nonatomic) unsigned long long characteristicHandlingType;
@property (retain, nonatomic) HAPCharacteristicWriteRequestTuple *primary;
@property (retain, nonatomic) HAPCharacteristicWriteRequestTuple *secondary;

- (void).cxx_destruct;
- (id)initWithRequestTuple:(id)a0;

@end
