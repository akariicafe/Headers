@class NSMutableArray;

@interface NNMKProtoAccountAuthenticationStatus : PBCodable <NSCopying> {
    struct { unsigned char requestTime : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *accountsStatus;
@property (nonatomic) BOOL hasRequestTime;
@property (nonatomic) double requestTime;

+ (Class)accountsStatusType;

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
- (id)accountsStatusAtIndex:(unsigned long long)a0;
- (unsigned long long)accountsStatusCount;
- (void)addAccountsStatus:(id)a0;
- (void)clearAccountsStatus;

@end
