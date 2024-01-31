@class NSUUID, NSString;

@interface BMMicroLocationProbabilityPerLabel : NSObject <BMStoreData, BMProtoBufWrapper>

@property (readonly, copy, nonatomic) NSUUID *labelIdentifier;
@property (readonly, nonatomic) double probability;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)serialize;
- (id)initWithProtoData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithLabelIdentifier:(id)a0 probability:(double)a1;

@end
