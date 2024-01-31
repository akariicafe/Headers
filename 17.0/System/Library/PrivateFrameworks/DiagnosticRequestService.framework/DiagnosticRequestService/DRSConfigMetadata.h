@class NSString, NSUUID, DRConfig, NSDate;

@interface DRSConfigMetadata : NSObject

@property (readonly, nonatomic) NSString *teamID;
@property (readonly, nonatomic) NSUUID *configUUID;
@property (readonly, nonatomic) NSDate *receivedDate;
@property (readonly, nonatomic) unsigned char state;
@property (readonly, nonatomic) unsigned long long completionType;
@property (readonly, nonatomic) NSDate *appliedDate;
@property (readonly, nonatomic) NSDate *completedDate;
@property (readonly, nonatomic) NSString *completionDescription;
@property (readonly, nonatomic) BOOL logTelemetry;
@property (readonly, nonatomic) BOOL reportToDecisionServer;
@property (readonly, nonatomic) DRConfig *config;

+ (id)_ON_CONTEXT_QUEUE_configMetadataForFilterPredicate:(id)a0 context:(id)a1 sortDescriptors:(id)a2 fetchLimit:(unsigned long long)a3 errorOut:(id *)a4;
+ (unsigned long long)_ON_CONTEXT_QUEUE_countForFilterPredicate:(id)a0 context:(id)a1 errorOut:(id *)a2;
+ (id)_ON_CONTEXT_QUEUE_existingBackingMOWithConfigUUID:(id)a0 context:(id)a1 errorOut:(id *)a2;
+ (BOOL)_isValidState:(unsigned char)a0 completionType:(unsigned long long)a1 receivedDate:(id)a2 appliedDate:(id)a3 completedDate:(id)a4 completionDescription:(id)a5;

- (id)jsonDictionaryRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_ON_CONTEXT_QUEUE_initWithConfigMetadataMO:(id)a0;
- (id)_ON_CONTEXT_QUEUE_moRepresentationInContext:(id)a0 createIfMissing:(BOOL)a1 errorOut:(id *)a2;
- (BOOL)_updateContextWithMORepresentation:(id)a0 errorOut:(id *)a1;
- (id)_uuidPredicate;
- (id)initWithTeamID:(id)a0 configUUID:(id)a1 state:(unsigned char)a2 completionType:(unsigned long long)a3 receivedDate:(id)a4 appliedDate:(id)a5 completedDate:(id)a6 completionDescription:(id)a7 config:(id)a8 logTelemetry:(BOOL)a9 reportToDecisionServer:(BOOL)a10;

@end
