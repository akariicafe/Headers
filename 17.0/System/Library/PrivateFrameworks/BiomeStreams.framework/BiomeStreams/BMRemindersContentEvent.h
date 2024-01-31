@class NSString;

@interface BMRemindersContentEvent : NSObject <BMPersonaAwareIdentifiableContentEvent, BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) NSString *domainId;
@property (readonly, nonatomic) NSString *personaId;
@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *notes;
@property (readonly, nonatomic) BOOL isAllDay;
@property (readonly, nonatomic) double completionDateTimestamp;
@property (readonly, nonatomic) double dueDateTimestamp;
@property (readonly, nonatomic) int priority;
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
- (id)initWithUniqueId:(id)a0 domainId:(id)a1 absoluteTimestamp:(double)a2 title:(id)a3 notes:(id)a4 isAllDay:(BOOL)a5 completionDateTimestamp:(double)a6 dueDateTimestamp:(double)a7 priority:(int)a8;
- (id)initWithUniqueId:(id)a0 domainId:(id)a1 absoluteTimestamp:(double)a2 title:(id)a3 notes:(id)a4 isAllDay:(BOOL)a5 completionDateTimestamp:(double)a6 dueDateTimestamp:(double)a7 priority:(int)a8 contentProtection:(id)a9;
- (id)initWithUniqueId:(id)a0 domainId:(id)a1 personaId:(id)a2 absoluteTimestamp:(double)a3 title:(id)a4 notes:(id)a5 isAllDay:(BOOL)a6 completionDateTimestamp:(double)a7 dueDateTimestamp:(double)a8 priority:(int)a9 contentProtection:(id)a10;

@end
