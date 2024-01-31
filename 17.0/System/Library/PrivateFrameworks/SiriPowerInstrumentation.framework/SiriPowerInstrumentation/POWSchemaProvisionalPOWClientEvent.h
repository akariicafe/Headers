@class POWSchemaProvisionalPOWUsage, NSData, SISchemaRequestLinkInfo;

@interface POWSchemaProvisionalPOWClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) SISchemaRequestLinkInfo *link;
@property (nonatomic) BOOL hasLink;
@property (retain, nonatomic) POWSchemaProvisionalPOWUsage *usage;
@property (nonatomic) BOOL hasUsage;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (int)getAnyEventType;
- (id)getVersion;
- (unsigned long long)hash;
- (id)qualifiedMessageName;
- (BOOL)readFrom:(id)a0;
- (void)deleteLink;
- (void)writeTo:(id)a0;
- (id)getTypeId;
- (BOOL)isProvisional;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)deleteUsage;
- (id)initWithJSON:(id)a0;

@end
