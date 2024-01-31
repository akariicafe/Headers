@class BMDSL, NSString;
@protocol BMDSLStateValue;

@interface BMDSLState : BMDSL

@property (readonly, nonatomic) BMDSL *upstream;
@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) id<BMDSLStateValue> value;
@property (retain, nonatomic) id<BMDSLStateValue> combinedValue;

+ (BOOL)supportsSecureCoding;
+ (id)name;

- (id)upstreams;
- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0 version:(unsigned int)a1 upstream:(id)a2 key:(id)a3 value:(id)a4;
- (id)bpsPublisher;
- (id)combinedState;
- (id)initWithUpstream:(id)a0 key:(id)a1 value:(id)a2;
- (id)upstreamCombinedState;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
