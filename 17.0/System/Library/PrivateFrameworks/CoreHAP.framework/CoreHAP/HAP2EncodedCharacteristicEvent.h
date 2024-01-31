@class NSNumber, NSData, NSString;
@protocol HAP2AccessoryCharacteristicEncodedData;

@interface HAP2EncodedCharacteristicEvent : HAP2LoggingObject <HAP2EncodedCharacteristicEvent>

@property (readonly, nonatomic) NSNumber *instanceID;
@property (readonly, nonatomic) id<HAP2AccessoryCharacteristicEncodedData> encodedValueData;
@property (readonly, nonatomic) NSData *encodedContextData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithInstanceID:(id)a0 encodedValueData:(id)a1 encodedContextData:(id)a2;

@end
