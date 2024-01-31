@class NSString;

@interface HMDAddActionSetLogEvent : HMMHomeLogEvent

@property (readonly, copy) NSString *actionSetType;

- (void).cxx_destruct;
- (id)initWithActionSetType:(id)a0 homeUUID:(id)a1;

@end
