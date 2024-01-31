@class NSString, NSData;

@interface MHSchemaMHOdldFalseTriggerMitigated : SISchemaInstrumentationMessage {
    struct { unsigned char odldScore : 1; unsigned char odldScoreThreshold : 1; unsigned char errorCode : 1; } _has;
}

@property (copy, nonatomic) NSString *modelVersion;
@property (nonatomic) BOOL hasModelVersion;
@property (nonatomic) float odldScore;
@property (nonatomic) BOOL hasOdldScore;
@property (nonatomic) float odldScoreThreshold;
@property (nonatomic) BOOL hasOdldScoreThreshold;
@property (copy, nonatomic) NSString *errorMessage;
@property (nonatomic) BOOL hasErrorMessage;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteErrorCode;
- (void)deleteOdldScore;
- (void)deleteErrorMessage;
- (void)deleteModelVersion;
- (void)deleteOdldScoreThreshold;

@end
