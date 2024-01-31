@class NSString, NSArray, NSDate;

@interface BMProactiveHarvestingParsecSearch : BMEventBase <BMStoreData> {
    BOOL _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
}

@property (readonly, nonatomic) NSString *resultID;
@property (readonly, nonatomic) NSString *domainID;
@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) NSString *userInput;
@property (readonly, nonatomic) NSString *completedQuery;
@property (readonly, nonatomic) NSArray *entities;
@property (readonly, nonatomic) NSString *uniqueID;
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
- (id)_entitiesJSONArray;
- (id)initWithResultID:(id)a0 domainID:(id)a1 absoluteTimestamp:(id)a2 userInput:(id)a3 completedQuery:(id)a4 entities:(id)a5 uniqueID:(id)a6 contentProtection:(id)a7 personaId:(id)a8;

@end
