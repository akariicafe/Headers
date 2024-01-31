@class BMLighthouseLedgerTrialIdentifiers, NSString, BMLighthouseLedgerDediscoPrivacyEventEventState, NSDate;

@interface BMLighthouseLedgerDediscoPrivacyEvent : BMEventBase <BMStoreData> {
    BOOL _hasRaw_timestamp;
    double _raw_timestamp;
}

@property (readonly, nonatomic) BMLighthouseLedgerTrialIdentifiers *trialIdentifiers;
@property (readonly, nonatomic) NSString *contextID;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSString *eventIdentifier;
@property (readonly, nonatomic) BMLighthouseLedgerDediscoPrivacyEventEventState *event;
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
- (id)initWithTrialIdentifiers:(id)a0 contextID:(id)a1 timestamp:(id)a2 eventIdentifier:(id)a3 event:(id)a4;

@end
