@class NSString, AWDHomeKitValue;

@interface HMDWHASettingEvent : HMMLogEvent

@property (copy, nonatomic) NSString *keyPath;
@property (copy, nonatomic) AWDHomeKitValue *value;

+ (id)eventWithKeyPath:(id)a0 value:(id)a1;

- (void).cxx_destruct;

@end
