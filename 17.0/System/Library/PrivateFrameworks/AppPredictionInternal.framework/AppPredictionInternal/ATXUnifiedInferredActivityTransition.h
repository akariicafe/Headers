@class NSString;

@interface ATXUnifiedInferredActivityTransition : NSObject <BMStoreData, ATXTimedEventProtocol, ATXProtoBufWrapper, ATXJSONSerializableProtocol, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double transitionTime;
@property (readonly, nonatomic) BOOL isEntryEvent;
@property (readonly, nonatomic) NSString *source;
@property (readonly, nonatomic) NSString *mode;
@property (readonly, nonatomic) unsigned long long inferredActivityType;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)eventTime;
- (id)initWithProto:(id)a0;
- (id)init;
- (id)encodeAsProto;
- (id)proto;
- (id)serialize;
- (id)initWithProtoData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initFromJSON:(id)a0;
- (id)json;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)activityTypeAfterTransition;
- (id)initFromTransitionTime:(double)a0 isEntryEvent:(BOOL)a1 source:(id)a2 activityType:(unsigned long long)a3 confidence:(double)a4;
- (id)initFromTransitionTime:(double)a0 isEntryEvent:(BOOL)a1 source:(id)a2 mode:(id)a3;
- (id)initWithCoder_v1:(id)a0;
- (id)initWithCoder_v2:(id)a0;
- (BOOL)isEqualToATXUnifiedInferredActivityTransition:(id)a0;
- (id)prettyRepresentation;

@end
