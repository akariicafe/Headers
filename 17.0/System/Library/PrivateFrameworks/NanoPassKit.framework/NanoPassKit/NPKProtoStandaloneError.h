@class NSString, NSMutableArray;

@interface NPKProtoStandaloneError : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) long long code;
@property (retain, nonatomic) NSMutableArray *userInfos;

+ (Class)userInfosType;

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
- (void)clearUserInfos;
- (unsigned long long)userInfosCount;
- (void)addUserInfos:(id)a0;
- (id)userInfosAtIndex:(unsigned long long)a0;

@end
