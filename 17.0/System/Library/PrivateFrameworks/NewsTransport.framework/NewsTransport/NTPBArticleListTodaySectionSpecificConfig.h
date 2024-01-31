@class NSString;

@interface NTPBArticleListTodaySectionSpecificConfig : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasArticleListID;
@property (retain, nonatomic) NSString *articleListID;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
