@interface HMAccessoryInfoSleepWakeState : NSObject

@property (readonly) unsigned long long sleepWakeState;

- (unsigned long long)hash;
- (id)initWithProtoData:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithProtoPayload:(id)a0;
- (id)initWithSleepWakeState:(unsigned long long)a0;
- (id)protoData;
- (id)protoPayload;

@end
