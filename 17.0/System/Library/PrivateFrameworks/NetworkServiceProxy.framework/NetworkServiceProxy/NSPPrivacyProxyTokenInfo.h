@class NSString, NSData, NSMutableArray;

@interface NSPPrivacyProxyTokenInfo : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *proxyURL;
@property (retain, nonatomic) NSData *tokenKeyID;
@property (retain, nonatomic) NSMutableArray *unactivatedTokenLists;
@property (readonly, nonatomic) BOOL hasVendor;
@property (retain, nonatomic) NSString *vendor;

+ (Class)unactivatedTokenListType;

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
- (void)addUnactivatedTokenList:(id)a0;
- (void)clearUnactivatedTokenLists;
- (id)unactivatedTokenListAtIndex:(unsigned long long)a0;
- (unsigned long long)unactivatedTokenListsCount;

@end
