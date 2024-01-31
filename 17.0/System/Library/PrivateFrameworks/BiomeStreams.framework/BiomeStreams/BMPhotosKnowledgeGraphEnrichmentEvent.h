@class NSString, NSArray;

@interface BMPhotosKnowledgeGraphEnrichmentEvent : NSObject <BMPersonaAwareIdentifiableContentEvent, BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) NSString *personaId;
@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) NSArray *topics;
@property (readonly, nonatomic) NSArray *entities;
@property (readonly, nonatomic) NSArray *locations;
@property (readonly, nonatomic) NSString *contentProtection;
@property (readonly, nonatomic) NSString *domainId;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)init;
- (id)encodeAsProto;
- (id)proto;
- (id)serialize;
- (id)initWithProtoData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)jsonDict;
- (id)json;
- (void).cxx_destruct;
- (BOOL)isValidWithContext:(id)a0 error:(id *)a1;
- (BOOL)isCompleteWithContext:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUniqueId:(id)a0 absoluteTimestamp:(double)a1 topics:(id)a2 entities:(id)a3 locations:(id)a4;
- (id)initWithUniqueId:(id)a0 absoluteTimestamp:(double)a1 topics:(id)a2 entities:(id)a3 locations:(id)a4 contentProtection:(id)a5;
- (id)initWithUniqueId:(id)a0 personaId:(id)a1 absoluteTimestamp:(double)a2 topics:(id)a3 entities:(id)a4 locations:(id)a5 contentProtection:(id)a6;

@end
