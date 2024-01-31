@class NSString;

@interface BMLighthouseLedgerDediscoPrivacyEventEventState : BMEventBase <BMStoreData>

@property (readonly, nonatomic) int phase;
@property (readonly, nonatomic) BOOL succeeded;
@property (nonatomic) BOOL hasSucceeded;
@property (readonly, nonatomic) NSString *errorMessage;
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
- (id)initWithPhase:(int)a0 succeeded:(id)a1 errorMessage:(id)a2;

@end
