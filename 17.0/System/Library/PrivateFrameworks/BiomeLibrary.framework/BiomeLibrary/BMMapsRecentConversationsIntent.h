@class NSString, BMMapsRecentConversationsIntentContactInformation, NSDate;

@interface BMMapsRecentConversationsIntent : BMEventBase <BMStoreData> {
    BOOL _hasRaw_predictionTimestamp;
    double _raw_predictionTimestamp;
    BOOL _hasRaw_predictionExpiration;
    double _raw_predictionExpiration;
}

@property (readonly, nonatomic) BMMapsRecentConversationsIntentContactInformation *contactInformation;
@property (readonly, nonatomic) int actionType;
@property (readonly, nonatomic) NSDate *predictionTimestamp;
@property (readonly, nonatomic) NSDate *predictionExpiration;
@property (readonly, nonatomic) NSString *bundleID;
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
- (id)initWithContactInformation:(id)a0 actionType:(int)a1 predictionTimestamp:(id)a2 predictionExpiration:(id)a3 bundleID:(id)a4;

@end
