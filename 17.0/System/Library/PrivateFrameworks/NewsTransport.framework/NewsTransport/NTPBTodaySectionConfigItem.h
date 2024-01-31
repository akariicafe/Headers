@class NTPBTodaySectionConfigWebEmbed, NTPBTodaySectionConfigArticle;

@interface NTPBTodaySectionConfigItem : PBCodable <NSCopying> {
    struct { unsigned char itemType : 1; } _has;
}

@property (nonatomic) BOOL hasItemType;
@property (nonatomic) int itemType;
@property (readonly, nonatomic) BOOL hasArticle;
@property (retain, nonatomic) NTPBTodaySectionConfigArticle *article;
@property (readonly, nonatomic) BOOL hasWebEmbed;
@property (retain, nonatomic) NTPBTodaySectionConfigWebEmbed *webEmbed;

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
