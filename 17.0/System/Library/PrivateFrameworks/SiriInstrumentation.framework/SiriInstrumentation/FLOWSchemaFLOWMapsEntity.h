@class NSString, NSData;

@interface FLOWSchemaFLOWMapsEntity : SISchemaInstrumentationMessage

@property (nonatomic) unsigned long long muid;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) unsigned long long mapsFeatureId;
@property (nonatomic) BOOL hasMapsFeatureId;
@property (copy, nonatomic) NSString *addressId;
@property (nonatomic) BOOL hasAddressId;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEntityid;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAddressId;
- (void)deleteMapsFeatureId;
- (void)deleteMuid;

@end
