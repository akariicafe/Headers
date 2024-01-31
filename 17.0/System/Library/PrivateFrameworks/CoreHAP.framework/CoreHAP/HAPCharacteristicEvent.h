@class NSString, NSNumber, NSDate;

@interface HAPCharacteristicEvent : HMFObject

@property (readonly, copy, nonatomic) NSString *serverIdentifier;
@property (readonly, copy, nonatomic) NSNumber *accessoryInstanceID;
@property (readonly, copy, nonatomic) NSNumber *serviceInstanceID;
@property (readonly, copy, nonatomic) NSNumber *characteristicInstanceID;
@property (readonly, copy, nonatomic) id value;
@property (readonly, nonatomic) NSDate *updateTime;
@property (readonly, nonatomic) NSNumber *stateNumber;

+ (id)eventWithCharacteristic:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCharacteristic:(id)a0;

@end
