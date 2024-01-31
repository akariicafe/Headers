@class NSString, NSArray;

@interface BMParsecSearchEngagementEvent : NSObject <BMPersonaAwareIdentifiableContentEvent, BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) NSString *resultId;
@property (readonly, nonatomic) NSString *domainId;
@property (readonly, nonatomic) NSString *personaId;
@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) NSString *userInput;
@property (readonly, nonatomic) NSString *completedQuery;
@property (readonly, nonatomic) NSArray *entities;
@property (readonly, nonatomic) NSString *contentProtection;
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
- (id)initWithUniqueId:(id)a0 resultId:(id)a1 domainId:(id)a2 absoluteTimestamp:(double)a3 userInput:(id)a4 completedQuery:(id)a5 entities:(id)a6;
- (id)initWithUniqueId:(id)a0 resultId:(id)a1 domainId:(id)a2 absoluteTimestamp:(double)a3 userInput:(id)a4 completedQuery:(id)a5 entities:(id)a6 contentProtection:(id)a7;
- (id)initWithUniqueId:(id)a0 resultId:(id)a1 domainId:(id)a2 personaId:(id)a3 absoluteTimestamp:(double)a4 userInput:(id)a5 completedQuery:(id)a6 entities:(id)a7 contentProtection:(id)a8;

@end
