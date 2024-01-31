@class NSString, NSDate;

@interface BMProactiveHarvestingReminders : BMEventBase <BMStoreData> {
    BOOL _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
    BOOL _hasRaw_completionDateTimestamp;
    double _raw_completionDateTimestamp;
    BOOL _hasRaw_dueDateTimestamp;
    double _raw_dueDateTimestamp;
}

@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) NSString *domainID;
@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *notes;
@property (readonly, nonatomic) BOOL isAllDay;
@property (nonatomic) BOOL hasIsAllDay;
@property (readonly, nonatomic) NSDate *completionDateTimestamp;
@property (readonly, nonatomic) NSDate *dueDateTimestamp;
@property (readonly, nonatomic) int priority;
@property (nonatomic) BOOL hasPriority;
@property (readonly, nonatomic) NSString *contentProtection;
@property (readonly, nonatomic) NSString *personaId;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initByReadFrom:(id)a0;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (void)writeTo:(id)a0;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithUniqueID:(id)a0 domainID:(id)a1 absoluteTimestamp:(id)a2 title:(id)a3 notes:(id)a4 isAllDay:(id)a5 completionDateTimestamp:(id)a6 dueDateTimestamp:(id)a7 priority:(id)a8 contentProtection:(id)a9 personaId:(id)a10;

@end
