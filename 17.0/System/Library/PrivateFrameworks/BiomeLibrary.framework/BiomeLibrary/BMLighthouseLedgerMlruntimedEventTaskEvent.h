@class NSString;

@interface BMLighthouseLedgerMlruntimedEventTaskEvent : BMEventBase <BMStoreData>

@property (readonly, nonatomic) BOOL succeeded;
@property (nonatomic) BOOL hasSucceeded;
@property (readonly, nonatomic) NSString *errorDomain;
@property (readonly, nonatomic) int errorCode;
@property (nonatomic) BOOL hasErrorCode;
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
- (id)initWithSucceeded:(id)a0 errorDomain:(id)a1 errorCode:(id)a2;

@end
