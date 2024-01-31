@class NSData, NSNumber;

@interface HMDEventTriggerModel : HMDTriggerModel

@property (retain, nonatomic) NSData *evaluationCondition;
@property (retain, nonatomic) NSData *recurrences;
@property (retain, nonatomic) NSNumber *executeOnce;

+ (id)properties;

- (id)createPayload;
- (id)createPayloadWithCondition:(id)a0;

@end
