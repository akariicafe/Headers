@class NSString;

@interface NTPBArticleScrollNotw : PBCodable <NSCopying> {
    struct { unsigned char maxScrollDepth : 1; } _has;
}

@property (nonatomic) BOOL hasMaxScrollDepth;
@property (nonatomic) float maxScrollDepth;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (readonly, nonatomic) BOOL hasWindowId;
@property (retain, nonatomic) NSString *windowId;

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
