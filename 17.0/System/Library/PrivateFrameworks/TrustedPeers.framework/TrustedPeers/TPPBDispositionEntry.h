@class NSString, TPPBDisposition;

@interface TPPBDispositionEntry : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPeerID;
@property (retain, nonatomic) NSString *peerID;
@property (readonly, nonatomic) BOOL hasDisposition;
@property (retain, nonatomic) TPPBDisposition *disposition;

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

@end
