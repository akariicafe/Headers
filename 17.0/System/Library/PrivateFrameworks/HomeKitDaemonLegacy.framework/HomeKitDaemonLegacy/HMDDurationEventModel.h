@class NSNumber;

@interface HMDDurationEventModel : HMDEventModel

@property (retain, nonatomic) NSNumber *duration;

+ (id)properties;
+ (id)eventModelWithDictionary:(id)a0 home:(id)a1 eventTriggerUUID:(id)a2 message:(id)a3;

@end
