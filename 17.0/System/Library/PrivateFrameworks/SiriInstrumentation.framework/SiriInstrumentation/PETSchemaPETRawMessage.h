@class NSData, NSString;

@interface PETSchemaPETRawMessage : SISchemaInstrumentationMessage {
    struct { unsigned char type_id : 1; } _has;
}

@property (nonatomic) unsigned int type_id;
@property (nonatomic) BOOL hasType_id;
@property (copy, nonatomic) NSData *raw_bytes;
@property (nonatomic) BOOL hasRaw_bytes;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
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
- (void)deleteRaw_bytes;
- (void)deleteName;
- (void)deleteType_id;

@end
