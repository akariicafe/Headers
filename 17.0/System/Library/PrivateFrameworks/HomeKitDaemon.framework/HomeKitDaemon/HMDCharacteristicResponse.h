@class NSDate, NSData, NSError, HMDCharacteristicRequest, NSNumber;

@interface HMDCharacteristicResponse : HMFObject

@property (readonly, nonatomic) HMDCharacteristicRequest *request;
@property (retain, nonatomic) id value;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSNumber *stateNumber;
@property (readonly, nonatomic) NSDate *valueUpdatedTime;
@property (readonly, nonatomic) NSData *notificationContext;

+ (id)responseWithRequest:(id)a0 characteristicUpdateDictionary:(id)a1;
+ (id)responseWithRequest:(id)a0 error:(id)a1;
+ (id)responsesWithRequests:(id)a0 characteristicUpdateDictionary:(id)a1;
+ (id)responsesWithRequests:(id)a0 error:(id)a1;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithRequest:(id)a0 error:(id)a1;
- (id)characteristicUpdateDictionary;
- (void)setValue:(id)a0 updatedTime:(id)a1 stateNumber:(id)a2 notificationContext:(id)a3;

@end
