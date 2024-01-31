@class NSString, NSData;

@interface LTSchemaError : SISchemaInstrumentationMessage {
    struct { unsigned char code : 1; } _has;
}

@property (copy, nonatomic) NSString *domain;
@property (nonatomic) BOOL hasDomain;
@property (nonatomic) unsigned int code;
@property (nonatomic) BOOL hasCode;
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
- (void)deleteCode;
- (void)deleteDomain;

@end
