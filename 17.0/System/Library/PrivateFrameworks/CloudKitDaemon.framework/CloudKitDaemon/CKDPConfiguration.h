@class NSMutableArray;

@interface CKDPConfiguration : PBCodable <NSCopying> {
    struct { unsigned char created : 1; unsigned char expires : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *fields;
@property (nonatomic) BOOL hasCreated;
@property (nonatomic) unsigned long long created;
@property (nonatomic) BOOL hasExpires;
@property (nonatomic) unsigned long long expires;

+ (Class)fieldsType;

- (unsigned long long)hash;
- (void)clearFields;
- (void)addFields:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)fieldsCount;
- (id)fieldsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
