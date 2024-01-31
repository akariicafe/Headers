@class NSString;

@interface NTPBArticleViewNotw : PBCodable <NSCopying> {
    struct { unsigned char articleViewType : 1; unsigned char maxScrollDepth : 1; } _has;
}

@property (nonatomic) BOOL hasArticleViewType;
@property (nonatomic) int articleViewType;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic) BOOL hasMaxScrollDepth;
@property (nonatomic) float maxScrollDepth;
@property (readonly, nonatomic) BOOL hasReferringUrl;
@property (retain, nonatomic) NSString *referringUrl;
@property (readonly, nonatomic) BOOL hasReferringSite;
@property (retain, nonatomic) NSString *referringSite;
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
