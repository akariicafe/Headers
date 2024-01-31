@class NSString, HAPCharacteristic, NSData, NSUUID, NSNumber;

@interface HAPCharacteristicWriteRequestTuple : HMFObject <HAP2CharacteristicTupleValue, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id initialValue;
@property (retain, nonatomic) HAPCharacteristic *characteristic;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) NSData *authorizationData;
@property (nonatomic) BOOL timedWrite;
@property (nonatomic) unsigned long long writeType;
@property (nonatomic) BOOL includeResponseValue;
@property (retain, nonatomic) NSNumber *enableEvents;
@property (retain, nonatomic) NSData *contextData;
@property (retain) NSUUID *hmdAccessoryUUID;

+ (id)writeRequestTupleForCharacteristic:(id)a0 value:(id)a1 authorizationData:(id)a2 timedWrite:(BOOL)a3 responseValue:(BOOL)a4 type:(unsigned long long)a5;
+ (id)writeRequestTupleForCharacteristic:(id)a0 value:(id)a1 authorizationData:(id)a2 timedWrite:(BOOL)a3 responseValue:(BOOL)a4 type:(unsigned long long)a5 contextData:(id)a6;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
