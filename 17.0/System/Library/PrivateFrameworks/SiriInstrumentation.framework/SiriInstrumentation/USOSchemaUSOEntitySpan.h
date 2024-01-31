@class NSString, USOSchemaUSOPayloadAttachmentInfo, NSData, USOSchemaUSOMatchInfo;

@interface USOSchemaUSOEntitySpan : SISchemaInstrumentationMessage {
    struct { unsigned char nodeIndex : 1; unsigned char sourceComponent : 1; unsigned char startIndex : 1; unsigned char endIndex : 1; unsigned char originAppBundleIdType : 1; } _has;
}

@property (nonatomic) unsigned int nodeIndex;
@property (nonatomic) BOOL hasNodeIndex;
@property (nonatomic) int sourceComponent;
@property (nonatomic) BOOL hasSourceComponent;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) BOOL hasLabel;
@property (retain, nonatomic) USOSchemaUSOMatchInfo *matchInfo;
@property (nonatomic) BOOL hasMatchInfo;
@property (nonatomic) unsigned int startIndex;
@property (nonatomic) BOOL hasStartIndex;
@property (nonatomic) unsigned int endIndex;
@property (nonatomic) BOOL hasEndIndex;
@property (nonatomic) int originAppBundleIdType;
@property (nonatomic) BOOL hasOriginAppBundleIdType;
@property (retain, nonatomic) USOSchemaUSOPayloadAttachmentInfo *payloadAttachmentInfo;
@property (nonatomic) BOOL hasPayloadAttachmentInfo;
@property (readonly, nonatomic) NSData *jsonData;

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
- (void)deleteNodeIndex;
- (void)deleteMatchInfo;
- (void)deleteEndIndex;
- (void)deleteLabel;
- (void)deleteOriginAppBundleIdType;
- (void)deletePayloadAttachmentInfo;
- (void)deleteSourceComponent;
- (void)deleteStartIndex;

@end
