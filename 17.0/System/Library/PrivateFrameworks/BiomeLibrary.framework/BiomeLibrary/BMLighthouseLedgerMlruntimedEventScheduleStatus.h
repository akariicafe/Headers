@class NSString;

@interface BMLighthouseLedgerMlruntimedEventScheduleStatus : BMEventBase <BMStoreData>

@property (readonly, nonatomic) BOOL scheduled;
@property (nonatomic) BOOL hasScheduled;
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
- (BOOL)isEqual:(id)a0;
- (id)initWithScheduled:(id)a0;

@end
