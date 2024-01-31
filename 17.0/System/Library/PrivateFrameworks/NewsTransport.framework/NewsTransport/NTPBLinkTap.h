@class NSString, NSData;

@interface NTPBLinkTap : PBCodable <NSCopying> {
    struct { unsigned char groupType : 1; unsigned char linkType : 1; unsigned char tapLocationType : 1; unsigned char webEmbedLocation : 1; } _has;
}

@property (nonatomic) BOOL hasTapLocationType;
@property (nonatomic) int tapLocationType;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) BOOL hasReferencedArticleId;
@property (retain, nonatomic) NSString *referencedArticleId;
@property (readonly, nonatomic) BOOL hasTappedLinkUrl;
@property (retain, nonatomic) NSString *tappedLinkUrl;
@property (readonly, nonatomic) BOOL hasWebEmbedId;
@property (retain, nonatomic) NSString *webEmbedId;
@property (nonatomic) BOOL hasWebEmbedLocation;
@property (nonatomic) int webEmbedLocation;
@property (nonatomic) BOOL hasLinkType;
@property (nonatomic) int linkType;
@property (nonatomic) BOOL hasGroupType;
@property (nonatomic) int groupType;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (retain, nonatomic) NSData *articleViewingSessionId;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsWebEmbedLocation:(id)a0;
- (int)StringAsGroupType:(id)a0;
- (id)groupTypeAsString:(int)a0;
- (id)webEmbedLocationAsString:(int)a0;

@end
