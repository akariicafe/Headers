@class NSMutableArray;

@interface NPKProtoRemoveExpressPassesWithCardTypeResponse : PBCodable <NSCopying> {
    struct { unsigned char pending : 1; unsigned char success : 1; } _has;
}

@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL pending;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSMutableArray *actualExpressPassInformations;

+ (Class)actualExpressPassInformationType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)actualExpressPassInformationAtIndex:(unsigned long long)a0;
- (unsigned long long)actualExpressPassInformationsCount;
- (void)addActualExpressPassInformation:(id)a0;
- (void)clearActualExpressPassInformations;

@end
