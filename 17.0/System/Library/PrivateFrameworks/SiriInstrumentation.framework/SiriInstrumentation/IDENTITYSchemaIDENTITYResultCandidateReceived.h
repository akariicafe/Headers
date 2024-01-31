@class NSString, NSData, IDENTITYSchemaIDENTITYIDScoreCard;

@interface IDENTITYSchemaIDENTITYResultCandidateReceived : SISchemaInstrumentationMessage {
    struct { unsigned char isSelected : 1; } _has;
}

@property (copy, nonatomic) NSString *resultCandidateId;
@property (nonatomic) BOOL hasResultCandidateId;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL hasIsSelected;
@property (retain, nonatomic) IDENTITYSchemaIDENTITYIDScoreCard *identityScoreCard;
@property (nonatomic) BOOL hasIdentityScoreCard;
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
- (void)deleteIdentityScoreCard;
- (void)deleteIsSelected;
- (void)deleteResultCandidateId;

@end
