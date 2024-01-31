@class NSString;

@interface PAPBApplication : PBCodable <NSCopying> {
    struct { unsigned char identifierType : 1; } _has;
}

@property (nonatomic) BOOL hasIdentifierType;
@property (nonatomic) int identifierType;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
