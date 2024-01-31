@class BMLighthouseLedgerTrialIdentifiers, NSString, NSDate, BMLighthouseLedgerLighthousePluginEventEventStatus;

@interface BMLighthouseLedgerLighthousePluginEvent : BMEventBase <BMStoreData> {
    BOOL _hasRaw_timestamp;
    double _raw_timestamp;
}

@property (readonly, nonatomic) BMLighthouseLedgerTrialIdentifiers *trialIdentifiers;
@property (readonly, nonatomic) NSString *contextID;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) BMLighthouseLedgerLighthousePluginEventEventStatus *performTaskStatus;
@property (readonly, nonatomic) BMLighthouseLedgerLighthousePluginEventEventStatus *performTrialTaskStatus;
@property (readonly, nonatomic) BMLighthouseLedgerLighthousePluginEventEventStatus *stop;
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
- (id)initWithTrialIdentifiers:(id)a0 contextID:(id)a1 timestamp:(id)a2 performTaskStatus:(id)a3 performTrialTaskStatus:(id)a4 stop:(id)a5;

@end
