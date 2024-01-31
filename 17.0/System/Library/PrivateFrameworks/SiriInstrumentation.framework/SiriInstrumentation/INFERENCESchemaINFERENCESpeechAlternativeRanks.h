@class NSData;

@interface INFERENCESchemaINFERENCESpeechAlternativeRanks : SISchemaInstrumentationMessage {
    struct { unsigned char isError : 1; unsigned char version : 1; unsigned char givenNameRank : 1; unsigned char middleNameRank : 1; unsigned char familyNameRank : 1; unsigned char fullNameRank : 1; } _has;
}

@property (nonatomic) BOOL isError;
@property (nonatomic) BOOL hasIsError;
@property (nonatomic) unsigned int version;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int givenNameRank;
@property (nonatomic) BOOL hasGivenNameRank;
@property (nonatomic) unsigned int middleNameRank;
@property (nonatomic) BOOL hasMiddleNameRank;
@property (nonatomic) unsigned int familyNameRank;
@property (nonatomic) BOOL hasFamilyNameRank;
@property (nonatomic) unsigned int fullNameRank;
@property (nonatomic) BOOL hasFullNameRank;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)deleteVersion;
- (id)initWithJSON:(id)a0;
- (void)deleteFamilyNameRank;
- (void)deleteFullNameRank;
- (void)deleteGivenNameRank;
- (void)deleteIsError;
- (void)deleteMiddleNameRank;

@end
