@class NSString, NSData, SISchemaUUID;

@interface PEGASUSSchemaPEGASUSIntent : SISchemaInstrumentationMessage {
    struct { unsigned char intentCategory : 1; unsigned char source : 1; unsigned char confidence : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) int intentCategory;
@property (nonatomic) BOOL hasIntentCategory;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) int source;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) float confidence;
@property (nonatomic) BOOL hasConfidence;
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
- (void)deleteConfidence;
- (void)deleteIntentCategory;
- (void)deleteLinkId;
- (void)deleteName;
- (void)deleteSource;

@end
