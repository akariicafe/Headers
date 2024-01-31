@class NSData;

@interface ODMSiriSchemaODMSiriRequestCounts : SISchemaInstrumentationMessage {
    struct { unsigned char allRequestCount : 1; unsigned char userRequestCount : 1; } _has;
}

@property (nonatomic) unsigned int allRequestCount;
@property (nonatomic) BOOL hasAllRequestCount;
@property (nonatomic) unsigned int userRequestCount;
@property (nonatomic) BOOL hasUserRequestCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAllRequestCount;
- (void)deleteUserRequestCount;

@end
