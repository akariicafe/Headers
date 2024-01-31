@class NSMutableArray;

@interface NTPBArticleInfoListResponse : PBCodable <NSCopying>

@property (nonatomic) BOOL isValidBucketGroup;
@property (retain, nonatomic) NSMutableArray *articleInfoLists;

+ (Class)articleInfoListType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addArticleInfoList:(id)a0;
- (id)articleInfoListAtIndex:(unsigned long long)a0;
- (unsigned long long)articleInfoListsCount;
- (void)clearArticleInfoLists;

@end
