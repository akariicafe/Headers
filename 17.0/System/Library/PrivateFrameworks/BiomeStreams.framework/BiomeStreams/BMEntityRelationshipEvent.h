@class NSString, NSDictionary, BMEntity;

@interface BMEntityRelationshipEvent : NSObject <BMStoreData, BMProtoBufWrapper>

@property (readonly, nonatomic) NSString *clientId;
@property (readonly, nonatomic) NSString *relationship;
@property (readonly, nonatomic) BMEntity *sourceEntity;
@property (readonly, nonatomic) BMEntity *targetEntity;
@property (readonly, nonatomic) NSDictionary *attributes;
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
- (id)entityFromPBEntity:(id)a0;
- (id)initWithClientId:(id)a0 relationship:(id)a1 sourceEntity:(id)a2 targetEntity:(id)a3 attributes:(id)a4;

@end
