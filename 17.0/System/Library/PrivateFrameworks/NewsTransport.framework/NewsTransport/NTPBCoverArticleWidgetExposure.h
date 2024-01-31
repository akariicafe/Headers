@class NSData;

@interface NTPBCoverArticleWidgetExposure : PBCodable <NSCopying> {
    struct { unsigned char coverArticleWidgetArticleCount : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasCoverArticleWidgetExposureSessionId;
@property (retain, nonatomic) NSData *coverArticleWidgetExposureSessionId;
@property (nonatomic) BOOL hasCoverArticleWidgetArticleCount;
@property (nonatomic) int coverArticleWidgetArticleCount;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;
@property (retain, nonatomic) NSData *feedViewExposureId;

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
