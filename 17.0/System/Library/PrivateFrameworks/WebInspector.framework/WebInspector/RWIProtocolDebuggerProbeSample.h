@class RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolDebuggerProbeSample : RWIProtocolJSONObject

@property (nonatomic) int probeId;
@property (nonatomic) int sampleId;
@property (nonatomic) int batchId;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *payload;

- (id)initWithProbeId:(int)a0 sampleId:(int)a1 batchId:(int)a2 timestamp:(double)a3 payload:(id)a4;

@end
