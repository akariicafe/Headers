@class NSString, PAPBAccess;

@interface PAPBTCCAccess : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAccess;
@property (retain, nonatomic) PAPBAccess *access;
@property (readonly, nonatomic) BOOL hasTccService;
@property (retain, nonatomic) NSString *tccService;

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
