@class NSString, NSArray, NSData;

@interface UAFSchemaUAFAssetSubscriberSubscriptions : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *subscriberName;
@property (nonatomic) BOOL hasSubscriberName;
@property (copy, nonatomic) NSArray *subscriptions;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)clearSubscriptions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (unsigned long long)subscriptionsCount;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)subscriptionsAtIndex:(unsigned long long)a0;
- (id)initWithJSON:(id)a0;
- (void)addSubscriptions:(id)a0;
- (void)deleteSubscriberName;
- (void)deleteSubscriptions;

@end
